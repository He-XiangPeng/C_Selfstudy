#include <stdio.h>
/** 
 * if的用法
 */
int main(void)
{
	if (3 > 2) // if(3), if(0), if(0 == 0)
	{
		printf("If的简单用法\n"); // if(条件为真即可) 执行语句
		printf("COD\n");
	}

	if (1 > 2)
		printf("AAAAA\n"); // if的范围只控制到if的下一个语句
		printf("BBBBB\n"); // 该语句会执行

	return 0;
}