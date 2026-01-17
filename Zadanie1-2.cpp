// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <windows.h>
#include <iostream>
#include <string>


struct bankBalance
{
    int number = 0;
    std::string name;
    float money = 0.0;
};

void changingBalance(bankBalance* newSumm)
{
    newSumm->money;
}

int main()
{
    //setlocale(NULL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    bankBalance person;

    std::cout << "������� ����� �����: ";
    std::cin >> person.number;
    std::cout << "������� ��� ���������: ";
    std::cin >> person.name;
    std::wcout << "������� ������: ";
    std::cin >> person.money;
    std::wcout << "������� ����� ������: ";
    changingBalance(&person);
    std::cin >> person.money;

    std::cout << "��� ����: " << person.number << ", " <<  person.name << ", " << person.money;
}
