#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n;
	int a = 0;

	scanf("%d", &n);

	while (n >= 0) {		// 0�� �� ������ while�� ����
		if (n % 5 == 0) {		// �Էµ� n�� ���� 5�� �� ������ �������� ����
			a = a + (n / 5);
			printf("%d", a);
			return 0;
		}
		n = n - 3;				// �Էµ� n�� ���� 5�� �� ������ �������� ������ ����
		a++;					// a�� �ϳ� �����ϰ� �ٽ� while��
	}	
	printf("-1");

	return 0;
}
