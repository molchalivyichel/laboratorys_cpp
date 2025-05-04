#include "account.h"

extern int currentAccount;

Account::Account(string _name, unsigned _numberCard, string _codeCard, string _password, unsigned int _balance) 
    : name(_name), numberCard(_numberCard), codeCard(_codeCard), password(_password), balance(_balance) { currentAccount++;}

void Account::deposit(Account& otherAccount, unsigned int sum)
{
    if (checkTransfer(balance, sum)) {
        balance -= sum;
        otherAccount.balance += sum;
        cout << "Перевод выполнен." << endl;
    }
    else {
        cout << "Недостаточно средств." << endl;
    }
}

void Account::withdraw(unsigned int sum)
{
    if (checkTransfer(balance, sum)) {
        balance -= sum;
        cout << "Средства выведены." << endl;
    }
    else {
        cout << "Недостаточно средств." << endl;
    }
}

void Account::printBalance() const
{
    cout << "Ваш баланс счета составляет " << balance << " настоящей валюты." << endl;
}

bool Account::checkTransfer(unsigned int balance, unsigned int sum) const
{
    if (balance-sum >= 0) {
        return true;
    }
    return false;
}