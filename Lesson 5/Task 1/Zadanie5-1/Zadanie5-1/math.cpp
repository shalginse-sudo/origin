
int sum(int a, int b)
{
    return a + b;
}

int substr(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    return a / b;
}

int pow(int a, int b)
{
    int res = 1;

    if (b > 0) {
        for (int i = 1; i <= b; ++i) {
            res *= a;
        }
    }
    else if (b < 0) {
        for (int i = -1; i >= b; --i) {
            res /= a;
        }
    }

    return res;
}
