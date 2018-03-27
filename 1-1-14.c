#include <stdio.h>

/*******************************************************
* Function: max_num
* Describe: find a max value smaller than log2(n).
* Input   : int n: the value in log2(n).
* Output  : NULL
* Return  : SUCCESS: the value's key
*         : FAILED : -1
* Notice  : N/A.
*******************************************************/
int max_num(int n)
{
	//2 * 2 * 2 ... * 2 (2 of n)
	int i = 0;
	for (i = 0; i < n; i++)
	{
		int sum = 2 << i;
		if (sum < n)
			continue;
		else
			return i;
	}

	return -1;
}

int main(int argc, char const *argv[])
{
	int value = atoi(argv[1]);
	int ret = max_num(value);

	printf("ret: %d\n", ret);

	return 0;
}