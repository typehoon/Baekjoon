#include <stdio.h>
int main(void) {
	int N, M;
	scanf("%d %d", &N, &M);
	int array1[100][100];
	int array2[100][100];
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%d", &array1[i][j]);
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%d", &array2[i][j]);
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			array1[i][j] = array1[i][j] + array2[i][j];
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			printf("%d ", array1[i][j]);
		}
		printf("\n");
	}
	return 0;
}