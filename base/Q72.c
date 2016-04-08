char *Question72 = "Q72:请编写函数fun，其功能是：将s所指字符串中下标为偶数的字符删除，串中剩余字符形成新串放在t所指数组中。";

#include "head.h"

void Q72()
{
	puts(Question72);
	char str[STR_LEN],t[STR_LEN];
	printf("Please enter a string:\n");
	gets(str);
	char *p,*q;
	int i = 0, j = 0;
	while (str[i] != 0){
		if (j % 2==0){
			p = &str[i];
			while (*(p + 1) != 0){
				*p = *(p + 1);
				++p;
			}
			*p = 0;
		}
		else{
			++i;
		}
		++j;
	}
	p = str;
	q = t;
	while (*p != 0){
		*q = *p;
		++p;
		++q;
	}
	*q = 0;
	printf("After processing:\n");
	puts(t);
}