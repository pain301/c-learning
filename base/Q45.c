char *Question45 = "Q45:假定输入的字符串中只包含字母和*号。请编写函数fun，它的功能是：只删除字符串前导和尾部的*号，串中字母之间的*号都不删除。形参n 给出了字符串的长度，形参h给出了字符串中前导*号的个数，形参e给出了字符串中最后的*个数。在编写时不得使用c语言给提供得字符串函数。";

/*测试数据：*****qwertyuiop***asdfghjkl***** */

#include "head.h"

void delCharQ45(char *str, int n, int h, int e)
{
	char *p = str;
	int i = 0, newLength = n - h - e;
	for (i = 0; i<newLength; ++i){
		str[i] = str[i + h];
	}
	str[newLength] = '\0';
}

void statisticStr(char *str, int *n, int *h, int *e)
{
	*n = strlen(str);
	char *p = str;
	*h = 0;
	while (*p == '*'){
		++(*h);
		++p;
	}
	while (*p != 0){
		++p;
	}
	--p;
	*e = 0;
	while (*p == '*'){
		++(*e);
		--p;
	}
}
void Q45()
{
	puts(Question45);
	puts(input_a_string);
	char str[STR_LEN];
	gets(str);
	int n, h, e;
	statisticStr(str, &n, &h, &e);
	delCharQ45(str, n, h, e);
	printf("n:%d h:%d e:%d", n, h, e);
	printf("After delete:\n");
	puts(str);
	return 0;
}