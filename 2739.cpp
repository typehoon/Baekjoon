#include <stdio.h>

int main(void) {
	int a;
	scanf("%d", &a);
	for (int i = 0; i < 9; i++) {
		printf("%d * %d = %d\n", a, i + 1, a * (i + 1));
	}
	return 0;
}