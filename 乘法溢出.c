/*
对于数据类型int为32位的情况， 设计一个版本的tmult_ok函数，
使用64位精度的数据类型int64_t，而不使用除法
2022.2.19
*/
# include <stdio.h>

/*Determine whether the arguments can be multiplied
without overflow*/

int tmult_ok(int x, int y)
{
	/*Compute product without overflow*/
	int64_t pll = (int64_t)x*y;
	/*See if casting to int priserves value*/
	return pll == (int)pll;
}

int main()
{
	int x, y, tmult_value;
	printf("please enter x and y");
	scanf ("%d%d", &x, &y);
	tmult_value = tmult_ok(x, y);
	printf("the arguments is %d", tmult_value);
	return 0;
}



