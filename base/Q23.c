char *Question23 = "Q23:���д����fun���ú����Ĺ����ǣ��ж��ַ����Ƿ�Ϊ����?������������1�������������yes�����򷵻�0�������������no��������ָ˳���͵�������һ�����ַ�����";


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