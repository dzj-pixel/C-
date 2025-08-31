#include<stdio.h>
/*
//①设置环境：
//2 定义变量i、j、s，以及用于放置结果的变量sum，并令sum初值为0;
//③ i=1;
//④如果i≤100，则转⑤，否则转 6;
//5 令s=0，求前i个自然数之和，并放于变量s之中；
//⑥sum=sum+s:
//⑦i增加1，转④:
//⑧输出和sum，结束。
*/
int main()
{
	/*int i, j, s;
	int sum = 0;
	i = 1;
	if (i <= 100)
	{
		s = 0;
		s = s + i;
	}
	else
	{
		printf("sum=%d\n", s);
	}
	sum = sum + s;
	i++;*/

	//i~100的累和
	int i, s = 0;
	for (i = 1; i <= 100; i++)
	{
		s = s + i;
	}
	
	printf("s=%d\n", s);
	return 0;
}