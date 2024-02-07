#include <stdio.h>

int main(void) {
	int burger[3] = { 0, };
	int beverage[2] = { 0, };
	scanf("%d", burger + 0); // 상덕버거
	scanf("%d", burger + 1); // 중덕버거
	scanf("%d", burger + 2); // 하덕버거
	scanf("%d", beverage + 0); // 콜라
	scanf("%d", beverage + 1); // 사이다

	int min_burger = 2000;
	int min_beverage = 2000;
	for (int i = 0; i < 3; i++) {
		if (min_burger >= burger[i]) {
			min_burger = burger[i];
		}
	}
	for (int j = 0; j < 2; j++) {
		if (min_beverage >= beverage[j]) {
			min_beverage = beverage[j];
		}
	}

	int set_cost;
	set_cost = min_burger + min_beverage - 50;
	printf("%d", set_cost);
	return 0;
}