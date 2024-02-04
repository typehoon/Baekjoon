#include <stdio.h>

int main(void) {
	int N, M;
	scanf("%d %d", &N, &M);
	int array[50][50];

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%1d", &array[i][j]);
		}
	}
	int min, max;
	min = N > M ? M : N;
	max = 0;
	int x1, x2, x3, x4;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			for (int k = 0; k < min; k++) {
				if (i + k < N && j + k < M) {
					x1 = array[i][j];
					x2 = array[i + k][j];
					x3 = array[i][j + k];
					x4 = array[i + k][j + k];
					if (x1 == x2 && x2 == x3 && x3 == x4) {
						if (max <= k) {
							max = k + 1;
						}
					}
				}
			}
		}
	}
	printf("%d", max * max);
	return 0;
}