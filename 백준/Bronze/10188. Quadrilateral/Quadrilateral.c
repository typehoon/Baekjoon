#include <stdio.h>

int main(void) {
	int T, row, column;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d %d", &row, &column);
		for (int j = 0; j < column; j++) {
			for (int k = 0; k < row; k++) {
				printf("X");
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}