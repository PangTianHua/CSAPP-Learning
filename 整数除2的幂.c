/*写一个函数div16，对于整数参数x返回x/16的值。你的函数不能使用除法、
模运算、乘法、任何条件语句（if或者？：）、任何比较运算符（例如<、>或==）
或任何循环。你可以假设数据类型int是32位长，使用补码表示，而右移是算术右移 */
# include <stdio.h>

int div16(int x)
{
	/* Compute bias to be either 0 (x >= 0) or 15(x < 0) */
	int bias = (x >> 31) & 0xF;
	return (x + bias) >> 4;
}

int main()
{
	int x = 64;
	float result = div16(x);
	printf("64 / 16 == %f", result);    //result = 4.000000 success!
	return 0;
}

