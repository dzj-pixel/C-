#include<stdio.h>
#include<math.h>
/*
��n���ڣ�������n��ͬʱ�ܱ�3��7������������Ȼ��֮�͵�ƽ����s������n���û����롣
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