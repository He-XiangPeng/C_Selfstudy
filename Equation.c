#include <stdio.h> 
#include <math.h> 
/* 
求一元二次方程组ax2+bx+c=0的解,a不等于0，a,b,c为实数
*/
int main(void) 
{
	

	double a;
	double b;
	double c;  //把三个系数保存在计算机中
	char ch;

	do
	{
		printf("请输入一元二次方程的三个系数\n");
		printf("a = ");
		scanf("%lf", &a);
		printf("b = ");
		scanf("%lf", &b);
		printf("c = ");
		scanf("%lf", &c);

		double delta; //delta 存放b*b - 4*a*c
		double x1, x2; //方程的两个解
		delta = b*b - 4*a*c; //=表示赋值

		if (delta > 0)
		{
			x1 = ((-b) + sqrt(delta)) / (2*a);
			x1 = ((-b) - sqrt(delta)) / (2*a);
			printf("有两个不同解：x1 = %lf, x2 = %lf\n", x1, x2);
		}
		else if (delta == 0)
		{
			x1 = (-b) / (2*a);
			x2 = x1; //右边赋给左边
			printf("方程有唯一解：x1 = x2 = %lf\n", x1);
		}
		else
		{
			printf("一元二次方程无解\n");
		}

		printf("是否继续(是输入y/Y,否按任意键): \n");
		scanf(" %c", &ch); // %c前面必须加一个空格，否则程序只执行一遍
		

	} while ('y' == ch || 'Y' == ch);
	
	
	return 0;
}