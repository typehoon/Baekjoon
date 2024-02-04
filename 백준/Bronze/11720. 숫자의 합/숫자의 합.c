#include <stdio.h>

int main(void) {
	int N, sum, array[100];
	sum = 0;

	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%1d", array + i);
		sum = sum + array[i];
	}

	printf("%d", sum);

	return 0;
}