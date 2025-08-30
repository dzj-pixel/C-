#include<stdio.h>
#include<stdbool.h>
/*
输入1~10之间的一个整数，输出该整数的英文单词
*/

int main()
{
	char arr[][10] = {"one","two","three","four","five","six","seven","eight","nine","ten"};
	
	while (true)
	{
		int i;
		scanf_s("%d", &i);
		i = i - 1;
		char(*p)[10] = arr;
		printf("%s", *(p + i));
	}

	return 0;
}