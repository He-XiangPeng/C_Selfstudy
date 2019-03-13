/** 
 *	判断一个数是否是素数
 * 	大于1的自然数中，除了1和它本身以外不再有其他因数
 */
#include <stdio.h>
#include <stdbool.h> 
// 在C语言标准(C89)没有定义布尔类型，所以会报错。
// 而C99提供了一个头文件<stdbool.h>定义了bool，true代表1，false代表0。

/**
 * [isPrime description]
 * @param  val 要判断的数
 * @return  是否是质数
 */
_Bool isPrime(int val)
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

