char *Question19 = "Q19:��д����fun,�ú����Ĺ����ǣ����ַ���ɾ��ָ�����ַ���ͬһ��ĸ�Ĵ�Сд����ͬ�ַ�����";

#include<stdio.h>

int deleteChar(char *str, char ch, int *n)
{
	char *p, *q;
	int flag = 0;
	p = q = str;
	while (*p != '\0')
	{
		while (*p != '\0'&&*p != ch)
			++p;
		if (*p == ch)
		{
			flag = 1;
			++(*n);
			q = p;
			while (*(q + 1) != '\0')
			{
				*q = *(q + 1);
				++q;
			}
			*q = '\0';
		}
	}
	if (flag)
		return 1;
	else
		return 0;
}

void Q19()
{
	puts(Question19);
	int n = 0;
	char str[100], c;
	printf("Please input a string:\n");
	gets(str);
	fflush(stdin);
	printf("Please input a char which you want to delete:");
	c = getchar();
	if (deleteChar(str, c, &n))
	{
		printf("Delete %d %c\n", n, c);
		puts(str);
	}
	else
		printf("Haven't find %c\n", c);
}