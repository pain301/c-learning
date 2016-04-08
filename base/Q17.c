char *Question17 = "Q17:请编写一个函数fun(char *s)，该函数的功能使把字符串中的内容拟置。";

#include<stdio.h>

void funQ17(char *s)
{
	char ct;
	char *l, *h;
	h = l = s;
	while (*h != '\0')
		++h;
	--h;
	while (l < h)
	{
		ct = *l;
		*l = *h;
		*h = ct;
		++l;
		--h;
	}
}

void Q17()
{
	puts(Question17);
	char str[100];
	printf("Please enter a string:\n");
	gets(str);
	funQ17(str);
	printf("After reverse:\n");
	puts(str);
}