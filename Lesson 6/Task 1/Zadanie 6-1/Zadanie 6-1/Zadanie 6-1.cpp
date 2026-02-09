#include <iostream>
#include <windows.h>
#define MODE 0

#if !defined MODE
#error Необходимо определить MODE
#endif

#if MODE == 1
int add(int a, int b)
{
    return a + b;
}
#endif

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

#if MODE == 0
    std::cout << "Работаю в режиме тренировки\n";

#elif MODE == 1 
    int a = 0;
    int b = 0;
    std::cout << "Работаю в боевом режиме\n";
    std::cout << "Введите число 1: ";
    std::cin >> a;
    std::cout << "Введите число 2: ";
    std::cin >> b;
    std::cout << "Результат сложения: " << add(a,b);

#else 
    std::cout << "Неизвестный режим. Завершение работы" << std::endl;
#endif
}

