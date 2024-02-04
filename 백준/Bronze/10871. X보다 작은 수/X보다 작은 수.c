#include <stdio.h>

int main(void) {
	int N, X;
	int array[10000];
	scanf("%d %d", &N, &X);

	for (int i = 0; i < N; i++) {
		scanf("%d", array + i);
	}

	for (int i = 0; i < N; i++) {
		if (X > array[i]) {
			printf("%d ", array[i]);
		}
	}
	return 0;
}