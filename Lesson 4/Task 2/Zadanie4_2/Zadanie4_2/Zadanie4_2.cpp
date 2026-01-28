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
    
    virtual void print_info() {}
};

class Triangle : public Figure
{
protected:
    //Длины сторон
    int a = 10;
    int b = 20;
    int c = 30;

    //Углы в градусах
    int A = 50;
    int B = 60;
    int C = 70;

public:
    Triangle()
    {
        sides_count = 3;
        name = "Треугольник";
    }

    int get_a()
    {
        return a;
    }

    int get_b()
    {
        return b;
    }

    int get_c()
    {
        return c;
    }

    int get_A()
    {
        return A;
    }

    int get_B()
    {
        return B;
    }

    int get_C()
    {
        return C;
    }

    void print_info() override
    {
        std::cout << get_name() << ":" << std::endl;
        std::cout << "Стороны: a=" << get_a() << " b=" << get_b() << " c=" << get_c() << std::endl;
        std::cout << "Углы: A=" << get_A() << " B=" << get_B() << " C=" << get_C() << std::endl;
    }
};

//Прямоугольный треугольник
class RightTriangle : public Triangle
{
public:
    RightTriangle()
    {
        name = "Прямоугольный треугольник";

        a = 10;
        b = 20;
        c = 30;

        A = 50;
        B = 60;
        C = 90;
    }
};

//равнобедренный треугольник
class IsoscelesTriangle : public Triangle
{
public:
    IsoscelesTriangle()
    {
        name = "Равнобедренный треугольник";

        a = 10;
        b = 20;
        c = 10;

        A = 50;
        B = 60;
        C = 50;
    }
};

//Равносторонний треугольник
class EquilateralTriangle : public Triangle
{
public:
    EquilateralTriangle()
    {
        name = "Равносторонний треугольник";

        a = 30;
        b = 30;
        c = 30;

        A = 60;
        B = 60;
        C = 60;
    }
};

class Quadrangle : public Figure
{
protected:
    //Длины сторон
    int a = 10;
    int b = 20;
    int c = 30;
    int d = 40;

    //Углы в градусах
    int A = 50;
    int B = 60;
    int C = 70;
    int D = 80;

public:
    Quadrangle()
    {
        sides_count = 4;
        name = "Четырехугольник";
    }

    int get_a()
    {
        return a;
    }

    int get_b()
    {
        return b;
    }

    int get_c()
    {
        return c;
    }

    int get_d()
    {
        return d;
    }

    int get_A()
    {
        return A;
    }

    int get_B()
    {
        return B;
    }

    int get_C()
    {
        return C;
    }

    int get_D()
    {
        return D;
    }

    void print_info() override
    {
        std::cout << get_name() << ":" << std::endl;
        std::cout << "Стороны: a=" << get_a() << " b=" << get_b() << " c=" << get_c() << " d=" << get_d() << std::endl;
        std::cout << "Углы: A=" << get_A() << " B=" << get_B() << " C=" << get_C() << " D=" << get_D() << std::endl;
    } 
};

//Прямоугольник
class Rectangle2 : public Quadrangle
{
public:
    Rectangle2()
    {
        name = "Прямоугольник";

        a = 10;
        b = 20;
        c = 10;
        d = 20;

        A = 90;
        B = 90;
        C = 90;
        D = 90;
    }
};

//Квадрат
class Square : public Quadrangle
{
public:
    Square()
    {
        name = "Квадрат";

        a = 20;
        b = 20;
        c = 20;
        d = 20;

        A = 90;
        B = 90;
        C = 90;
        D = 90;
    }
};

//Паралеллограм
class Parallelogram : public Quadrangle
{
public:
    Parallelogram()
    {
        name = "Параллелограм";

        a = 20;
        b = 30;
        c = 20;
        d = 30;

        A = 30;
        B = 40;
        C = 30;
        D = 40;
    }
};

//Ромб
class Rhombus : public Quadrangle
{
public:
    Rhombus()
    {
        name = "Ромб";

        a = 20;
        b = 20;
        c = 20;
        d = 20;

        A = 30;
        B = 40;
        C = 30;
        D = 40;
    }
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Triangle triangle;
    RightTriangle rt;
    IsoscelesTriangle it;
    EquilateralTriangle et;
    Quadrangle q;
    Rectangle2 r;
    Square s;
    Parallelogram p;
    Rhombus rh;

    triangle.print_info();
    std::cout << std::endl;
    rt.print_info();
    std::cout << std::endl;
    it.print_info();
    std::cout << std::endl;
    et.print_info();
    std::cout << std::endl;
    q.print_info();
    std::cout << std::endl;
    r.print_info();
    std::cout << std::endl;
    s.print_info();
    std::cout << std::endl;
    p.print_info();
    std::cout << std::endl;
    rh.print_info();
}