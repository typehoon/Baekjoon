#include <stdio.h>

int main(void) {
	int N, F;
	scanf("%d", &N);
	scanf("%d", &F);

	int front = N / 100;
	int array[100], cal[100];

	for (int i = 0; i < 100; i++) {
		array[i] = front * 100 + i;
	}
	for (int i = 0; i < 100; i++) {
		array[i] = front * 100 + i;
		if (array[i] % F == 0) {
			cal[i] = i;
		}
		else {
			cal[i] = 100;
		}
	}

	int min = 99;
	for (int i = 0; i < 100; i++) {
		if (min >= cal[i]) {
			min = cal[i];
		}
	}
	printf("%02d", min);
	return 0;
}