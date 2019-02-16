/** 
 *	简单的结构体
 *
 *
 * 
 */
#include <stdio.h>

// 结构体最常用的定义方法
struct Student
{
	int age;
	float score;
	char sex;
};

//第二种
struct Student_1
{
	int age;
	float score;
	char sex;
} st_1;

//第三种
struct
{
	int age;
	float score;
	char sex;
} st_2;

int main(void)
{
	struct Student st = {80, 66.6, 'F'}; // 定义的同时赋初值
	struct Student * pst = &st;
	pst->age = 10; // 在计算机内部会被转化为(*pst).age等价于st.age

	struct Student st1;
	st1.age = 10;
	st1.score = 88;
	st1.sex = 'M';
	printf("%d，%2.1f, %c\n", st.age, st.score, st.sex);
	printf("%d，%2.1f, %c\n", st.age, st.score, pst->sex);
	printf("%d，%2.1f, %c\n", st1.age, st1.score, st1.sex);
	return 0;
}








