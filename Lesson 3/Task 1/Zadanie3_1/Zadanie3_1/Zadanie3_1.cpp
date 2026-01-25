#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>

class address
{
private:
    std::string city;
    std::string street;
    int houseNumber = 0;
    int apartmentNumber = 0;

public:
    address(std::string city, std::string street, int houseNumber, int apartmentNumber)
    {
        this -> city = city;
        this -> street = street;
        this -> houseNumber = houseNumber;
        this -> apartmentNumber = apartmentNumber;
    }

    std::string get_output_address()
    {
        std::string vyvod = city + ", " + street + ", " + std::to_string(houseNumber) + ", " + std::to_string(apartmentNumber);
        return vyvod;
    }
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    //Считывание из файла и проверка на открытие файла
    std::ifstream fileIn("in.txt");
    if (!fileIn.is_open())
    {
        std::cout << "Не удалось открыть файл" << std::endl;
        return 0;
    }
    int number_of_addresses{};
    fileIn >> number_of_addresses;

    //Для хранения всех адресов, экземпляров вашего класса, заведите динамический массив типа address*
    address** hip = new address*[number_of_addresses];

    for (int i = 0; i < number_of_addresses; ++i)
    {
        std::string a;
        fileIn >> a;
        std::string b;
        fileIn >> b;
        int c;
        fileIn >> c;
        int d;
        fileIn >> d;
        hip[i] = new address(a, b, c, d);
    }

    fileIn.close();

    std::ofstream fileOut("C:\\Users\\shalg\\Documents\\Zadanie module 3\\Lesson 3\\Task 1\\Zadanie3_1\\Zadanie3_1\\out.txt");
    fileOut << number_of_addresses << std::endl;
    for (int i = number_of_addresses - 1; i >= 0; --i)
    {
        fileOut << hip[i]->get_output_address() << std::endl;
    }
    fileOut.close();
    
    for (int i = 0; i < number_of_addresses; ++i)
    {
        delete hip[i];
    }
    delete[] hip;
}