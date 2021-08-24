#include <stdio.h>

int main()
{
	int flip_p, flip_r;
	scanf("%d %d", &flip_p, &flip_r);

	if (flip_p == 1)
	{
		if (flip_r == 1)
		{
			printf("A\n");
		}
		else
		{
			printf("B\n");
		}
	}
	else
	{
		printf("C\n");
	}

	return 0;
}
