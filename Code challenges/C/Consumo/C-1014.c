/*
Calcule o consumo medio de um automovel sendo fornecidos a distancia
total percorrida (em Km) e o total de combustivel gasto (em litros).
*/

#include <stdio.h>

int main() {
    int X;   /* distancia percorrida */
    float Y; /* total de combustivel gasto */
    scanf("%d %f", &X, &Y);
    printf("%.3f km/l\n", X/Y);
    return 0;
}
