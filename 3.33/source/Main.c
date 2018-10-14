#include <stdio.h>
#include <stdlib.h>

int main() {
	int w,l;
	printf("Enter the wide:");
	scanf_s("%d", &w);
	printf("Enter the long:");
	scanf_s("%d", &l);
	for (int i = 1;i <= w;i++) {
		for (int j = 1;j <= l;j++) {
			if (i == 1 || i == w || j ==1  || j == l)printf("+");
			else printf(" ");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}