#include <stdio.h>

int main(void) {
	int x, y, w, h;
	scanf("%d %d %d %d", &x, &y, &w, &h);

	int w_x, h_y;
	w_x = w - x;
	h_y = h - y;

	int co1, co2, min;
	if (x >= w_x) {
		co1 = w_x;
	}
	else {
		co1 = x;
	}
	if (y >= h_y) {
		co2 = h_y;
	}
	else {
		co2 = y;
	}
	if (co1 >= co2) {
		min = co2;
	}
	else {
		min = co1;
	}
	printf("%d", min);
	return 0;
}