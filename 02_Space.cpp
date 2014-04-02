#include <stdio.h>

int main()
{
	char str[64];
	int i = 0;
	bool isWord = false;
	printf("Enter a string for divide:\n");
	fgets(str, 64, stdin);
	while (str[i]!=0) {
		if (str[i] != 32) {
			printf("%c", str[i]);
			isWord = true;
		}
		else if (isWord) {
			isWord = false;
			printf("\n");
		}
		i++;
	};
	return 0;
}