package main

import (
	"fmt"
)
type MemoryStorage interface {
	Save(key string, value string) error
	Get(key string) (string, error)
}

type Storage struct {
	dict map[string]string
}

func (s *Storage) Save(key string, value string) error {
	s.dict[key] = value
	return nil
}

func (s *Storage) Get(key string) (string, error) {
	return s.dict[key], nil
}

func printAll(ms *[]MemoryStorage) {
	for i := 0; i < len(*ms); i++ {
		fmt.Println((*ms)[i])
	}
}

func main() {
	storageMassive := []MemoryStorage{ 
		&Storage{dict: make(map[string]string)},
		&Storage{dict: make(map[string]string)},
	}
	id := 0
	funct := ""
	parametrs := []string{"",""}

	answer := ""
	var err error
	

	for err == nil{
		fmt.Println("Порядок написания. idStorage funcStorage(Save - s, Get - g). Для выхода введите \"-1 b\"") //Например: 3 s
		fmt.Scan(&id,&funct)
		
		if funct == "s" && (id < len(storageMassive) && id >= 0){
			fmt.Scan(&parametrs[0], &parametrs[1])
			err = storageMassive[id].Save(parametrs[0],parametrs[1])

		} else if funct == "g" && (id < len(storageMassive) && id >= 0){
			fmt.Scan(&parametrs[0])
			answer,err = storageMassive[id].Get(parametrs[0])
			fmt.Println(answer)
		} else if id == -1 && funct == "b"{
			break
		} else {
			fmt.Println("Неверная операция")
		}
		printAll(&storageMassive)
	}

	if id != -1 && funct != "b" {
		fmt.Println(err.Error())
	}
}