char *Question56 = "Q56:�ٶ�������ַ�����ֻ������ĸ��*�š����д����fun�����Ĺ����ǣ�����β����*��֮�⣬����ĸ��������*��ȫ��ɾ�����β�p��ָ���ַ���������һ����ĸ����ʹ��c���ַ���������";

#include "head.h"

void delChar(char *str, char *p)
{
	char *c = str, *q;
	while (c != p){
		if (*c == '*'){
			q = c;
			while (*(q + 1) != 0){
				*q = *(q + 1);
				++q;
			}
			*q = 0;
			--p;
		}
		else{
			++c;
		}
	}
}

void Q56()
{
	puts(Question56);
	char str[SIZE], *p, *q;
	printf("Please input a string:\n");
	gets(str);
	p = str;
	int flag = 0;
	while (*p != 0){
		if (flag){
			if (*p != '*'){
				flag = 0;
			}
		}
		else{
			if (*p == '*'){
				q = p;
				flag = 1;
			}
		}
		++p;
	}
	if (flag){
		delChar(str, q);
	}
	else{
		printf("String is not end of with *.\n");
		delChar(str, --p);
	}
	puts(str);
	return 0;
}