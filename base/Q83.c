char *Question = "Q83���ٶ�������ַ�����ֻ������ĸ��*�š����д����fun�����Ĺ���ʹ�����ַ���β����*��ȫ��ɾ����ǰ����м��*�Ų�ɾ����";

#include "head.h"

char* lastAlpharimQ83(char *str)
{
	char *p;
	int flag = 0;
	while (*str != 0){
		if (*str == '*'){
			if (!flag){
				flag = 1;
				p = str-1;
			}
		}
		else{
			if (flag){
				flag = 0;
			}
		}
		++str;
	}
	if (flag){
		return p;
	}
	else{
		return str-1;
	}
}

void Q83()
{
	char str[STR_LEN];
	printf("Please enter a string:\n");
	gets(str);
	char *e = lastAlpharimQ83(str);
	*(e + 1) = 0;
	puts(str);
}