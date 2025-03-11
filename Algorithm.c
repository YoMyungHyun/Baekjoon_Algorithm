#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {

<<<<<<< HEAD
	int a;
	int b;
	
	scanf("%d", &a);
	scanf("%d", &b);

	int c = b % 10;
	int d = (b % 100) / 10;
	int e = b / 100;

	printf("%d\n", (a * c));
	printf("%d\n", (a * d));
	printf("%d\n", (a * e));
	printf("%d\n", (a * c) + ((a * d) * 10) + ((a * e) * 100));
=======
    int Year;
>>>>>>> 2c0e08c5e36df2a5e520ef7a2c86afa513b7f133

    scanf("%d", &Year);
    if (Year % 4 == 0 && Year % 100 != 0 || Year % 400 == 0) {
        printf("1");
    }
    else {
        printf("0");
    }
    return 0;
}