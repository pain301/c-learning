char *Question73 = "Q73:假定输入的字符串中只包含字母和*号，请编写函数fun，它的功能是：除了字符串前导和尾部的*号之外，将串中其他*号全部删除。形参h已指向字符串第一个字符，形参p已指向字符串中最后一个字母。在编写程序时，不得使用c语言提供的字符串函数。";

/*测试数据：***wangdao***shenzhen*** */

#include "head.h"

char* firstAlphabet(char *str)
{
	if (*str == '*'){
		while (*str != 0 && *str=='*'){
			++str;
		}
		if (*str == 0){
			return NULL;
		}
	}
	return str;
}

char* lastAlpahbet(char *str)
{
	int flag = 0;
	char *p;
	while (*str != 0){
		if(*str == '*'){
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
		return str - 1;
	}
}

void Q73()
{
	puts(Question73);
	char str[STR_LEN];
	printf("Please input a string(begin with '*'、end with '*'and there also some '*' in the middle):");
	gets(str);
	char *h, *e, *p;
	h = firstAlphabet(str);
	if (!h){
		printf("Your string is shouldn't all '*'.\n");
		exit(1);
	}
	e = lastAlpahbet(str);
	while (h != e){
		if (*h == '*'){
			p = h;
			while (*(p + 1) != 0){
				*p = *(p + 1);
				++p;
			}
			*p = 0;
			--e;
		}
		else{
			++h;
		}
	}
	printf("After delete the '*' in the middle of string:\n");
	puts(str);
}