#include <stdio.h>
#include <stdlib.h>

int main(void) {
	long N, M, result;
	scanf("%ld %ld", &N, &M);
	result = N - M;
	if (N - M < 0) {
		result = result * (-1);
	}
	printf("%ld", result);
}