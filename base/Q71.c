char *Question71 = "Q71:���д����fun���书��ʱ����������λ����������a��b�ϲ��γ�һ����������c�У��ϲ��ķ�ʽ�ǣ���a����ʮλ�͸�λ�����η���c����ʮλ��ǧλ�ϣ�b��ʮλ�͸�λ�������η���c���İ�λ�͸�λ��";

#include "head.h"

void Q71()
{
	puts(Question71);
	int a, b, c;
	int a1, a2, b1, b2;
	printf("Please enter two numbers:\n");
	scanf("%d %d",&a,&b);
	a2 = a % 10;
	a1 = a / 10 % 10;
	b2 = b % 10;
	b1 = b / 10 % 10;
	c = a2 * 1000 + b1 * 100 + a1 * 10 + b2;
	printf("The new number is : %d\n",c);
}