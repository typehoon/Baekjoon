#include <stdio.h>

int main(void) {
	int M;
	scanf("%d", &M);
	int X, Y;
	int cups[3] = { 1, 2, 3 };
	int ch1, ch2, temp;
	for (int i = 0; i < M; i++) {
		scanf("%d %d", &X, &Y);
		for (int j = 0; j < 3; j++) {
			if (cups[j] == X) {
				ch1 = j;
			}
			if (cups[j] == Y) {
				ch2 = j;
			}
		}
		temp = cups[ch1];
		cups[ch1] = cups[ch2];
		cups[ch2] = temp;
	}
	printf("%d", cups[0]);
	return 0;
}