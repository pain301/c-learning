char *Question36 = "Q36:�ٶ�������ַ�����ֻ������ĸ��*�š����д����fun�����Ĺ����ǣ����ַ����е�ǰ��*��ȫ���Ƶ��ַ�����β����";

#include "head.h"

void moveChar(char *str)
{
	char *p = str;
	int i = 0, count = 0;
	while (*p == '*'){
		++p;
		++count;
	}
	while (*p != '\0'){
		str[i] = *p;
		++p;
		++i;
	}
	p = p - count;
	for (i = 0; i < count; ++i){
		*p = '*';
		++p;
	}
	*p = '\0';
}

void Q36()
{
	puts(Question36);
	puts(input_a_string);
	char str[STR_LEN];
	gets(str);
	moveChar(str);
	printf("After moving:\n");
	puts(str);
}