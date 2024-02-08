#include <stdio.h>

int main(void) {
	char grade[2];
	float result;
	for (int i = 0; i < 2; i++) {
		scanf("%c", grade + i);
	}
	switch (grade[0]) {
	case'A': result = 4.0;
		break;
	case'B': result = 3.0;
		break;
	case'C': result = 2.0;
		break;
	case'D': result = 1.0;
		break;
	case'F': result = 0.0;
	}

	switch (grade[1]) {
	case'+': result += 0.3;
		break;
	case'-': result -= 0.3;
	}
	printf("%.1f", result);
}