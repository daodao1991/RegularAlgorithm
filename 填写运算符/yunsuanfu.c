#include<stdio.h>
#include<stdlib.h>

int main()
{
	char oper[4] = { '+','-','*','/' }; 
	int j, array[4];					//����array�������"+��-��*��/"4����������ַ�������oper�е��±�	
	int sign;							//�ۼ�����ʱ�ķ���
	int res;							//������ʽ�Ľ��ֵ
	int count = 0;							//��������ͳ�Ʒ��������ķ���
	int num[5];							//����5��������
	float  left, right;					//�����м���

	printf("������5�������м��ÿո������");
	for (j = 0; j < 5; j++)
	{
		scanf("%d", &num[j]);
	}
	printf("��������ֵ��");
	scanf("%d", &res);


	//ÿ��λ��ѭ��4����������±�0��Ӧ'+'��1��Ӧ'-'��2��Ӧ'*'��3��Ӧ'/'
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


									//����4*4*4*4�������������Ҫ��ÿһ������µ��ĸ�λ�����β鿴,
									//ÿ�β鿴�����Ǽ�����һ�����������Ľ�������úõ�ǰ�������sign��right(�Ҳ�����)

									for (j = 0; j <= 3; j++) 
									{
										//ʹ��case��䣬��4����������Ӧ�Ŀո�λ�ã�����������
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
											//�˷��ͳ�����Ҫ����������right�Ҳ�����
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
										printf("%3d��", count);
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
		printf("û�з���Ҫ�����ϣ�\n");

	system("pause");
	return 0;
}