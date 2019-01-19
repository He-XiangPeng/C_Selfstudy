/** 
 * if...else if...else if...else的用法
 * 即使else if条件成立也不会执行
 */
#include <stdio.h>

int main(void)
{
	float Score = 60;
	// printf("Please the value of Score\n")
	// scanf("%d", &Score);
	if (Score >= 90 && Score <= 100)
	{
		printf("成绩优秀\n");
	}
	else if (Score >= 80 && Score < 90)
	{
		printf("成绩良好\n");
	}
	else if (Score >= 60 && Score < 80)
	{
		printf("成绩及格\n");
	}
	else
	{
		printf("成绩不及格\n");
	}
	return 0;
}