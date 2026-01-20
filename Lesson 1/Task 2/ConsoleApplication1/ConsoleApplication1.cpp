
#include <windows.h>
#include <iostream>
#include <string>


struct bankBalance
{
    int number = 0;
    std::string name;
    float money = 0.0;
};


float changingBalance(bankBalance* p, float moneyNew)
{
    p->money = moneyNew;
    return p->money;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    float newBalance = 0.0;

    bankBalance person;

    std::cout << "¬ведите номер счЄта: ";
    std::cin >> person.number;
    std::cout << "¬ведите им€ владельца: ";
    std::cin >> person.name;
    std::wcout << "¬ведите баланс: ";
    std::cin >> person.money;
    std::wcout << "¬ведите новый баланс: ";
    std::cin >> newBalance;

    std::cout << "¬аш счЄт : " << person.number << ", " <<  person.name << ", " << changingBalance(&person, newBalance);
}
