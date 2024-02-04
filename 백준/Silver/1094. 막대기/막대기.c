#include <stdio.h>
#include <math.h>

int main(void) {
	int X, quotient, remainder, result;
	scanf("%d", &X);
	remainder = X;
	result = 0;

	for (int i = 6; i >= 0; i--) {
		quotient = remainder / pow(2, i);
		remainder = remainder % (int)pow(2, i);
		if (quotient == 1) {
			result++;
		}
	}
	printf("%d", result);
	return 0;
}