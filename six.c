#include<stdio.h>
#include<math.h>
/*
求n以内（不包括n）同时能被3和7整除的所有自然数之和的平方根s，其中n由用户输入。
*/
int main()
{
	int n;
	double s = 0;
	int sum = 0;
	scanf_s("%d", &n);
	for(int i=1;i<n;i++)
	{
		if (i % 3 == 0 && i % 7 == 0)
		{
			sum = sum + i;
			s = sqrt(sum);
		}
	}
	printf("%lf\t", s);
	return 0;
}