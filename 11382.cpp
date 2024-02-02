#include <stdio.h>

int main(void) {
	long long a, b, c;
	scanf("%lld %lld %lld", &a, &b, &c);
	long long sum;
	sum = a + b + c;
	printf("%lld", sum);
	return 0;
}
// 자료형에 맞게 출력 타입을 설정해야 함
// long long을 썼을 때도 %d로 하면 안 됨