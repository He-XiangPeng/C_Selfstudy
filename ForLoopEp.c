#include <stdio.h>
/** 
 *	求1到100整数之间的奇数之和，偶数之和
 *	以及奇数个数，偶数个数，奇数平均值，偶数平均值
 *  odd number 奇数
 *  even number 偶数
 * 
 */
int main()
{
	int oddSum, evenSum;
	oddSum   = evenSum   = 0; // int i = j = 0;是错误的
	int oddCount, evenCount;
	oddCount = evenCount = 0;
	float oddAverange, evenAverange;

	for (int i = 1; i <= 100; ++i)
	{
		if (i % 2 != 0) // or (i % == 1)
		{
			oddSum += i;
			oddCount++;
		}
		if (i % 2 == 0) // 接else语句更简洁 
		{
			evenSum += i;
			evenCount++;
		}
	}
	oddAverange  = (float) (oddSum) / oddCount; // 强制转换
	evenAverange = (float) (evenSum) / evenCount;
	printf("奇数之和为%d，偶数之和为%d\n", oddSum, evenSum);
	printf("奇数个数为%d，偶数个数为%d\n", oddCount, evenCount);
	printf("奇数平均值为%.2f，偶数平均值为%.2f\n", oddAverange, evenAverange);
	
	return 0;
}