#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {

    int H, M;

    scanf("%d %d", &H, &M);
    if (M < 45) {
        M = 60 - (45 - M); // M�� 45 �̸��̸� 60���� ���� �����ϱ� ������ ���� ��
        if (H == 0) { // if �ȿ� if H�� 0�̰� M�� 44�̸��̸� H�� 23�� �Ǿ����.
            H = 23;
        }
        else {
            H = H - 1; // H�� 0�� �ƴϸ� �׳� H-1 �Ѵ�.
        }
    }
    else { // M�� 45�̻��̸� �׳� M-45�� �Ѵ�.
        M = M - 45;
    }

    printf("%d %d", H, M);

    return 0;
}