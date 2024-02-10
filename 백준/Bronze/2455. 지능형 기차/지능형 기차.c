#include <stdio.h>

int main(void) {
	int train = 0;
	int max = 0;
	int in, out;
	for (int i = 0; i < 4; i++) {
		scanf("%d %d", &out, &in);
		train = train - out + in;
		if (train >= max) {
			max = train;
		}
	}
	printf("%d", max);
}