	#include <stdio.h>

	int main(void) {
		int T, H, W, N;
		scanf("%d", &T);
		int floor, room;

		for (int i = 0; i < T; i++) {
			scanf("%d %d %d", &H, &W, &N);
			if (N % H == 0) {
				floor = H;
				room = N / H;
			}
			else {
				floor = N % H;
				room = N / H + 1;
			}
			printf("%d%02d\n", floor, room);
		}
		return 0;
	}