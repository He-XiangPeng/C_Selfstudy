#include <stdio.h>

/** 
 *	判断一个数是否是素数
 * 
 */

/**
 * [isPrime description]
 * @param  val [description]
 * @return     [description]
 */
bool isPrime(int val)
{
	int i;
	for (i = 2; i < val; ++i)
	{
		if (val % i == 0)
		{
			break;
		}
	}

	if (i == val)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main(void)
{
	int m = 4;
	// scanf("d", &m);
	if (isPrime(m))
	{
		printf("Yes!\n");
	}
	else
	{
		printf("No!\n");
	}
	
	


	return 0;
}

