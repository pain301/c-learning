char *Question21 = "Q21:���д����fun,�Գ���λ7���ַ����ַ���������β�ַ��⣬������5���ַ���ascii�뽵�����С�";

/*�������ݣ�abcdefg,�������򷽷���ֱ�Ӳ�������*/

#include<stdio.h>
#include<string.h>

void strSort(char *str)
{
	int i, j;
	char ct;
	for (i = 2; i <= 5; ++i)
	{
		ct = str[i];
		j = i - 1;
		while (j > 0 && ct > str[j])
		{
			str[j + 1] = str[j];
			--j;
		}
		str[j + 1] = ct;
	}
}

void Q21()
{
	char str[100];
	do
	{
		printf("Please enter 7 characters.\n");
		gets(str);
	} while (strlen(str)>7 || strlen(str)<7);
	strSort(str);
	printf("After sort:\n");
	puts(str);
}