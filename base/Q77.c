char *Question77 = "Q77:���дһ������fun���书���ǣ���������λ����������ab�ϲ��γ�һ����������c�С��ϲ���ʽ�ǣ���a����ʮλ�͸�λ�����η���c���ĸ�λ�Ͱ�λ�ϣ�b����ʮλ�͸�λ�����η���c����ʮλ��ǧλ�ϡ�";

#include "head.h"

void Q77()
{
	puts(Question77);
	int a, b, c;
	int a1, a2, b1, b2;
	printf("Please enter two numbers:\n");
	scanf("%d %d", &a, &b);
	a2 = a % 10;
	a1 = a / 10 % 10;
	b2 = b % 10;
	b1 = b / 10 % 10;
	c = a2 * 1000 + b1 * 100 + a1 * 10 + b2;
	printf("The new number is : %d\n", c);
}