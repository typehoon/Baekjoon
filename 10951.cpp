#include <stdio.h>

int main(void) {
	int A, B;
	while (scanf("%d %d", &A, &B) != EOF) {
		printf("%d\n", A + B);
	}
	return 0;
}
// EOF == End of File, 파일의 끝을 표현하기 위해 정해둔 상수로 -1 값을 가짐
// 최대 몇 개 입력이 들어올지 모를 때 자주 사용됨