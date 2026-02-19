#include <iostream>
#include <exception>
#include <windows.h>


int function(std::string str, int forbidden_length)
{
    int dl = str.length();
    if (dl != forbidden_length)
    {
        return dl;
    }

    throw std::exception("Вы ввели слово запретной длины! До свидания");
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int zdl = 0;
    std::string slov;
    std::cout << "Введите запретную длину: ";
    std::cin >> zdl;
    while (true)
    {
        std::cout << "Введите слово: ";
        std::cin >> slov;

        try {                    // входв блок,который следит за исключением
            function(slov, zdl);
        }
        catch (std::exception& e) {  //обработка исключения
            std::cout << e.what();
            break;
        }

        std::cout << "Длина слова " << '"' << slov << '"' << " равна " << function(slov, zdl) << std::endl;
        
    }

}
