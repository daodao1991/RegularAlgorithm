#include<stdio.h>
#include<stdlib.h>

#define Fetch 1000  // 第48个月后，即毕业时取得1000元
#define Rate 0.0171  // 月利率=年利率/12

int main()
{
	double Corpus[49];  //用来存放每个月月末取走1000元生活费之后，剩余的银行本金
	int i;

	Corpus[48] = 0;

	//逆推过程，最终目标是要求得Corpus[0]
	for (i = 47; i >= 0; i--)
	{
		Corpus[i] = (Corpus[i + 1] + Fetch) / (1 + Rate / 12);
	}

	//输出
	for (i = 48; i > 0; i--)
	{
		printf("第%2d个月月末本利共计：%.2f\n", i, Corpus[i]+Fetch);
	}

	printf("最少需要存入%.2f\n", Corpus[0]);

	system("pause");

	return 0;
}