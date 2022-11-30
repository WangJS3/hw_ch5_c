#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 10
#define MAXRANGE 1000

int recursiveMinimum(int array[], int low, int high);
int main()
{
	int array[SIZE];
	int loop, smallest;

	srand(time(NULL));

	for (loop = 0; loop < SIZE; loop++)
	{
		array[loop] = 1 + rand() % MAXRANGE;
	}
	printf("Array members are:\n");

	for(loop = 0; loop < SIZE; loop++)
	{
		printf("%d", array[loop]);
	}

	printf("\n");
	smallest = recursiveMinimum(array, 0, SIZE - 1);
	return 0;
}

int recursiveMinimum(int array[], int low, int high)
{
	static int smallset = MAXRANGE;

	if (array[low] < smallset)
	{
		smallset = array[low];
	}
	
	if (low == high)
	{
		return smallset;
	}
	else
	{
		return recursiveMinimum(array, low + 1, high);
	}
}