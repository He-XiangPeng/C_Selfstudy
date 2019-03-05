// getchar()与putchar
#include <stdio.h>
#define SPACE ' '
int main(void)
{
	char ch;

	ch = getchar(); // 读入下一个字符
	while(ch != '\n') // 当一行未结束时
	{
		if (ch == SPACE) // 空格不变
		{
			putchar(ch); // 
		}
		else
		{
			putchar(ch + 1); // 改变其他字符
		}
		ch = getchar(); // 获取下一个字符
	}
	putchar(ch); // 打印换行字符
	return 0;
}