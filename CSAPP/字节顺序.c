/*2021.12.31 12:35		csapp p32*/

# include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len)
{
	size_t i;
	
	//byte_pointer p ��˼�Ǹ�����������һ�ֱ�����p���������Ǳ�������ָ�����
	byte_pointer p = start;     //�������ַ�ʽ��typedef��������������ָ�봫�ݵķ�ʽ
	//unsigned char *p = start;
	
	for (i = 0; i < len; ++i)
	{
		printf(" %.2x", *(p + i));
	}
	printf("\n");
}

void show_int(int x)
{
	show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x)
{
	show_bytes((byte_pointer) &x, sizeof(float));
}

void show_pointer(void *x)
{
	show_bytes((byte_pointer) &x, sizeof(void *));
}

void text_show_bytes(int val)
{
	int ival = val;
	float fval = (float)ival;
	int *pval = &ival;
	
	show_int(ival);
	show_float(fval);
	show_pointer(&ival);
}

int main()
{
	int val = 0x87654321;
	
	text_show_bytes(val);
	return 0;
}
