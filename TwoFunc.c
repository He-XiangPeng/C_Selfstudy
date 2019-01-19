/**
 *	函数的用法
 *
 * 
 */
#include <stdio.h>

void butler(void); // ISO/ANSI C函数原型,不提供编译出错
				   // 函数声明， 分号不能丢掉
				   // C标准建议要用的所有函数提供函数原型
/**
 * 返回两个数的大者
 * @param i 形参
 * @param j 形参
 */
void max1(int i, int j) // i , j是形式参数
{
	if (i > j)
	{
		printf("%d\n", i);
	}
	else
	{
		printf("%d\n", j);
	}
}

/**
 * max2函数
 * @param  i 
 * @param  j 
 * @return   
 */
int max2(int i, int j)
{
	if (i > j)
	{
		return i;
	}
	else
	{
		return j;
	}
}


int main(void)
{
	int a, b, c, d, e, f;
	a = 1, b = 2, c = 3, d = 9, e = -5, f = 100;
	max1(a , b);
	max1(c, d);
	max1(e, f);

	printf("Hello,Lina!\n");
	butler();
	printf("Fuckyou!\n");
	return 0;
}

void butler(void)
{
	printf("You rang, sir!\n"); // 函数的改写
}
