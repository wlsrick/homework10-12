#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, j;
	for ( i = 0;i < 9;i++) {
		if (i <= 4) {
			for ( j = 0;j < (5 - i);j++) {
				printf(" ");
			}
			for ( j = 0;j < (1 + 2*i);j++) {
				printf("*");
			}
		}
		if (i > 4) {
			for (j = 0;j < i - 3;j++) {
				printf(" ");
			}
			for (j = 0;j < 17 - 2*i ;j++) {
				printf("*");
			}
		}
		printf("\n");
	}
	
	system("pause");
	return 0;
}
