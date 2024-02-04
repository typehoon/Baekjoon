#include <stdio.h> // First Silver V Problem :)

int main(void) {
	int T, N, M;
	long result;
	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		scanf("%d %d", &N, &M);
		long fac_N, fac_M, fac_MN;
		fac_N = 1, fac_M = 1, fac_MN = 1;
		if (N >= M - N) {
			for (int j = 1; j <= M - N; j++) {
				fac_MN = fac_MN * j;
			} // fac_MN = (M-N)!
			for (int k = 0; M - k > N; k++) {
				fac_M = fac_M * (M - k);
			} // fac_M = M! / N!
			result = fac_M / fac_MN;
			printf("%ld\n", result);
		}
		else {
			for (int j = 1; j <= N; j++) {
				fac_N = fac_N * j;
			} // fac_N = N!
			for (int k = 0; M - k > M - N; k++) {
				fac_M = fac_M * (M - k);
			} // fac_M = M! / (M - N)!
			result = fac_M / fac_N;
			printf("%ld\n", result);
		}
	} // factorial 계산은 size가 커서 경우를 나누어 계산
	return 0;
}