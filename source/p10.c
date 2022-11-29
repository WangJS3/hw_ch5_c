#include<stdio.h>
#include<stdlib.h>

void cubeByReference(int*nPtr);

int main(void)
{
	int numbrer = 5;
	printf("The original value of number is %d", number);

	cubeByReference(&numbrer);

	printf("\nThe new value of number is %d", number);
	system("pause");
	return 0;
}
void cubeByReference(int *nPtr)
{
	*nPtr = *nPtr**nPtr**nPtr;
}