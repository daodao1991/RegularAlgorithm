#include<stdio.h>
#include<stdlib.h>

#define NUM 20


int main()
{
	int i;
	//����һ��ӵ��NUM��Ԫ�ص����飬���ڱ������ӵĳ�ʼ���ݺ��Ժ�ÿ�µ�����
	long fib[NUM] = { 1,1 }; 

	//˳��ÿ���µ�����
	for (i = 2; i < NUM; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}

	//ѭ�����ÿ���µ�����
	for (i = 1; i <= NUM; i++)
	{
		printf("��%d������������%d\n", i, fib[i - 1]);
	}

	system("pause");

	return 0;
}