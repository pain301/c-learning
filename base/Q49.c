char *Question49 = "Q49:���д����fun���书���ǣ���s��ָ�ַ������±�λż��ͬʱasciiֵΪ�������ַ�ɾ����s��ʣ����ַ��γɵ��´�����t��ָ��������";

#include "head.h"

void strProcessingQ49(char *s, char *t)
{
	int i = 0, j = 0;
	char *p;
	while (s[i] != 0){
		if (j % 2 == 0 && s[i] % 2 == 1){
			p = &s[i];
			while (*p != 0){
				*p = *(p + 1);
				++p;
			}
			*(--p) = '\0';
		}
		else{
			++i;
		}
		++j;
	}
	while (*s != 0){
		*t = *s;
		++s;
		++t;
	}
	*t = 0;
}

void Q49()
{
	puts(Question49);
	puts(input_a_string);
	char str1[SIZE], str2[SIZE];
	gets(str1);
	strProcessingQ49(str1, str2);
	puts(str2);
}