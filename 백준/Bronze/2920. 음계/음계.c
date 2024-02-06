#include <stdio.h>
#include <string.h>

int main(void) {
	int array[8];
	for (int i = 0; i < 8; i++) {
		scanf("%d", array + i);
	}
	int result = 0;
	for (int j = 0; j < 7; j++) {
		if (array[7] == 8 && array[j] + 1 == array[j + 1]) {
			result++;
		}
		else if (array[7] == 1 && array[j] - 1 == array[j + 1]) {
			result--;
		}
	}
	if (result == 7) {
		printf("ascending");
	}
	else if (result == -7) {
		printf("descending");
	}
	else {
		printf("mixed");
	}
}