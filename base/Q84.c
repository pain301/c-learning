char *Question84 = "Q84:���д����fun���书���ǣ���������λ����������a b�ϲ��γ�һ����������c�У��ϲ��ķ�ʽ�ǣ���a����ʮλ�͸�λ�����η���c�ĸ�λ�Ͱ�λ�ϣ�b����ʮλ�͸�λ�����η���c����ǧλ��ʮλ�ϡ�";

#include "head.h"

void Q84()
{
	puts(Question84);
	int a, b, c;
	int a1, a2, b1, b2;
	printf("Please enter two numbers:\n");
	scanf("%d %d", &a, &b);
	a2 = a % 10;
	a1 = a / 10 % 10;
	b2 = b % 10;
	b1 = b / 10 % 10;
	c = a1 * 1000 + b2 * 100 + a2 * 10 + b1;
	printf("The new number is : %d\n", c);
}