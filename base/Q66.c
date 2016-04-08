char *Question66 = "Q66:假定输入的字符串中只包含字母和*号。请编写函数fun，它的功能是：删除字符串中所有*号。在编写函数时，不得使用c语言提供的字符串函数。";

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