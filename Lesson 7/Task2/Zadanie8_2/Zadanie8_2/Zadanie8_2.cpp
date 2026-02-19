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
#include "exception.h"

void print_created_figure(Figure *figure)
{
    std::cout << figure->get_name() << "(" << figure->get_info() + ") создан" << std::endl;
}

void print_error(const Exception &e)
{
    std::cout << "Ошибка создания фигуры. Причина: " << e.what() << std::endl;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    try {
        //здесь можно создавать различные фигуры для тестов
        Triangle triangle(1, 2, 3, 60, 70, 50);
        print_created_figure(&triangle);
    } catch(const Exception &e) {
        print_error(e);
    }
}
