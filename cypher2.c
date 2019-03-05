/**
 * ctype.h为isalpha()提供原型
 */
#include <stdio.h>
#include <ctype.h>
int main(void)
{
	char ch;

	ch = getchar(); // 读入下一个字符
	while(ch != '\n') // 当一行未结束时
	{
		if (isalpha(ch)) // 如果是一个字母
		{
			putchar(ch + 1); // 则改变他

		}
		else
		{
			putchar(ch); // 其他字符不变
		}
		ch = getchar(); // 获取下一个字符
	}
	putchar(ch); // 打印换行字符
	return 0;
}