#include<stdio.h>
/*
11������Ȼ���������ĳ����߼�Ϊ��
�����û���;
�ڶ������i��flag��password������flag=0,i=0;
���û��ش������丳��password������
�ܿ�����ȷ������ǣ���flag=1��ת�ޡ�����ת��:
�ݻش����ο����������û�У���������1��i++)��ת�ۣ�����ת��:
�� ����flagֵ֮�����Ӧ��Ϣ��
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
			printf("������ȷ\n");
		}
		else
		{
			i++;
			if (i >= 3)
			{
				printf("����������λ���������\n");
			}
			else
			{
				printf("�����������������\n");

			}
		}
	}
	return 0;
}