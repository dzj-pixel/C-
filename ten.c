#include<stdio.h>
/*
//�����û�����
//2 �������i��j��s���Լ����ڷ��ý���ı���sum������sum��ֵΪ0;
//�� i=1;
//�����i��100����ת�ݣ�����ת 6;
//5 ��s=0����ǰi����Ȼ��֮�ͣ������ڱ���s֮�У�
//��sum=sum+s:
//��i����1��ת��:
//�������sum��������
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

	//i~100���ۺ�
	int i, s = 0;
	for (i = 1; i <= 100; i++)
	{
		s = s + i;
	}
	
	printf("s=%d\n", s);
	return 0;
}