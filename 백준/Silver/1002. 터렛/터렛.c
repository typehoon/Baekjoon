#include <stdio.h>

int main(void) {
	int T, x1, x2, y1, y2, r1, r2;
	int location, distance;
	int x_square, y_square, r_square, rsum_square;

	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		x_square = (x1 - x2) * (x1 - x2);
		y_square = (y1 - y2) * (y1 - y2);
		distance = x_square + y_square;
		r_square = (r1 - r2) * (r1 - r2);
		rsum_square = (r1 + r2) * (r1 + r2);

		// 1. 위치가 무한대인 경우 (접점이 원)
		if (distance + r_square == 0) {
			location = -1;
		}
		// 2-1. 위치가 1개인 경우 (외접)
		else if (distance == rsum_square) {
			location = 1;
		}
		// 2-2. 위치가 1개인 경우 (내접)
		else if (distance == r_square) {
			location = 1;
		}
		// 3. 위치가 2개인 경우
		else if (distance > r_square && distance < rsum_square) {
			location = 2;
		}
		// 위치가 0개인 경우
		else {
			location = 0;
		}
		printf("%d\n", location);
	}
	return 0;
}