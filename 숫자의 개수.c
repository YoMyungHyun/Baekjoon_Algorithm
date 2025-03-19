#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, b, c, mul, index;
	int arr[10];

	scanf("%d %d %d", &a, &b, &c);
	mul = a * b * c;

	while (mul > 0) {
		index = mul % 10;
		arr[index] += 1;
		mul = mul / 10;
	}

	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}