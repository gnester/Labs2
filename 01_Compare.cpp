#include <stdio.h>
#include <stdlib.h>

int main()
{
	int nums[64], summ = 0;
	int i = 0, pol = 0, otr = 0;
	printf("ARRAY: ");
	for (i = 0; i < 64; i++) {	// Fill array (-100..+100)
		nums[i] = rand() % 200 - 100;
		printf("%d; ", nums[i]);
		(nums[i]>0) ? pol++ : otr++;
	}
	printf("\nPolozhitelnux: %d, Otricatelnux: %d\n", pol, otr);
	printf((pol > otr) ? "Bolshe Polozhitelnux" : (pol != otr) ? "Bolshe Otricatelnux" : "Oni ravnu");
	printf("\n");
	return 0;
}