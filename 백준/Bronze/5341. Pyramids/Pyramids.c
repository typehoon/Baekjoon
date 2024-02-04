#include <stdio.h>

int main(void) {
	int input = 1;
	int pyramid;
	while (input != 0) {
		scanf("%d", &input);
		if (input == 0) {
			break;
		}
		else {
			pyramid = input * (input + 1) / 2;
			printf("%d\n", pyramid);
		}
	}
	return 0;
}