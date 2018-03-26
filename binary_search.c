#include <stdio.h>

/*******************************************************
* Function: binary_search
* Describe: find a value in an array with binary search.
* Input   : int value: the value you want to find.
*         : int *array: the array.
*         : int length: the array length.
* Output  : NULL
* Return  : SUCCESS: the value's key
*         : FAILED : -1
* Notice  : the array must be sorted.
*******************************************************/
int binary_search(int value, int *array, int length)
{
	int low = 0;
	int high = length - 1;
	while(high >= low)
	{
		int mid = low + (high - low ) / 2;
		if (*(array + mid) > value)
			high = mid - 1;
		else if (*(array + mid) < value)
			low = mid + 1;
		else
			return mid;
	}

	return -1;
}

int main(void)
{
	int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int length = 10;
	int value = 6;
	int ret = -1;

	ret = binary_search(value, array, length);

	printf("ret: %d\n", ret);

	return 0;
}