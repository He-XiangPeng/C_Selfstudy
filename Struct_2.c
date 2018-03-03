#include <stdio.h>
#include <string.h>
/** 
 *	2015年01月17日15:21:42
 *	通过函数对结构体输入输出
 *
 * 
 */

// void inputStudent(struct Student stu);
void inputStudent(struct Student * pstu);

// void outputStudent(struct Student ss);
void outputStudent(struct Student * psss);


struct Student
{
	int age;
	char sex;
	char name[100];
};

int main(void)
{
	struct Student st;

	inputStudent(&st); // 对结构体变量输出，必须发送st的地址
	printf("%d %c %s\n", st.age, st.sex, st.name);
	// outputStudent(st);
	outputStudent(&st);

	return 0;
}

//该函数不能修改结构体的内容，运行时是垃圾值
/*void inputStudent(struct Student stu)
{
	stu.age = 10;
	strcpy(stu.name, "June");
	stu.sex = 'F';
}*/
void inputStudent(struct Student * pstu)
{
	(*pstu).age = 10;
	strcpy(pstu->name, "张三");
	pstu->sex = 'F';

}

// 发送内容耗费内存和时间
// void outputStudent(struct Student ss)
// {
// 	printf("%d %c %s\n", ss.age, ss.sex, ss.name);
// }

// 用指针速度快
void outputStudent(struct Student * psss)
{
	printf("%d %c %s\n", psss->age, psss->sex, psss->name);
}



