#include <stdio.h>

int main(void) {
	int A = 1;
	int B = 1;
	while (1) {
		scanf("%d %d", &A, &B);
		if (A == 0 && B == 0) {
			break;
		}
		else if (A > B) {
			printf("Yes\n");
		}
		else {
			printf("No\n");
		}
	}
}