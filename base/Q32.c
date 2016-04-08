char *Question32 = "Q32:请编写函数fun，其功能是：将s所指字符串中除了下标为奇数、同时ascii值也为奇数的字符之外，其余的所有字符都删除，串中剩余字符所形成的一个新串放在t所指的一个数组中";

#include "head.h"

void delOddChar(char *s, char *t)
{
	int i = 0, j = 0;
	char *cs, *ct;
	while (s[i] != '\0'){
		if (j % 2 == 1 && s[i] % 2 == 1){
			cs = &s[i];
			while (*(cs + 1) != '\0'){
				*cs = *(cs + 1);
				++cs;
			}
			*cs = '\0';
		}
		else
			++i;
		++j;
	}
	cs = s;
	ct = t;
	while (*cs != '\0')
	{
		*ct = *cs;
		++cs;
		++ct;
	}
	*ct = '\0';
}

void Q32()
{
	puts(Question32);
	char s[STR_LEN], t[STR_LEN];
	printf("Please enter a string \n");
	gets(s);
	delOddChar(s, t);
	printf("The string that math the condition is:\n");
	puts(t);
}