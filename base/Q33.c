char *Question33 = "Q33:假定输入的字符串中只包含字母和*号。请编写函数fun，它的功能是：使字符串中尾部的*号不得多于n个；若多于n个，则删除多于的*号；若少于或等于n个，则什么也不做，字符串中间和前面的*号不删除。";

#include "head.h"

void funQ33(char *str, int n)
{
	char *t = str;
	int k = 0;
	while (*t != '\0'){
		++t;
	}
	--t;
	while (*t == '*'){
		--t;
		++k;
	}
	++t;
	if (k > n)
	{
		int i = 0;
		while (i != n)
		{
			++t;
			++i;
		}
		*t = '\0';
	}
}

void Q33()
{
	puts(Question33);
	char str[STR_LEN];
	int n;
	printf("Please enter a string:\n");
	gets(str);
	printf("How many * do you want to save?");
	scanf("%d", &n);
	funQ33(str, n);
	printf("Now ,the string is:\n");
	puts(str);
	return 0;
}