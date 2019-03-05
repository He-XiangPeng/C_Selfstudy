/** 
 *	scanf("%*d", &i);的用法
 * 
 */
#include <stdio.h>
int main(void)
{
	int i;
	printf("请输入三个数字：\n");
	scanf("%*d %*d %d", &i);
	printf("最后一个整数是%d\n", i);
	return 0;
}