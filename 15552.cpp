#include <stdio.h>

int main(void) {
	long T;
	int A, B;
	scanf("%ld", &T);
	for (int i = 1; i <= T; i++) {
		scanf("%d %d", &A, &B);
		printf("%d\n", A + B);
	}
	return 0;
}