//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void) {
//	int n;
//	if (scanf("%d", &n) != 1) {
//		return 1; // �Է� ���� �� ���α׷� ����
//	}
//
//	int* arr = (int*)malloc(n * sizeof(int));
//	if (arr == NULL) {
//		return 1; // �޸� �Ҵ� ���� �� ���α׷� ����
//	}
//
//	int sum = 0;
//	for (int i = 0; i < n; i++) {
//		if (scanf("%1d", &arr[i]) != 1) {
//			free(arr);
//			return 1; // �Է� ���� �� ���α׷� ����
//		}
//		sum += arr[i];
//	}
//	printf("%d", sum);
//
//	free(arr);
//	return 0;
//}
