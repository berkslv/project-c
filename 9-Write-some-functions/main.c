#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int m_mod(int a, int b)
{
    return a % b;
}

float m_abs(float a)
{
    return a < 0 ? -a : a;
}

float m_root(float a, float b)
{
    return sqrt(a * a + b * b);
}

int main(int argc, char const *argv[])
{

    printf("%d\n", m_mod(5, 2));
    printf("%f\n", m_abs(-5.0));
    printf("%f\n", m_root(2.0, 3.0));

    return 0;
}