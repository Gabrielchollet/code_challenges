#include <stdio.h>
 
int main() 
{
    int A, B, C, D;
    scanf("%d\n", &A);
    scanf("%d\n", &B);
    scanf("%d\n", &C);
    scanf("%d\n", &D);
    int DIFERENCA = (A * B - C * D);
    printf("DIFERENCA = %i\n", DIFERENCA);
    return 0;
}
