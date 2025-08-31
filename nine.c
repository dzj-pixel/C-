#include<stdio.h>
/*
个位数为6，且能被3整除但不能被5整除的三位自然数有多少个，分别是哪些？
*/
int main()
{
	int sum = 0;
	for (int i = 100; i < 1000; i++)
	{
		if (i % 10 == 6 && i % 3 == 0 && (i % 5 != 0))
		{
			printf("%d\n", i);
			sum++;
		}
	}
	printf("总共有=%d个\n", sum);
	return 0;
}