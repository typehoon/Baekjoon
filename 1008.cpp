#include <stdio.h>

int main(void) {
	double a, b;
	scanf("%lf %lf", &a, &b);
	printf("%.9lf", a/b);
	return 0;
}
// int a, b로 한 후 나눗셈을 진행할 경우 소수점 이하를 모두 날려버린 몫만 계산하므로 틀림