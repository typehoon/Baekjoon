#include <stdio.h>
#include <string.h>

int main(void) {
	int N, length;
	char array[80];
	int score = 0;
	int point = 0;

	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%s", array);
		length = strlen(array);
		for (int j = 0; j < length; j++) {
			if (array[j] == 'O') {
				point++;
				score = score + point;
			}
			else {
				point = 0;
			}
		}
		printf("%d\n", score);
		score = 0;
		point = 0;
	}
	return 0;
}