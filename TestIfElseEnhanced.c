/** 
 * if...else if...else if...else的用法
 * 分数等级的判断
 */
#include <stdio.h>

int main(void)
{
	float score = 60;
	// printf("Please the value of score\n")
	// scanf("%d", &score);
	if (score >= 90 && score <= 100)
	{
		printf("成绩优秀\n");
	}
	else if (score >= 80 && score < 90)
	{
		printf("成绩良好\n");
	}
	else if (score >= 60 && score < 80)
	{
		printf("成绩及格\n");
	}
	else
	{
		printf("成绩不及格\n");
	}
	return 0;
}