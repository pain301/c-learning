char *Question17 = "Q17:���дһ������fun(char *s)���ú����Ĺ���ʹ���ַ����е��������á�";

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