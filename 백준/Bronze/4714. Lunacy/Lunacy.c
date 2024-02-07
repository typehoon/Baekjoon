#include <stdio.h>

int main(void) {
	float X, Y;
	X = 1; Y = 1;
	while (X >= 0) {
		scanf("%f", &X);
		if (X < 0) {
			break;
		}
		Y = 0.167 * X;
		printf("Objects weighing %.02f on Earth will weigh %.02f on the moon.\n", X, Y);
	}
	return 0;
}