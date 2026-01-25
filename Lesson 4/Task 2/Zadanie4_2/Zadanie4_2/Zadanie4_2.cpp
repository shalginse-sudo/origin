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

void print_info(Triangle* triangle)
{
    std::cout << triangle->get_name() << ":" << std::endl;
    std::cout << "Стороны: a=" << triangle->get_a() << " b=" << triangle->get_b() << " c=" << triangle->get_c() << std::endl;
    std::cout << "Углы: A=" << triangle->get_A() << " B=" << triangle->get_B() << " C=" << triangle->get_C() << std::endl;
}

void print_info(Quadrangle* q)
{
    std::cout << q->get_name() << ":" << std::endl;
    std::cout << "Стороны: a=" << q->get_a() << " b=" << q->get_b() << " c=" << q->get_c() << " d=" << q->get_d() << std::endl;
    std::cout << "Углы: A=" << q->get_A() << " B=" << q->get_B() << " C=" << q->get_C() << " D=" << q->get_D() << std::endl;
}
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

    print_info(&triangle);
    std::cout << std::endl;
    print_info(&rt);
    std::cout << std::endl;
    print_info(&it);
    std::cout << std::endl;
    print_info(&et);
    std::cout << std::endl;
    print_info(&q);
    std::cout << std::endl;
    print_info(&r);
    std::cout << std::endl;
    print_info(&s);
    std::cout << std::endl;
    print_info(&p);
    std::cout << std::endl;
    print_info(&rh);
}