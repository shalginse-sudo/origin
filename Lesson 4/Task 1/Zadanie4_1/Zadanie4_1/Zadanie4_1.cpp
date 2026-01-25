#include <iostream>
#include <windows.h>


class Figure
{
    protected:
    int sides_count = 0;
    std::string name = "Фигура";

    public:
    Figure()
    {
    }

    int get_sides_count()
    {
     return sides_count;
    }

    std::string get_name()
    {
        return name;
    }
};

class Triangle : public Figure
{
public:
    Triangle()
    {
        sides_count = 3;
        name = "Треугольник";
    }
};

class Quadrangle : public Figure
{
public:
    Quadrangle()
    {
        sides_count = 4;
        name = "Четырехугольник";
    }
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Figure o;
    Triangle triangle;
    Quadrangle quadrangle;
    
    std::cout << "Количество сторон: " << std::endl;
    std::cout << o.get_name() << ": " << o.get_sides_count() << std::endl;
    std::cout << triangle.get_name()<< ": " << triangle.get_sides_count() << std::endl;
    std::cout << quadrangle.get_name() << ": " << quadrangle.get_sides_count();
}