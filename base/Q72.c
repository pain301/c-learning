char *Question72 = "Q72:���д����fun���书���ǣ���s��ָ�ַ������±�Ϊż�����ַ�ɾ��������ʣ���ַ��γ��´�����t��ָ�����С�";

#include "head.h"

void Q72()
{
	puts(Question72);
	char str[STR_LEN],t[STR_LEN];
	printf("Please enter a string:\n");
	gets(str);
	char *p,*q;
	int i = 0, j = 0;
	while (str[i] != 0){
		if (j % 2==0){
			p = &str[i];
			while (*(p + 1) != 0){
				*p = *(p + 1);
				++p;
			}
			*p = 0;
		}
		else{
			++i;
		}
		++j;
	}
	p = str;
	q = t;
	while (*p != 0){
		*q = *p;
		++p;
		++q;
	}
	*q = 0;
	printf("After processing:\n");
	puts(t);
}