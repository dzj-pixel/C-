#include<stdio.h>
/*
输入一个不超过5位的正整数，要求：按逆向的顺序输出
如：输入12345，输出54321
*/
int main()
{
	int a = 0;
	int b = 0;
	scanf_s("%d", &a);
	while (a != 0)
	{
		b = b * 10 + a % 10;
		a = a / 10; 
	}
	printf("%d", b);





	return 0;
}