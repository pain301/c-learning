char *Question64 = "Q64:���д����fun���书���ǣ���s��ָ�ַ�����asciiֵΪ�������ַ�ɾ��������ʣ���ַ��γ�һ���´�����t��ָ�������С�";

#include "head.h"

void delStr(char *str, char *t)
{
	char *p;
	int i = 0;
	while (str[i] != 0){
		if (str[i] % 2){
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
	while (*str != 0){
		*t = *str;
		++t;
		++str;
	}
	*t = 0;
}

void Q64()
{
	puts(Question64);
	char str[STR_LEN], t[STR_LEN];
	printf("Please input a string : \n");
	gets(str);
	delStr(str, t);
	puts(t);
}