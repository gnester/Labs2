#include <stdio.h>

int main()
{
	char str[64], temp;
	int i = 0, weight1 = 0, weight2 = 0;
	printf("Enter a string for sort:\n");
	scanf("%s", &str);
	while (i<64) {
		if (str[i - 1] && str[i]>0) {
			weight1 = (str[i] >= 'a' && str[i] <= 'z') ? str[i] - 31 : str[i];			// Lowercase letters after uppercase
			weight2 = (str[i-1] >= 'a' && str[i-1] <= 'z') ? str[i-1] - 31 : str[i-1];	// Lowercase letters after uppercase
			if (weight1 < weight2) {
				temp = str[i];
				str[i] = str[i - 1];
				str[i - 1] = temp;
				i -= 2;
			}
		}
		i++;
	};
	printf("%s\n", str);
	return 0;
}