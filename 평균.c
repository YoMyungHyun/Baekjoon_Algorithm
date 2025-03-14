#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n;
	scanf("%d", &n); //점수 개수 받기

	int* arr = (int*)malloc(n * sizeof(int)); //동적 메모리 할당 크기
	if (arr == NULL) { 
		return 1;							//메모리 할당 실패 시 종료
	}

	int max = arr[0];		//첫번째 배열의 값을 max로 정의
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] > max) {		//다음 배열의 값이 max보다 크면 
			max = arr[i];		//그 값을 max로 갱신
		}
	}
	float avg = 0;
	for (int i = 0; i < n; i++) {		// 문제의 각 점수를 구하고 총합 더하기
		avg += (float)arr[i] / max * 100;
	}
	printf("%f", avg / n);
	free(arr);				//동적 메모리 해제
	return 0;
}
