#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {
    int a, b;                              // 테스트 케이스의 개수를 미리 주어주지 않은 문제
    while(scanf("%d %d", &a, &b) != EOF) { // EOF 즉, 끝나는 시점이면 while문을 빠져나와라
        printf("%d\n", a+b);
    }
    return 0;
}
