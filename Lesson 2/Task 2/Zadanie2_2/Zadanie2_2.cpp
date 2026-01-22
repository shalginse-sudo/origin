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

void cycle(Counter ab)
{
    char op;
    do
    {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> op;
        if (op == '+')
        {
            ab.increase();
        }
        if (op == '-')
        {
            ab.decrease();
        }
        if (op == '=')
        {
            ab.view();
        }
    } while (op != 'x');
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string p;

    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::cin >> p;
    if (p == "да" || p == "ДА" || p == "Да" || p == "дА")
    {
        int number = 0;
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> number;
        Counter hip(number);
        cycle(hip);
    }
    else 
    {
        Counter hip1;
        cycle(hip1);
    }
}

