//2022.2.11
//Determine whether arguments can be added without overflow
//如果参数x和y相加不会产生溢出，这个函数就返回1
//无符号数加法检测

# include <stdio.h>

int uadd_ok(unsigned x, unsigned y)
{
	unsigned sum = x + y;
	return sum >= x;
}

void uAbel_result(unsigned x)
{
	int i, sum_2 = 1;
	for(i = 1; i <= 4; ++i)
	{
		sum_2 = sum_2 * 2;
	}
	x = sum_2 - x;
	printf("%d", x);
}

int main()
{
	int x = -80, y = 100;
	printf("%d",uadd_ok(x, y));
	printf("%d\n", 0x0);
	printf("%d\n", 0x5);
	printf("%d\n", 0x8);
	printf("%d\n", 0xD);
	printf("%d\n", 0xF);
	
	uAbel_result(5);
	
	return 0;
}

