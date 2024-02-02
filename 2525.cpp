#include <stdio.h>

int main(void) {
	int a, b, c;
	scanf("%d %d", &a, &b);
	scanf("%d", &c);

	int h, m;
	h = c / 60;
	m = c % 60;

	int dp_h, dp_m;
	if (b + m >= 60) {
		dp_m = b + m - 60;
		++a;
		if (a + h >= 24) {
			dp_h = a + h - 24;
		}
		else {
			dp_h = a + h;
		}
	}
	else {
		dp_m = b + m;
		if (a + h >= 24) {
			dp_h = a + h - 24;
		}
		else {
			dp_h = a + h;
		}
	}
	printf("%d %d", dp_h, dp_m);

	return 0;
}