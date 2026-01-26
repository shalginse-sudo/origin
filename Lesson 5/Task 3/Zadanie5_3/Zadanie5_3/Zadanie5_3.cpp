#include <windows.h>
#include <iostream>
#include "figure.h"
#include "triangle.h"
#include "equilateralTriangle.h"
#include "isoscelesTriangle.h"
#include "parallelogram.h"
#include "quadrangle.h"
#include "rectangle2.h"
#include "rhombus.h"
#include "rightTriangle.h"
#include "square.h"

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