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

    virtual bool is_correct()
    {
        return true;
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

    bool is_correct() override
    {
        return (sides_count == 3) && ((A + B + C) == 180);
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

    bool is_correct() override
    {
        return (sides_count == 3) && ((A + B + C) == 180) && (C == 90);
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

    bool is_correct() override
    {
        return (sides_count == 3) && ((A + B + C) == 180) && (a == c) && (A == C);
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

    bool is_correct() override
    {
        return (sides_count == 3) && ((A + B + C) == 180) && (a == c) && (a == c) && (b == c) &&
            (A == 60) && (B == 60) && (C == 60);
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

    bool is_correct() override
    {
        return (sides_count == 4) && ((A + B + C) == 360);
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

    bool is_correct() override
    {
        return (sides_count == 4) && ((A + B + C) == 360) && (a == c) && (b == d) &&
            (A == 90) && (B == 90) && (C == 90) && (D == 90);
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

    bool is_correct() override
    {
        return (sides_count == 4) && ((A + B + C) == 360) && (a == b) && (b == c) && (c == d) && (d == a) &&
            (A == 90) && (B == 90) && (C == 90) && (D == 90);
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

    bool is_correct() override
    {
        return (sides_count == 4) && ((A + B + C) == 360) && (a == c) && (b == d) &&
            (A == C) && (B == D);
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

    bool is_correct() override
    {
        return (sides_count == 4) && ((A + B + C) == 360) && (a == b) && (b == c) && (c == d) && (d == a) &&
            (A == C) && (B == D);
    }
};

void print_info(Triangle* triangle)
{
    std::cout << triangle->get_name() << ":" << std::endl;
    (triangle->is_correct() ? std::cout << "Правильная" : std::cout << "Неправильная") << std::endl;;
    std::cout << "Количество сторон: " << triangle->get_sides_count() << std::endl;;
    std::cout << "Стороны: a=" << triangle->get_a() << " b=" << triangle->get_b() << " c=" << triangle->get_c() << std::endl;
    std::cout << "Углы: A=" << triangle->get_A() << " B=" << triangle->get_B() << " C=" << triangle->get_C() << std::endl;
}

void print_info(Quadrangle* q)
{
    std::cout << q->get_name() << ":" << std::endl;
    (q->is_correct() ? std::cout << "Правильная" : std::cout << "Неправильная") << std::endl;;
    std::cout << "Количество сторон: " << q->get_sides_count() << std::endl;;
    std::cout << "Стороны: a=" << q->get_a() << " b=" << q->get_b() << " c=" << q->get_c() << " d=" << q->get_d() << std::endl;
    std::cout << "Углы: A=" << q->get_A() << " B=" << q->get_B() << " C=" << q->get_C() << " D=" << q->get_D() << std::endl;
}
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Figure figure;
    Triangle triangle;
    RightTriangle rt;
    IsoscelesTriangle it;
    EquilateralTriangle et;
    Quadrangle q;
    Rectangle2 r;
    Square s;
    Parallelogram p;
    Rhombus rh;

    std::cout << figure.get_name() << ":" << std::endl;
    (figure.is_correct() ? std::cout << "Правильная" : std::cout << "Неправильная") << std::endl;;
    std::cout << "Количество сторон: " << figure.get_sides_count() << std::endl;;
    std::cout << std::endl;
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