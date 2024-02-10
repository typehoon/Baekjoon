#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) {
	int array[30] = { 0, };
	int input;
	int a = 0;
	int b = 0;
	for (int i = 0; i < 28; i++) {
		scanf("%d", &input);
		array[input - 1] = 1;
	}
	for (int i = 0; i < 30; i++) {
		if (array[i] == 0) {
			if (a == 0) {
				a = i + 1;
			}
			else b = i + 1;
		}
	}
	printf("%d\n%d", a, b);
	return 0;
}