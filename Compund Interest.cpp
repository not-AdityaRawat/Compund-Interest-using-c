// program to find compound interest
#include <stdio.h>
#include <math.h>
int main()
{
    float P, r, n, t, y, x, w;
    long long int A;

    printf("This Program is to calculate Compount Interest\n\n");
    printf("Insert the Principal balance-");
    scanf("%f", &P);
    printf("Insert rate of interest-");
    scanf("%f", &r);
    printf("Insert number of time interest-");
    scanf("%f", &n);
    printf("Insert time period-");
    scanf("%f", &t);

    x = 1 + r / n; /*I have divided the formula for compound interest into 3 parts (x,y,w)
                     and then compiled the formula into 'A' in line 23*/
    y = n * t;
    w = pow(x, y);
    A = P * w;
    printf("The Compund Interest is-\t$%lld", A);

    return 0;
}
