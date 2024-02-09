#include <stdio.h>

int main(void) {
	int time[4];
	int sum = 0;
	for (int i = 0; i < 4; i++) {
		scanf("%d", time + i);
		sum += time[i];
	}
	int min, sec;
	min = sum / 60;
	sec = sum % 60;
	printf("%d\n", min);
	printf("%d", sec);
}