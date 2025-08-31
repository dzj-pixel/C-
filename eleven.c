#include<stdio.h>
/*
11．用自然语言描述的程序逻辑为：
①设置环境;
②定义变量i、flag和password，并令flag=0,i=0;
③用户回答口令，将其赋于password变量；
④口令正确？如果是，则flag=1，转⑥。否则转⑤:
⑤回答三次口令了吗？如果没有，计数器加1后（i++)，转③，否则转⑥:
⑥ 根据flag之值输出相应信息。
/
int main()
{
	int i = 0, flag = 0, password;//2
	while (i < 3)//5
	{
		scanf_s("%d", &password);//3
		if (password == 123456)//4
		{
			flag = 1;
			printf("密码正确\n");
		}
		else
		{
			i++;
			if (i >= 3)
			{
				printf("密码错误，三次机会已用完\n");
			}
			else
			{
				printf("密码错误，请重新输入\n");

			}
		}
	}
	return 0;
}