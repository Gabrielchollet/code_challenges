#include <stdio.h>

int main() {
    float a, d;
    scanf("%f", &a);
    d = a/25;
    if (d >= 0 && d <= 1)
    {
        printf("Intervalo [0,25]\n");
    }
    else if (d > 1 && d <= 2)
    {
        printf("Intervalo (25,50]\n");
    }
    else if (d > 2 && d <= 3)
    {
        printf("Intervalo (50,75]\n");
    }
    else if (d > 3 && d <= 4)
    {
        printf("Intervalo (75,100]\n");
    }
    else
    {
        printf("Fora de intervalo\n");
    }
    return 0;
}
