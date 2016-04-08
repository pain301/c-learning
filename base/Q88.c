char *Question88 = "Q88:假定输入的字符串中只包含字母和*号。请编写函数fun，它的功能是：除了字符串前导的*号之外，将串中其他*号全部删除。在编写函数亚时，不得使用c语言提供的字符串函数。";

#include "head.h"

char* firstAlphbetQ88(char *str)
{
	char *h = str;	
	if (*h == '*'){
		++h;
		while (*h=='*'){
			++h;
		}
		if (*h == 0){
			return NULL;
		}
	}
	return h;
}

void Q88()
{
	puts(Question88);
	char str[STR_LEN];
	printf("Please enter a string :\n");
	gets(str);
	char *p, *h = firstAlphbetQ88(str);
	if (!h){
		printf("Your string is shouldn't all of '*'\n");
		exit(0);
	}
	while (*h != 0){
		if (*h == '*'){
			p = h;
			while (*(p + 1) != 0){
				*p = *(p+1);
				++p;
			}
			*p = 0;
		}
		else{
			++h;
		}
	}
	printf("After delete the '*' : \n");
	puts(str);
}