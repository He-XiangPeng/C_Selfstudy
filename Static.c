#include <stdio.h>

extern int stn; // extern表示该变量或方法是在其他文件中定义的
int str = 1; // 全局变量，可被除本文件的其他文件访问，
static int stf; // 只能被本文件访问的静态变量，具有内部链接的静态变量

void trystat(void);

int main(void)
{
	int count;
	for (count = 1; count <= 3; ++count)
	{
		printf("循环结果：%d\n", count);
		trystat();
	}

	printf("str = %d, stf = %d\n", str, stf);
	return 0;
}

void trystat(void)
{
	int fade = 1;
	static int stay;

	printf("fade = %d and stay = %d\n", fade++, stay++);
}

/*
循环结果：1
fade = 1 and stay = 0
循环结果：2
fade = 1 and stay = 1
循环结果：3
fade = 1 and stay = 2
str = 1, stf = 0
*/