#include <stdio.h>

int main(void) {
	int A, B;
	int S = 5;
	for (int i = 0; i < S; i++) {
		scanf("%d %d", &A, &B);
		if (A == 0 && B == 0) {
			S = 0;
		}
		else {
			i = 0;
			printf("%d\n", A + B);
		}
	}
	return 0;
}