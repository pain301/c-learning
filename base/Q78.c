char *Question78 = "Q78:���д����fun���书���ǣ���s��ָ�ַ�����asciiֵΪż�����ַ�ɾ��������ʣ���ַ��γ�һ���´�����t��ָ�������С�";

#include "head.h"

void Q78()
{
	puts(Question78);
	char str[STR_LEN], t[STR_LEN];
	printf("Please enter a string:\n");
	gets(str);
	char *p, *q;
	int i = 0;
	while (str[i] != 0){
		if (str[i] % 2 == 0){
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