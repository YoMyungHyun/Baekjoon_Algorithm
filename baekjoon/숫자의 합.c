//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void) {
//	int n;
//	if (scanf("%d", &n) != 1) {
//		return 1; // 입력 오류 시 프로그램 종료
//	}
//
//	int* arr = (int*)malloc(n * sizeof(int));
//	if (arr == NULL) {
//		return 1; // 메모리 할당 실패 시 프로그램 종료
//	}
//
//	int sum = 0;
//	for (int i = 0; i < n; i++) {
//		if (scanf("%1d", &arr[i]) != 1) {
//			free(arr);
//			return 1; // 입력 오류 시 프로그램 종료
//		}
//		sum += arr[i];
//	}
//	printf("%d", sum);
//
//	free(arr);
//	return 0;
//}
