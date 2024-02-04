#include <stdio.h>

int main(void) {
	int a, b;
	int c;
	scanf("%d %d", &a, &b);
	if (b >= 45) {
		c = b - 45;
	}
	else {
		c = 60 + (b - 45);
		if (a == 0) {
			a = 23;
		}
		else {
			a = a - 1;
		}
	}
	printf("%d %d", a, c);
	return 0;
}