//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int A, B, C;
//
//	scanf("%d %d %d", &A, &B, &C);
//
//	B = B + C;
//
//	if (B > 59) {
//		A = A + B / 60; // B+C�� 60�� �Ѿ����� 60���� ���� ���� A�� ������
//		B = B % 60; // B+C�� 60�� �Ѿ����� %�� ������ ���� ������ ex) 61 % 60 = 1��
//	}
//	if (A >= 24) {
//		A = A % 24; // A�� ���� 24�� �Ѿ����� %�� ������ ���� ������ ex) 25 % 24 = 1
//	}
//
//	printf("%d %d", A, B);
//	return 0;
//
//}