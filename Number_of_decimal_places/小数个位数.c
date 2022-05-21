#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	float q = 0;
	int w = 0;
	int e = 0;
	scanf("%f", &q);
	if (q > 0 && q < 10)
	{
		w = (int)q;
		printf("%d\n", w);
	}
	else if (q >= 10 && q <= 100)
	{
		e = (int)q % 10;
		printf("%d\n", e);
	}
	else if (q > 100 && q <= 200)
	{
		e = (int)q % 10;
		printf("%d\n", e);
	}
	return 0;
}