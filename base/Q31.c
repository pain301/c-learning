char *Question31 = "Q31:请编写函数fun，其功能是：将s所指字符串中除了下标为偶数、同时ascii值也为偶数的字符外，其余的全都删除；串中剩余字符所形成的一个新串放在t所指的一个数组中。";

#include "head.h"

void delCharQ31(char *s, char *t)
{
	int i = 0, j = 0;
	char *cs, *ct;
	while (s[i] != '\0'){
		if (!(j % 2 == 0 && s[i] % 2 == 0)){/*不满足条件的元素出现*/
			cs = &s[i];
			while (*(cs + 1) != '\0'){/*将元素依次从后往前移动*/
				*cs = *(cs + 1);
				++cs;
			}
			*cs = '\0';
		}
		else
			++i;
		++j;/*由于元素的移动，初始时元素的下标已经发生变化，无法满足题目要求，j就是保持原来下标的变量*/
	}
	cs = s;/*重新初始化cs指针*/
	ct = t;
	while (*cs != '\0')/*将s中的元素复制到t中*/
	{
		*ct = *cs;
		++ct;
		++cs;
	}
	*ct = '\0';
}

void Q31()
{
	puts(Question31);
	char s[STR_LEN], t[STR_LEN];
	printf("Please enter a string \n");
	gets(s);
	delCharQ31(s, t);
	printf("The string that math the condition is:\n");
	puts(t);
}