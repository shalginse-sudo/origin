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
        this->city = city;
        this->street = street;
        this->houseNumber = houseNumber;
        this->apartmentNumber = apartmentNumber;
    }

    std::string get_output_address()
    {
        std::string vyvod = city + ", " + street + ", " + std::to_string(houseNumber) + ", " + std::to_string(apartmentNumber);
        return vyvod;
    }

    std::string get_city()
    {
        return this->city;
    }
};

void sort(address** addresses, int size)
{
    bool swapped;
    do {
        swapped = false;
        for (int i = 1; i < size; ++i) 
        {
            // Сравниваем строки напрямую
            if (addresses[i - 1]->get_city() > addresses[i]->get_city())
            {
                // Меняем строки местами
                address *temp = addresses[i - 1];
                addresses[i - 1] = addresses[i];
                addresses[i] = temp;
                swapped = true;
            }
        }
        // Уменьшаем область проверки
        --size;
    } while (swapped);
}

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
    address** hip = new address * [number_of_addresses];

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

    std::ofstream fileOut("C:\\Users\\shalg\\Documents\\Zadanie module 3\\Lesson 3\\Task 2\\Zadanie3_2\\Zadanie3_2\\out.txt");
    fileOut << number_of_addresses << std::endl;
    
    sort(hip, number_of_addresses);

    for (int i = 0; i < number_of_addresses; ++i)
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