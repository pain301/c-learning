char *Question94 = "Q94:�涨�����ַ�����ֻ������ĸ��*�š����д����fun�����Ĺ����ǣ��������ַ����е�ǰ��*��ȫ��ɾ�����м��β����*�Ų�ɾ����";

#include "head.h"

char* firstAlphbetQ94(char *str)
{
	char *p, *h = str;
	if (*h == '*'){
		++h;
		while (*h == '*'){
			++h;
		}
		if (*h == 0){
			return NULL;
		}
	}
	return h;
}

void Q94()
{
	puts(Question94);
	char str[STR_LEN];
	printf("Please input a string:\n");
	gets(str);
	char *p, *q, *h = firstAlphbetQ94(str);
	if (!h){
		printf("Your string shouldn't all '*'\n");
	}
	p = str;
	while (p != h){
		if (*p = '*'){
			q = p;
			while (*(q + 1) != 0){
				*q = *(q+1);
				++q;
			}
			*q = 0;
			--h;
		}
		else{
			++p;
		}
	}
	printf("After delete '*' in the begin of string:\n");
	puts(str);
}