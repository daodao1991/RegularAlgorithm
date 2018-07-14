#include<stdio.h>
#include<stdlib.h>

int main()
{
	int factorial(int n);
	int i;
	printf("请输入一个要计算阶乘的整数：");
	scanf("%d", &i);
	printf("%d的阶乘的计算结果为：%d\n", i, factorial(i));

	system("pause");
	return 0;
}

int factorial(int n)
{
	if (n == 1)
		return 1;
	else
		return n*factorial(n - 1);
}