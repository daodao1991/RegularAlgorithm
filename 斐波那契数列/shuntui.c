#include<stdio.h>
#include<stdlib.h>

#define NUM 20


int main()
{
	int i;
	//定义一个拥有NUM个元素的数组，用于保存兔子的初始数据和以后每月的总数
	long fib[NUM] = { 1,1 }; 

	//顺推每个月的总数
	for (i = 2; i < NUM; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}

	//循环输出每个月的总数
	for (i = 1; i <= NUM; i++)
	{
		printf("第%d月兔子总数：%d\n", i, fib[i - 1]);
	}

	system("pause");

	return 0;
}