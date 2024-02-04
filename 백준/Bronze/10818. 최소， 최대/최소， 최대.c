#include <stdio.h>

int main(void) {
	int N, max, min;
	int array[1000000] = { 0 };
	max = -1000000;
	min = 1000000;

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &array[i]);
		if (array[i] >= max) {
			max = array[i];
		}
		if (array[i] <= min) {
			min = array[i];
		}
	}
	printf("%d %d", min, max);
	return 0;
}