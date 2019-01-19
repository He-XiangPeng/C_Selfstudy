/** 
 *	学生管理系统加强版
 * 	通过指针达到修改结构体元素的目的
 *
 * 
 */
#include <stdio.h>
#include <stdlib.h>

struct Student
{
	int age;
	int score;
	char name[100];
};


void inputInfo(struct Student * p, int a); // 形参用指针（struct Student *）传递即可,而不必用多级指针调用
void sort(struct Student * q, int b);
void outputInfo(struct Student * s, int c);

int main(void)
{
	int len;
	struct Student * pArr; // 类似于struct Student pArr[len]

	printf("请输入学生的个数：");
	scanf("%d", &len);
	// 动态构造一维数组
	pArr = (struct Student *)malloc(sizeof(struct Student) * len);
	
	inputInfo(pArr, len);
	sort(pArr, len);
	outputInfo(pArr, len);

	free(pArr);
	pArr = NULL;
	return 0;
}

// 输入学生信息
void inputInfo(struct Student * p, int a) // 
{
	
	// *a = (int *)malloc(sizeof(int));
	// **a = 3;


	for (int i = 0; i < a; ++i)
	{
		printf("请输入第%d个学生的信息：\n", i + 1);
		printf("name = ");
		scanf("%s", p[i].name);

		printf("age = ");
		scanf("%d", &p[i].age); // 等价于(*p[i]).age或pArr.age

		printf("score = ");
		scanf("%d", &p[i].score);
	}

}

// 按学生成绩冒泡排序
void sort(struct Student * q, int b)
{
	struct Student t;
	for (int i = 0; i < b - 1; ++i)
	{
		for (int j = 0; j < b - 1 - i; ++j) // 内部循环执行完毕后再执行外部循环
		{
			if (q[j].score < q[j+1].score)
			{
				t = q[j];
				q[j] = q[j+1];
				q[j+1] = t;
			}
		}
	}
}

// 输出学生信息
void outputInfo(struct Student * s, int c)
{
	printf("\n\n排列好的学生的信息：\n");
	for (int i = 0; i < c; ++i)
	{
		printf("第%d个学生的信息是：\n", i+1);
		printf("name = ");
		printf("%s\n", s[i].name);

		printf("age = ");
		printf("%d\n", s[i].age);

		printf("score = ");
		printf("%d\n", s[i].score);
	}

}
