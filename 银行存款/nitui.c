#include<stdio.h>
#include<stdlib.h>

#define Fetch 1000  // ��48���º󣬼���ҵʱȡ��1000Ԫ
#define Rate 0.0171  // ������=������/12

int main()
{
	double Corpus[49];  //�������ÿ������ĩȡ��1000Ԫ�����֮��ʣ������б���
	int i;

	Corpus[48] = 0;

	//���ƹ��̣�����Ŀ����Ҫ���Corpus[0]
	for (i = 47; i >= 0; i--)
	{
		Corpus[i] = (Corpus[i + 1] + Fetch) / (1 + Rate / 12);
	}

	//���
	for (i = 48; i > 0; i--)
	{
		printf("��%2d������ĩ�������ƣ�%.2f\n", i, Corpus[i]+Fetch);
	}

	printf("������Ҫ����%.2f\n", Corpus[0]);

	system("pause");

	return 0;
}