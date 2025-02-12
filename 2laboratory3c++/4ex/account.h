#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
#include <iostream>

using namespace std;

class Account
{
public:
    Account(string _name, unsigned _numberCard, string _codeCard, string _password, unsigned int _balance);
    string name;
    unsigned numberCard;

private:
    string codeCard;
    string password;
    unsigned int balance;

public:
    void deposit(Account& otherAccount, unsigned int sum);
    void withdraw(unsigned int sum);
    void printBalance() const;

private:
    bool checkTransfer(unsigned int balance, unsigned int sum) const;
};

#endif