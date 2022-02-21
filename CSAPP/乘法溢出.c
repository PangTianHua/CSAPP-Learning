/*
������������intΪ32λ������� ���һ���汾��tmult_ok������
ʹ��64λ���ȵ���������int64_t������ʹ�ó���
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



