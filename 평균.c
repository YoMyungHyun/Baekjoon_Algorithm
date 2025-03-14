#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n;
	scanf("%d", &n); //���� ���� �ޱ�

	int* arr = (int*)malloc(n * sizeof(int)); //���� �޸� �Ҵ� ũ��
	if (arr == NULL) { 
		return 1;							//�޸� �Ҵ� ���� �� ����
	}

	int max = arr[0];		//ù��° �迭�� ���� max�� ����
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] > max) {		//���� �迭�� ���� max���� ũ�� 
			max = arr[i];		//�� ���� max�� ����
		}
	}
	float avg = 0;
	for (int i = 0; i < n; i++) {		// ������ �� ������ ���ϰ� ���� ���ϱ�
		avg += (float)arr[i] / max * 100;
	}
	printf("%f", avg / n);
	free(arr);				//���� �޸� ����
	return 0;
}
