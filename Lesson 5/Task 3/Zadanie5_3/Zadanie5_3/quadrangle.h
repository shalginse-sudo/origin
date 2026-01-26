#pragma once
#include "figure.h"

class Quadrangle : public Figure
{
protected:
    //ƒлины сторон
    int a = 10;
    int b = 20;
    int c = 30;
    int d = 40;

    //”глы в градусах
    int A = 50;
    int B = 60;
    int C = 70;
    int D = 80;

public:
    Quadrangle();

    int get_a();
    int get_b();
    int get_c();
    int get_d();
    int get_A();
    int get_B();
    int get_C();
    int get_D();
};