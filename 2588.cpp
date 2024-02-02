#include <stdio.h>

int main(void) {
	int a, b;
	scanf("%d", &a); // 472
	scanf("%d", &b); // 385

	int c, d;
	c = b % 100; // 85
	d = c % 10; // 5
	printf("%d\n", a * d); // 2360

	int e;
	e = c / 10; // 8
	printf("%d\n", a * e); // 3776

	int f;
	f = b / 100; // 3
	printf("%d\n", a * f); // 1416
	printf("%d\n", (a * f * 100) + (a * e * 10) + (a * d));
	return 0;
}