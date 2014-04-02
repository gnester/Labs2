#include <stdio.h>
#include <stdlib.h>

int main()
{
	int nums[64], summ = 0;
	int i = 0, start = -1, end = -1;
	printf("ARRAY: ");
	for (i = 0; i < 64; i++) {
		nums[i] = rand() % 200 - 100;	// Fill array (-100..+100)
		printf("%d; ", nums[i]);
		start = (start == -1 && nums[i] > -1) ? i : start; // Start position
	}
	for (i = 63; i >= 0; i--) {
		if (end == -1 && nums[i] > -1) { // End position
			end = i;
			break;
		}
	}
	for (i = start; i <= end; i++) // Sum UP
		summ += nums[i];
	printf("\nSUMM: %d\n", summ);
	return 0;
}