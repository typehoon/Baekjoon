#include <stdio.h>

int main(void) {
	int array[3];
	int temp = 0;
	for (int i = 0; i < 3; i++) {
		scanf("%d", array + i);
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (array[i] > array[j]){
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				}
		}
	}
	printf("%d", array[1]);
	return 0;
}