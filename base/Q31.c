char *Question31 = "Q31:���д����fun���书���ǣ���s��ָ�ַ����г����±�Ϊż����ͬʱasciiֵҲΪż�����ַ��⣬�����ȫ��ɾ��������ʣ���ַ����γɵ�һ���´�����t��ָ��һ�������С�";

#include "head.h"

void delCharQ31(char *s, char *t)
{
	int i = 0, j = 0;
	char *cs, *ct;
	while (s[i] != '\0'){
		if (!(j % 2 == 0 && s[i] % 2 == 0)){/*������������Ԫ�س���*/
			cs = &s[i];
			while (*(cs + 1) != '\0'){/*��Ԫ�����δӺ���ǰ�ƶ�*/
				*cs = *(cs + 1);
				++cs;
			}
			*cs = '\0';
		}
		else
			++i;
		++j;/*����Ԫ�ص��ƶ�����ʼʱԪ�ص��±��Ѿ������仯���޷�������ĿҪ��j���Ǳ���ԭ���±�ı���*/
	}
	cs = s;/*���³�ʼ��csָ��*/
	ct = t;
	while (*cs != '\0')/*��s�е�Ԫ�ظ��Ƶ�t��*/
	{
		*ct = *cs;
		++ct;
		++cs;
	}
	*ct = '\0';
}

void Q31()
{
	puts(Question31);
	char s[STR_LEN], t[STR_LEN];
	printf("Please enter a string \n");
	gets(s);
	delCharQ31(s, t);
	printf("The string that math the condition is:\n");
	puts(t);
}