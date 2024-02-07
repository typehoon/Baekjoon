#include <stdio.h>
#include <math.h>

int main(void) {
	int N;
	int array[100];
	int count = 0;
	int result = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", array + i);
		for (int j = 1; j <= 1000; j++) {
			if (array[i] % j == 0) {
				count++;
			}
		}
		if (count == 2) {
			result++;
		}
		count = 0;
	}
	printf("%d", result);
}