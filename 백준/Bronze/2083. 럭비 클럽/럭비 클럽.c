#include <stdio.h>
#include <string.h>

int main(void) {
	char name[10];
	int data[2];
	int length;
	while (1) {
		scanf("%s %d %d", name, &data[0], &data[1]);
		length = strlen(name);
		if (data[0] == 0 && data[1] == 0) {
			break;
		}
		else {
			if (data[0] > 17 || data[1] >= 80) {
				for (int i = 0; i < length; i++) {
					printf("%c", name[i]);
				}
				printf(" Senior\n");
			}
			else {
				for (int i = 0; i < length; i++) {
					printf("%c", name[i]);
				}
				printf(" Junior\n");
			}
		}
	}
	return 0;
}