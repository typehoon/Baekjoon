#include <stdio.h>

int main(void) {
	int N, group;
	int sum = 1;
	int i = 0;
	scanf("%d", &N);
	if (N == 1) {
		printf("1");
	}
	else {
		while (1) {
			if (N <= sum) {
				group = i;
				break;
			}
			sum += 6 * i;
			i++;
		}
		printf("%d", group);
	}
}