#include <stdio.h>

int main(void) {
	int N;
	int product = 1;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		product *= (i + 1);
	}
	printf("%d", product);
}