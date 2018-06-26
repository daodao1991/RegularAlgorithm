#include<stdio.h>
#include<stdlib.h>

int main()
{
	void move(int n, char x, char y, char z);

	int num;
	printf("请输入要移动的盘子个数：");
	scanf_s("%d", &num);

	printf("移动%2d个盘子的步骤如下：\n", num);
	move(num, 'a', 'b', 'c');

	system("pause");
	return 0;

}


void move(int n, char x, char y, char z)
{
	if (n == 1)
		printf("%c-->%c\n", x, z);
	else
	{
		move(n - 1, x, z, y);
		printf("%c-->%c\n", x, z);
		move(n - 1, y, x, z);
	}
}
