//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(void) {
//	int n;				
//	int temp;		//더하기 사이클 변수 선언
//
//	scanf("%d", &n);
//	if (n < 10) {n *= 10;}		//입력 변수가 10보다 작을때 두자리 수로 만들기
//
//	int count = 0;		//사이클을 몇번 돌았는지의 변수 선언
//	temp = n;		//더하기 사이클 변수 초기화
//
//	while (1) {		//break; 조건문에 만족할 때 까지 무한반복 while문
//		count++;	//n이 0 일때도 무조건 1사이클은 돌기 때문에 count 하나 더하고 시작
//		temp = (temp % 10 * 10) + (((temp / 10) + (temp % 10)) % 10);		//n의 일의 자리 수를 십의 자리 수로, 각 자리 수를 더한 후 일의 자리 수를 일의 자리 수로 놓으면 된다.
//		if (temp == n) { break; }		//n을 26으로 예를 들면 n % 10 * 10 -> 6, (n / 10 + n % 10) % 10 -> 8 = 68
//	}									
//	printf("%d", count);	//while문 안에 if문의 조건이 만족하면 break로 while문을 빠져 나오고 count 출력
//}
