/** 
 *	break的用法
 *
 * 
 */
#include <stdio.h>

int main(void)
{
	for (int i = 0; i < 3; ++i)
	{
		if (3 > 2)
		{
			break; // break不能单独用于if语句中，但可用于终止for循环
		}
		printf("HeiHei\n");
	}

	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{

				break; // 在嵌套循环中break只能终止最近的循环	
		}

		printf("Hello! ");
	}
	return 0;
}