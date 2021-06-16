#include <stdio.h>

int main()
{
    int cod, number;
    cod = 0;
    number = 0;
    scanf("%d %d", &cod, &number);
    float preco[5] = {4.00, 4.50, 5.00, 2.00, 1.50};
    printf("Total: R$ %.2f\n", preco[cod - 1]*number);
    return 0;
}
