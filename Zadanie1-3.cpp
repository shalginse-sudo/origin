
#include <iostream>
#include <string>
#include <Windows.h>

struct adress
{
    std::string city;
    std::string street;
    int houseNumber = 0;
    int apartmentNumber = 0;
    int index = 0;
};

void output(adress c)
{
    std::cout << "Город: " << c.city << std::endl;
    std::cout << "Улица: " << c.street << std::endl;
    std::cout << "Номер дома: " << c.houseNumber << std::endl;
    std::cout << "Номер квартиры: " << c.apartmentNumber << std::endl;
    std::cout << "Индекс: " << c.index << std::endl;
    std::cout << std::endl;
}

int main()
{
    //SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    adress p = {"Москва", "Арбат", 12, 8, 12345678};
    output(p);
    adress x = { "Санкт-Петербург", "Маршала Блюхера", 11, 78, 87654321 };
    output(x);
}
