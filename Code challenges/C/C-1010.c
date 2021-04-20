#include <stdio.h>
 
int main() {
    int p1_codigo, p2_codigo, p1_numero, p2_numero;
    float p1_valor, p2_valor;
    scanf("%i %i %f", &p1_codigo, &p1_numero, &p1_valor);
    scanf("%i %i %f", &p2_codigo, &p2_numero, &p2_valor);
    printf("VALOR A PAGAR: R$ %.2f\n", (p1_numero * p1_valor + p2_numero * p2_valor));
    return 0;
}