#include <stdio.h>

int main(void) {
	long T;
	int A, B;
	scanf("%ld", &T);
	for (int i = 1; i <= T; i++) {
		scanf("%d %d", &A, &B);
		printf("Case #%d: %d + %d = %d\n", i, A, B, A + B);
	}
	return 0;
}