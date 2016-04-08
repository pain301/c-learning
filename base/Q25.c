char *Question25 = "Q25:请编写一个函数fun，它的功能是：比较两个字符串的长度，(不得调用c语言提供的求字符串长度的函数)，函数返回较长的字符串。若两个字符串长度相同，则返回第一个字符串。";

#include<stdio.h>
#define max 100

char* cmpStrLen(char *s1, char *s2)
{
	char *ss1 = s1, *ss2 = s2;
	while (*ss1 != '\0'&&*ss2 != '\0')
	{
		++ss1;
		++ss2;
	}
	if (*ss1 != '\0')
		return s1;
	else if (*ss2 != '\0')
		return s2;
	else
		return s1;
}

void Q25()
{
	puts(Q25);
	char s1[max], s2[max];
	printf("Please enter str1:\n");
	gets(s1);
	printf("Please enter str2:\n");
	gets(s2);
	printf("The longer string is:\n");
	puts(cmpStrLen(s1, s2));
}