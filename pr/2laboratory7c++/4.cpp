#include <iostream>
#include <stdexcept>

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    // Конструктор
    Time(int h, int m, int s) {
        if (h < 0 || h > 23) {
            throw std::invalid_argument("Hours must be between 0 and 23.");
        }
        if (m < 0 || m > 59) {
            throw std::invalid_argument("Minutes must be between 0 and 59.");
        }
        if (s < 0 || s > 59) {
            throw std::invalid_argument("Seconds must be between 0 and 59.");
        }
        hours = h;
        minutes = m;
        seconds = s;
    }

    // Метод для вывода времени в формате "HH:MM:SS"
    void printTime() const {
        std::cout << std::setw(2) << std::setfill('0') << hours << ":"
            << std::setw(2) << std::setfill('0') << minutes << ":"
            << std::setw(2) << std::setfill('0') << seconds << std::endl;
    }

    // Метод для перевода времени в общее количество секунд
    int totalSeconds() const {
        return hours * 3600 + minutes * 60 + seconds;
    }
};

int main() {
    try {
        // Создание объекта с корректными значениями
        Time correctTime(12, 34, 56);
        correctTime.printTime();
        std::cout << "Total seconds: " << correctTime.totalSeconds() << std::endl;

        // Попытка создать объект с некорректными значениями
        Time incorrectTime(24, 60, 60);
    }
    catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
