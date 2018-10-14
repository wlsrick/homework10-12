#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, c;
	for (a = 1; a < 501; a++) {
		for (b = 1; b < 501; b++) {
			for (c = 1; c < 501; c++) {
				if (c*c == a * a + b * b)printf("%d %d %d\n", a, b, c);
			}

		}
	}
	system("pause");
	return 0;
}