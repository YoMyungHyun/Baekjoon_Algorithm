#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {
    int a, b;                              // �׽�Ʈ ���̽��� ������ �̸� �־����� ���� ����
    while(scanf("%d %d", &a, &b) != EOF) { // EOF ��, ������ �����̸� while���� �������Ͷ�
        printf("%d\n", a+b);
    }
    return 0;
}
