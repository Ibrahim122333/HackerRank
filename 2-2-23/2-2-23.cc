#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int num1;
    long int num2;
    char num3;
    float num4;
    double num5;

    scanf(" %d %ld %c %f %lf ", &num1, &num2, &num3, &num4, &num5);

    printf("%d\n%ld\n%c\n%f\n%lf ", num1, num2, num3, num4, num5);

    return 0;
}