char *Question49 = "Q49:请编写函数fun，其功能是：将s所指字符串中下标位偶数同时ascii值为奇数的字符删除，s中剩余的字符形成的新串放在t所指的数组中";

#include "head.h"

void strProcessingQ49(char *s, char *t)
{
	int i = 0, j = 0;
	char *p;
	while (s[i] != 0){
		if (j % 2 == 0 && s[i] % 2 == 1){
			p = &s[i];
			while (*p != 0){
				*p = *(p + 1);
				++p;
			}
			*(--p) = '\0';
		}
		else{
			++i;
		}
		++j;
	}
	while (*s != 0){
		*t = *s;
		++s;
		++t;
	}
	*t = 0;
}

void Q49()
{
	puts(Question49);
	puts(input_a_string);
	char str1[SIZE], str2[SIZE];
	gets(str1);
	strProcessingQ49(str1, str2);
	puts(str2);
}