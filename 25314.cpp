#include <stdio.h>

int main(void) {
	int a;
	scanf("%d", &a);

	for (int i = 1; i < (a / 4); i++) {
		printf("long ");
	}
	printf("long int");
	return 0;
}