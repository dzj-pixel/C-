#include<stdio.h>
/*
��λ��Ϊ6�����ܱ�3���������ܱ�5��������λ��Ȼ���ж��ٸ����ֱ�����Щ��
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
	printf("�ܹ���=%d��\n", sum);
	return 0;
}