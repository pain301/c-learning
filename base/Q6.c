char *Question6 = "Q6:���дһ������void fun(char a[],char[],int n),�书���ǣ�ɾ���Ը��ַ�����ָ���±���ַ������У�aָ��ԭ�ַ�����ɾ������ַ��������b��ָ�������У�n�д��ָ�����±ꡣ";

#include<stdio.h>
#include<string.h>

void str_copy(char a[], char b[], int n)
{
	char *ap = a, *bp = b, i = 0;
	while (*ap != '\0')
	{
		if ((i++) != n)
			*(bp++) = *ap;/*a��ָ��ָ��Ҫɾ����λ��ʱ��a��ָ������Ҫ�����ƶ�һλ��b��ָ�벻��Ҫ�ƶ�*/
		++ap;
	}
	*bp = '\0';
}

void Q6()
{
	puts(Question6);
	char a[1000], b[1000];
	int i;
	printf("Please input a string:\n");
	gets(a);
	printf("Please input the position of charator you want to delete:");
	scanf("%d", &i);
	while (i <= 0 || i > strlen(a))/*�������λ�ò���ȷʱ*/
	{
		printf("The position is wrong,please input again:");
		scanf("%d", &i);
	}
	str_copy(a, b, i - 1);/*����������ص㣬λ�����һ���ܺ��±����Ǻ�*/
	printf("The result is:\n");
	puts(b);
	return 0;
}