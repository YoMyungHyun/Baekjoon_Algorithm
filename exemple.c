#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int A, B;

	scanf("%d %d", &A, &B);
	double C = (double)A / B;
	printf("%f", C);

	return 0;
}