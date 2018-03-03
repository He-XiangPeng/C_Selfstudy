#include <stdio.h>
/** 
 * 如果有表达式 a = i++  它等价于 a = i ; i = i + 1;
   如果有表达式 a = ++i  它等价于 i = i + 1; a = i;
   先两者的区别是：前者是先赋值，然后再自增；
   				 后者是先自增，后赋值
   循环中无区别
   	求1+2+3+...+100的值
 */
int main(void)
{
	int sum = 0;
	for (int i = 1; i <= 100; ++i)
	{
		sum = sum + i;
		printf("* ");
	}
	printf("%d\n", sum);
	return 0;
}