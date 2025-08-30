#include<stdio.h>
/*
计算1+2+3+...+n的值，其中n由用户输入。
*/
int main()
{
	int n = 0;
	scanf_s("%d", &n);
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum = sum + i;
	}
	printf("%d", sum);
	return 0;

}
