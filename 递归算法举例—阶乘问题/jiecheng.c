#include<stdio.h>
#include<stdlib.h>

int main()
{
	int factorial(int n);
	int i;
	printf("������һ��Ҫ����׳˵�������");
	scanf("%d", &i);
	printf("%d�Ľ׳˵ļ�����Ϊ��%d\n", i, factorial(i));

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