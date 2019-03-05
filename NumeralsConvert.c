/** 
 *	十进制转r进制：除r取余，直至商为0，余数倒序排列
 *	使用递归算法
 * 	1020304 / 7 = 145757 r 5 ↑  => 11446435
 	 145757 / 7 =  20822 r 3 │
  	  20822 / 7 =   2974 r 4 │
       2974 / 7 =    424 r 6 │
        424 / 7 =     60 r 4 │
         60 / 7 =      8 r 4 │
          8 / 7 =      1 r 1 │
          1 / 7 =      0 r 1 │
 * 
 */
#include <stdio.h>

 void Numeral(unsigned long n);

 int main(void)
 {
 	unsigned long num = 1024;
 	Numeral(num);
 	
 	return 0;
 }

 void Numeral(unsigned long n) // x表示几进制
 {
 	int r; // 余数
 	r = n % 2;
 	if (n >= 2)
 	{
 		Numeral(n / 2);
 	}
 	putchar('0' + r);

 	return;
 }

 