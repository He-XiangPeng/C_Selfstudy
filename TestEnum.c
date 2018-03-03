#include <stdio.h>


// 定义了一个数据类型
enum WeekDay
{
	Monday, Tuesday, Wednesday, ThursDay, Friday, Saturday, Sunday
};

int main(void)
{
	enum WeekDay day = Wednesday;
	printf("%d\n", day); // 2
	return 0;
}