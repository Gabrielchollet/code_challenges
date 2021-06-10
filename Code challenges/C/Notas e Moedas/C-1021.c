#include <stdio.h>

int main() {
    int a, b, div;

    scanf("%d.%d", &a, &b);

    printf("NOTAS:\n");

    printf("%d nota(s) de R$ 100.00\n", a/100);
    a -= (a/100)*100;

    printf("%d nota(s) de R$ 50.00\n", a/50);
    a -= (a/50)*50;

    printf("%d nota(s) de R$ 20.00\n", a/20);
    a -=  (a/20)*20;

    printf("%d nota(s) de R$ 10.00\n", a/10);
    a -= (a/10)*10;

    printf("%d nota(s) de R$ 5.00\n", a/5);
    a -= (a/5)*5;

    printf("%d nota(s) de R$ 2.00\n", a/2);
    a -= (a/2)*2;

    printf("MOEDAS:\n");

    b += 100*a;

    printf("%d moeda(s) de R$ 1.00\n", b/100);
    b -= (b/100)*100;


    printf("%d moeda(s) de R$ 0.50\n", b/50);
    b -= (b/50)*50;

    printf("%d moeda(s) de R$ 0.25\n", b/25);
    b -= (b/25)*25;

    printf("%d moeda(s) de R$ 0.10\n", b/10);
    b -= (b/10)*10;

    printf("%d moeda(s) de R$ 0.05\n", b/5);
    b -= (b/5)*5;

    printf("%d moeda(s) de R$ 0.01\n", b);

    return 0;
}
