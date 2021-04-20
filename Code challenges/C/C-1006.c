#include <stdio.h>
 
int main() {
    double A, B, C;
    scanf("%lf\n", &A);
    scanf("%lf\n", &B);
    scanf("%lf\n", &C);
    float MEDIA = (2 * A + 3 * B + 5 * C) / 10;
    printf("MEDIA = %.1f\n", MEDIA);
    return 0;
}
