char *Question66 = "Q66:�ٶ�������ַ�����ֻ������ĸ��*�š����д����fun�����Ĺ����ǣ�ɾ���ַ���������*�š��ڱ�д����ʱ������ʹ��c�����ṩ���ַ���������";

#include "head.h"

void getStr(char *str)
{
	printf("Please input a string with '*':\n");
	gets(str);
}

void Q66()
{
	puts(Question66);
	char str[STR_LEN];
	getStr(str);
	int count = 0;
	char *p = str,*q;
	while (*p != 0){
		if (*p == '*'){
			++count;
			q = p;
			while (*(q + 1) != 0){
				*q = *(q+1);
				++q;
			}
			*q = 0;
		}
		else{
			++p;
		}
	}
	printf("Delete %d '*',and the string is :\n",count);
	puts(str);
}