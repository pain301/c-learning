char *Question25 = "Q25:���дһ������fun�����Ĺ����ǣ��Ƚ������ַ����ĳ��ȣ�(���õ���c�����ṩ�����ַ������ȵĺ���)���������ؽϳ����ַ������������ַ���������ͬ���򷵻ص�һ���ַ�����";

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