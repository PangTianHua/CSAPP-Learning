/*дһ������div16��������������x����x/16��ֵ����ĺ�������ʹ�ó�����
ģ���㡢�˷����κ�������䣨if���ߣ��������καȽ������������<��>��==��
���κ�ѭ��������Լ�����������int��32λ����ʹ�ò����ʾ������������������ */
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

