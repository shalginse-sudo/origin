#include <iostream>
#include <windows.h>

class Counter
{
    int gip;

public:
    Counter(int g)
    {
        gip = g;
    }

    Counter()
    {
        gip = 1;
    }

    int increase()
    {
        int inc = gip++;
        return inc;
    }

    int decrease()
    {
        int dec = gip--;
        return dec;
    }

    void view()
    {
        int vi = gip;
        std::cout << vi << std::endl;
    }
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string p;
    char oper;

    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::cin >> p;
    if (p == "да" || p == "ДА" || p == "Да" || p == "дА")
    {
        int number = 0;
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> number;
        Counter hip(number);

        do
        {
            std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
            std::cin >> oper;
            if (oper == '+')
            {
                hip.increase();
            }
            if (oper == '-')
            {
                hip.decrease();
            }
            if (oper == '=')
            {
                hip.view();
            }
        } while (oper != 'x');
    }
    else 
    {
        Counter hip1;
        do
        {
            std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
            std::cin >> oper;
            if (oper == '+')
            {
                hip1.increase();
            }
            if (oper == '-')
            {
                hip1.decrease();
            }
            if (oper == '=')
            {
                hip1.view();
            }
        } while (oper != 'x');
    }
}

