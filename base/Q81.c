char *Question81 = "Q81:���д����fun���书��ʹ����������λ������a b�ϲ��γ�һ����������c�С��ϲ��ķ�ʽʹ����a����ʮλ�͸�λ�����η���c���İ�λ�͸�λ�ϣ�b����ʮλ�͸�λ�����η���c����ǧλ��ʮλ�ϡ�";

#include "head.h"

void Q81()
{
	puts(Question81);
	int a, b, c;
	int a1, a2, b1, b2;
	printf("Please enter two numbers:\n");
	scanf("%d %d", &a, &b);
	a2 = a % 10;
	a1 = a / 10 % 10;
	b2 = b % 10;
	b1 = b / 10 % 10;
	c = b1 * 1000 + a1 * 100 + b1 * 10 + a2;
	printf("The new number is : %d\n", c);
}