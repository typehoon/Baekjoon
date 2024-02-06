#include <stdio.h>
#include <string.h>

int main(void) {
	char S[100];
	scanf("%s", S);
	int length = strlen(S);
	int location[26];
	for (int a = 0; a < 26; a++) {
		location[a] = -1;
	}
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < 26; j++) {
			if (S[length - (i + 1)] == 97 + j) {
				location[j] = length - (i + 1);
			}
		}
	}

	for (int k = 0; k < 26; k++) {
		printf("%d ", location[k]);
	}
	return 0;
}