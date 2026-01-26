#include <iostream>
#include <windows.h>

int sum(int a, int b);
int substr(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);
int pow(int a, int b);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int a = 0;
    int b = 0;
    int op = 0;

    std::cout << "Введите первое число: ";
    std::cin >> a;
    std::cout << "Введите второе число: ";
    std::cin >> b;
    std::cout << "Выберите операцию (1 - сложение, 2 вычитание, "
        "3 - умножение, 4 - деление, 5 - возведение в степень): ";
    std::cin >> op;
    std::cout << std::endl;

    int res = 0;
    switch (op) {
    case 1:
        res = sum(a, b);
        break;
    case 2:
        res = substr(a, b);
        break;
    case 3:
        res = multiply(a, b);
        break;
    case 4:
        res = divide(a, b);
        break;
    case 5:
        res = pow(a, b);
        break;
    default:
        std::cout << "Неизвестная операция";
        return 0;
    }

    std::cout << res;
}