//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void) {
//	int n;
//	scanf("%d", &n);
//
//	int* arr = (int*)malloc(n * sizeof(int)); //�޸� �Ҵ� �����ϸ� ���α׷� ����
//	if (arr == NULL) {
//		return 1;
//	}
//	for (int i = 0; i < n; i++) {	//n ��ŭ �ݺ�
//		scanf("%d", &arr[i]);	//n���� ��
//	}
//	int max, min;
//
//	min = max = arr[0];		//�迭 ù��° ���� �ʱ�ȭ
//
//	for (int i = 0; i < n; i++) {
//		if (arr[i] > max) {		//i��° ���� max���� ũ�� �� ���� max
//			max = arr[i];
//		}if (arr[i] < min) {	//i��° ���� min���� ������ �� ���� min
//			min = arr[i];
//		}
//	}
//	printf("%d %d", min, max);
//	free(arr);	//malloc���� �Ҵ��� �޸� ����
//
//	return 0;
//} 
