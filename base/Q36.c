char *Question36 = "Q36:假定输入的字符串中只包含字母和*号。请编写函数fun，它的功能是：将字符串中的前导*号全部移到字符串的尾部。";

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