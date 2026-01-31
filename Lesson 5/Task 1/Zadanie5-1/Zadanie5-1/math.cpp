
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

 double pow(double a, int b)
{
    if (b == 0) return 1;
    if (a == 0) return 0;

        
    double res = 1;

    if (b > 0) 
    {
        for (int i = 0; i < b; ++i) 
        {
            res *= a;
        }
    }
    else 
    {
        b = -b;
        for (int i = 0; i < b; ++i)
        {
            res *= a;
        }
        res = 1.0 / res;
    }
    return res; 
  }