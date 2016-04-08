char *Question23 = "Q23:请编写函数fun，该函数的功能是：判断字符串是否为回文?若是则函数返回1，主函数中输出yes，否则返回0，主函数中输出no。回文是指顺读和倒读都是一样的字符串。";


#include<stdio.h>
#include<string.h>

int is_huiwen(char *str)
{
	char *l, *h;
	l = h = str;
	while (*h != '\0')
		++h;
	--h;
	while (l < h)
	{
		if (*l != *h)
			return 0;
		++l;
		--h;
	}
	return 1;
}

void Q23()
{
	puts(Question23);
	char str[1000];
	printf("Please enter a string to judge whether it's a huiwen:\n");
	gets(str);
	if (is_huiwen(str))
		printf("Yes\n");
	else
		printf("No\n");
}