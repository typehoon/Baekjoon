#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) {
	int A, B, C, product;
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);
	product = A * B * C;
	
	int digit = 0;
	int array[10] = { 0, };
	if (product == 1000000000) {
		digit = 10;
	}
	else if (product / 100000000) {
		digit = 9;
	}
	else if (product / 10000000) {
		digit = 8;
	}
	else {
		digit = 7;
	}
	
	int cal[10] = { 1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000 };
	for (int i = 0; i < digit; i++) {
		array[9 - i] = (product % cal[i + 1]) / cal[i];
	}

	int count[10] = { 0, };
	for (int j = 0; j < digit; j++) {
		for (int k = 0; k < 10; k++) {
			if (array[9 - j] == k) {
				count[k]++;
			}
		}
	}
	for (int l = 0; l < 10; l++) {
		printf("%d\n", count[l]);
	}
	return 0;
}