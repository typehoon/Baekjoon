#include <stdio.h>

int main(void) {
	int n, X, Y;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &X, &Y);
		if (X < Y) {
			printf("NO BRAINS\n");
		}
		else {
			printf("MMM BRAINS\n");
		}
	}
	return 0;
}