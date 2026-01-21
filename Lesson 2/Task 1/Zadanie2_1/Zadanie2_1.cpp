
#include <iostream>
#include <windows.h>

class Calculator
{
    double num1;
    double num2;

public:
    Calculator(double num1, double num2)
    {
        this->num1 = num1;
        this->num2 = num2;
    }

    double add()
    {
        double summ = this->num1 + this->num2;
        return summ;
    }

    double multiply()
    {
        double mul = this->num1 * this->num2;
        return mul;
    }

    double subtract_1_2()
    {
        double sub2_1 = this->num2 - this->num1;
        return sub2_1;
    }

    double subtract_2_1()
    {
        double sub1_2 = this->num1 - this->num2;
        return sub1_2;
    }

    double divide_1_2()
    {
        double div1_2 = this->num1 / this->num2;
        return div1_2;
    }

    double divide_2_1()
    {
        double div2_1 = this->num2 / this->num1;
        return div2_1;
    }

    bool set_num1(double num1)
    {
        if (num1 != 0)
        {
            this->num1 = num1;
            return true;
        }
        return false;
    }

    bool set_num2(double num2)
    {
        if (num2 != 0)
        {
            this->num2 = num2;
            return true;
        }
        return false;
    }
};
 
int main()
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double a = 0.0;
    double b = 0.0;
    
    Calculator p(a, b);

    do
    {
        std::cout << "Введите num1: ";
        std::cin >> a;
        while (p.set_num1(a) == false)
        {
            std::cout << "Неверный ввод!" << std::endl;
            std::cout << "Введите num1: ";
            std::cin >> a;
        }

        std::cout << "Введите num2: ";
        std::cin >> b;
        while (p.set_num2(b) == false)
        {
            std::cout << "Неверный ввод!" << std::endl;
            std::cout << "Введите num2: ";
            std::cin >> b;
        }

        std::cout << "num1 + num2 = " << p.add() << std::endl;
        std::cout << "num1 - num2 = " << p.subtract_2_1() << std::endl;
        std::cout << "num2 - num1 = " << p.subtract_1_2() << std::endl;
        std::cout << "num1 * num2 = " << p.multiply() << std::endl;
        std::cout << "num1 / num2 = " << p.divide_1_2() << std::endl;
        std::cout << "num2 / num1 = " << p.divide_2_1() << std::endl;
    } while (true);

}
