#include<stdio.h>
/*
����һ��������5λ����������Ҫ�󣺰������˳�����
�磺����12345�����54321
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