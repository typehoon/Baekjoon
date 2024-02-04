#include <stdio.h>

int main(void) {
	int num = 0;
	int arr[100] = { 0 };
	int count = 0;
	int v;

	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf("%d", arr + i);
	}


	scanf("%d", &v);
	for (int j = 0; j < num; j++) {
		if (v == arr[j]) {
			count++;
		}
	}
	printf("%d\n", count);

	return 0;
}