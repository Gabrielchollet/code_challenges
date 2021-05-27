#include <stdio.h>

int main() {
    int num, maior, i;
    for(i = 0, maior = 0; i < 3; i++) {
        scanf("%d ", &num);
        if (num > maior) {
            maior = num;
        }
    }
    printf("%d eh o maior\n", maior);
    return 0;
}
