#include<stdio.h>
#include<stdbool.h>
/*
����1~10֮���һ�������������������Ӣ�ĵ���
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