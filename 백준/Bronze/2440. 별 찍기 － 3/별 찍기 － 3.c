#include <stdio.h>

int main(void) {
	int N, M;
	scanf("%d", &N);
	M = N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			printf("*");
		}
		printf("\n");
		M--;
	}
	return 0;
}