char *Question65 = "Q65:���д����fun���书���ǣ�����λ����������a��b�ϲ���һ����������c�С��ϲ��ķ�ʽ�ǣ���a����ʮλ�͸�λ�����η���c���İ�λ�͸�λ�ϣ�b����ʮλ�͸�λ�����η���c����ʮλ��ǧλ�ϡ�";

/*�������ݣ�12 34*/
/*���н����4132*/

#include "head.h"

void get(int *a, int *b)
{
	printf("Please input two numbers:\n");
	scanf("%d %d",a,b);
}

void Q65()
{
	puts(Question65);
	int a, b;
	get(&a,&b);
	int merge = 0;
	int a1, a2, b1, b2;
	a2 = a % 10;
	a1 = a / 10 % 10;
	b2 = b % 10;
	b1 = b / 10 % 10;
	merge = b2 * 1000 + a1 * 100 + b1 * 10 + a2;
	printf("The new number is:%d\n",merge);
}
