#include <stdio.h>
#include <string.h>

int main(void) {
	int count[26] = { 0 };
	char word[1000000];
	scanf("%s", word);
	int length = strlen(word);

	for (int i = 0; i < length; i++) {
		switch (word[i]) {
		case 'A': count[0]++; break;
		case'a': count[0]++; break;
		case 'B': count[1]++; break;
		case'b': count[1]++; break;
		case 'C': count[2]++; break;
		case'c': count[2]++; break;
		case 'D': count[3]++; break;
		case'd': count[3]++; break;
		case 'E': count[4]++; break;
		case'e': count[4]++; break;
		case 'F': count[5]++; break;
		case'f': count[5]++; break;
		case 'G': count[6]++; break;
		case'g': count[6]++; break;
		case 'H': count[7]++; break;
		case'h': count[7]++; break;
		case 'I': count[8]++; break;
		case'i': count[8]++; break;
		case 'J': count[9]++; break;
		case'j': count[9]++; break;
		case 'K': count[10]++; break;
		case'k': count[10]++; break;
		case 'L': count[11]++; break;
		case'l': count[11]++; break;
		case 'M': count[12]++; break;
		case'm': count[12]++; break;
		case 'N': count[13]++; break;
		case'n': count[13]++; break;
		case 'O': count[14]++; break;
		case'o': count[14]++; break;
		case 'P': count[15]++; break;
		case'p': count[15]++; break;
		case 'Q': count[16]++; break;
		case'q': count[16]++; break;
		case 'R': count[17]++; break;
		case'r': count[17]++; break;
		case 'S': count[18]++; break;
		case's': count[18]++; break;
		case 'T': count[19]++; break;
		case't': count[19]++; break;
		case 'U': count[20]++; break;
		case'u': count[20]++; break;
		case 'V': count[21]++; break;
		case'v': count[21]++; break;
		case 'W': count[22]++; break;
		case'w': count[22]++; break;
		case 'X': count[23]++; break;
		case'x': count[23]++; break;
		case 'Y': count[24]++; break;
		case'y': count[24]++; break;
		case 'Z': count[25]++; break;
		case'z': count[25]++; break;
		}
	}

	int max = -1;
	char record;

	for (int j = 0; j < 26; j++) {
		if (max < count[j]) {
			max = count[j];
			record = 65 + j;
		}
	}

	int re = 0;
	for (int k = 0; k < 26; k++) {
		if (max == count[k]) {
			re++;
		}
	}

	if (re >= 2) {
		printf("?");
	}
	else {
		printf("%c", record);
	}

	return 0;
}