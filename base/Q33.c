char *Question33 = "Q33:�ٶ�������ַ�����ֻ������ĸ��*�š����д����fun�����Ĺ����ǣ�ʹ�ַ�����β����*�Ų��ö���n����������n������ɾ�����ڵ�*�ţ������ڻ����n������ʲôҲ�������ַ����м��ǰ���*�Ų�ɾ����";

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