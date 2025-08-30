#include<stdio.h>
/*
要将五张100元，换成等值的50元，20元，10元，5元的纸币，要求每种纸币至少有一张，问有多少种换法？
*/
int main()
{
	int num = 0;
	for(int i=1;i<10;i++)
	{
		for(int j=1;j<22;j++)
		{
			for (int k = 1; k < 43; k++)
			{
				for (int w = 1; w < 85; w++)
				{

					if (i * 50 + j * 20 + k * 10 + w * 5 == 500)
					{
						printf("50元的有%d张，20元的有%d张，10元的有%d张，5元的有%d张\n", i, j, k, w);
						num++;
					}
				}
			}
		}
	}
	printf("共有%d种换法\n", num);
	return 0;
}