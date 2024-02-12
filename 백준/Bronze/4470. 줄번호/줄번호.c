#include <stdio.h>

int main(void) {
	int N;
	char array[100];
	scanf("%d", &N);
	getchar();
	for (int i = 0; i < N; i++) {
		fgets(array, 100, stdin);
		printf("%d. %s", i + 1, array);
	}
	return 0;
}