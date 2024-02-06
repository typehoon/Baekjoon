#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) {
	int array[10] = { 0, };
	int array2[10] = { 0, };
	for (int i = 0; i < 10; i++) {
		scanf("%d", array + i);
		array2[i] = array[i] % 42;
	}
	int count[42] = { 0, };
	int sum = 0;
	for (int j = 0; j < 42; j++) {
		for (int k = 0; k < 10; k++) {
			if (array2[k] == j) {
				count[j] = 1;
			}
		}
	}
	for (int l = 0; l < 42; l++) {
		sum = sum + count[l];
	}
	printf("%d", sum);
	return 0;
}