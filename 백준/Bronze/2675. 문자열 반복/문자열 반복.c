#include <stdio.h>
#include <string.h>

int main(void) {
	int T, R;
	char array[20];
	int length;

	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d %s", &R, array);
		length = strlen(array);
		for (int j = 0; j < length; j++) {
			for (int k = 0; k < R; k++) {
				printf("%c", array[j]);
			}
		}
		printf("\n");
	}
	return 0;
}