#include <stdio.h>

int main(void) {
	long a;
	scanf("%ld", &a);
	printf("%ld", a * (a + 1) / 2);
	return 0;
}