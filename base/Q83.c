char *Question = "Q83：假定输入的字符串中只包含字母和*号。请编写函数fun，它的功能使：将字符串尾部的*号全部删除，前面和中间的*号不删除。";

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