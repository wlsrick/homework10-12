#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("(A) \n");
	for (int i = 1;i <= 10;i++) {
		for (int j = 1;j <= i;j++) {
			printf("*");

		}
		printf("\n");
	}
	//==========================
	printf("(B)\n");
	for (int i = 1;i <= 10;i++) {
		for (int j = 0;j < 11-i;j++) {
			printf("*");
		}
		printf("\n");
	}
	//==========================
	printf("(C)\n");
	for (int i = 1;i <= 10;i++) {
		for (int j = 0;j < 1 + i;j++) {
			printf(" ");
		}
		for (int j = 0;j < 11 - i;j++) {
			printf("*");
		}
		printf("\n");
	}
	//==========================
	printf("(D)\n");
	for (int i = 1;i <= 10;i++) {
		for (int j = 0;j < 10 - i;j++) {
			printf(" ");
		}
		for (int j = 10;j < i + 10;j++) {
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}