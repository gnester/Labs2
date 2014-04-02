#include <stdio.h>

int main()
{
	int i = 0, diag = 0, spaces = 0;
	printf("Enter a diagonal: ");
	scanf("%d", &diag);
	for (i = 0; i < diag / 2; i++) { // Upper part
		for (int k = 0; k < diag; k++)
			printf((k == diag / 2 + i || k == diag / 2 - i) ? "*" : " ");
		printf("\n");
	}
	for (i = diag / 2; i < diag; i++) { // Low part
		for (int k = 0; k < diag; k++)
			printf((k == diag / 2 + diag - i - 1 || k == i - diag/2) ? "*" : " ");
		printf("\n");
	}
	return 0;
}