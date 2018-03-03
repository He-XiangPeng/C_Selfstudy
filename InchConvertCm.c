#include <stdio.h>

int main(void)
{
	double cm, inch;
	printf("Please input the value of inch: inch = ");
	scanf("%lf", &inch);
	cm = inch * 2.54;
	printf("%lf inch = %lf cm\n", inch, cm);
	return 0;
}