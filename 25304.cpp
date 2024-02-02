#include <stdio.h>

int main(void) {
	long X;
	int N, a, b;
	long sum = 0;
	scanf("%ld", &X);
	scanf("%d", &N);
	for (int i = 1; i <= N; i++) {
		scanf("%d %d", &a, &b);
		sum = sum + a * b;
	}
	if (sum == X) {
		printf("Yes");
	}
	else {
		printf("No");
	}
	return 0;
}