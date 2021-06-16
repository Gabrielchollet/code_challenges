#include <stdio.h>

int main()
{
    int val[3], ord[3], i, j, menor;
    scanf("%d %d %d", &val[0], &val[1], &val[2]);
    for (i = 0; i < 3; i++)
    {
        for (j = i + 1; j < 3; j++)
        {
            if (val[i] < val[j])
        }
    }
    for (i = 0; i < 3; i++)
        printf("%d\n", ord[i]);
    printf("\n");
    for (i = 0; i < 3; i++)
        printf("%d\n", val[i]);
    return 0;
}
