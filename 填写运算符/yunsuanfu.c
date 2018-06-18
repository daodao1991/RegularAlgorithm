#include<stdio.h>
#include<stdlib.h>

int main()
{
	char oper[4] = { '+','-','*','/' }; 
	int j, array[4];					//数组array用来存放"+、-、*、/"4种运算符在字符型数组oper中的下标	
	int sign;							//累加运算时的符号
	int res;							//保存表达式的结果值
	int count = 0;							//计数器，统计符合条件的方案
	int num[5];							//保存5个操作数
	float  left, right;					//保存中间结果

	printf("请输入5个数，中间用空格隔开：");
	for (j = 0; j < 5; j++)
	{
		scanf("%d", &num[j]);
	}
	printf("请输入结果值：");
	scanf("%d", &res);


	//每个位置循环4种运算符，下标0对应'+'，1对应'-'，2对应'*'，3对应'/'
	for (array[0] = 0; array[0] <= 3; array[0]++)
	{
		if (array[0] < 3 || num[1] != 0)
		{
			for (array[1] = 0; array[1] <= 3; array[1]++)
			{
				if (array[1] < 3 || num[2] != 0)
				{
					for (array[2] = 0; array[2] <= 3; array[2]++)
					{
						if (array[2] < 3 || num[3] != 0)
						{
							for (array[3] = 0; array[3] <= 3; array[3]++)
							{
								if (array[3] < 3 || num[4] != 0)
								{
									left = 0;
									right = num[0];
									sign = 1;


									//共有4*4*4*4种情况，现在需要对每一种情况下的四个位置依次查看,
									//每次查看，都是计算上一步运算符计算的结果，并置好当前运算符的sign和right(右操作数)

									for (j = 0; j <= 3; j++) 
									{
										//使用case语句，将4种运算符填到对应的空格位置，并进行运算
										switch (oper[array[j]])
										{
										case '+':
											left = left + sign*right;
											sign = 1;
											right = num[j + 1];
											break;
										case '-':
											left = left + sign*right;
											sign = -1;
											right = num[j + 1];
											break;
										case '*':
											right = right*num[j + 1];
											break;
											//乘法和除法主要是重新设置right右操作数
										case '/':
											right = right / num[j + 1];
											break;
										default:
											break;
										}

									}


									if (left + sign*right == res)
									{
										count++;
										printf("%3d：", count);
										for (j = 0; j <= 3; j++)
										{
											printf("%d%c", num[j], oper[array[j]]);
										}
										printf("%d=%d\n", num[4], res);
									}
								}
							}
						}
					}
				}
			}
		}
	}


	if (count == 0)
		printf("没有符合要求的组合！\n");

	system("pause");
	return 0;
}