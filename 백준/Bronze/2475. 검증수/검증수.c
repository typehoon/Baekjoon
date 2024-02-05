#include <stdio.h>
#include <math.h>

int main(void) {
	int array[5] = { 0 };
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%1d", array + i);
		sum = sum + (int)pow(array[i], 2);
	}
	printf("%d", sum % 10);
}