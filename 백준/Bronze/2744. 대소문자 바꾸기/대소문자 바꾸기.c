#include <stdio.h>
#include <string.h>

int main(void) {
	char word[1000];
	scanf("%s", word);
	int length = strlen(word);
	for (int i = 0; i < length; i++) {
		if (word[i] <= 90) {
			word[i] += 32;
		}
		else {
			word[i] -= 32;
		}
		printf("%c", word[i]);
	}
}