#include <stdio.h>

int main()
{
    float a, b, c, average = 0;
    scanf("%f %f %f", &a, &b, &c);
    average = (a + b + c) / 3;

    if (average >= 60)
        printf("%.2fBAIK\n", average);
    else if (average >= 30)
        printf("%.2fCUKUP\n", average);
    else
        printf("%.2fKURANG\n", average);
    return 0;
}