char *Question24 = "Q24:���дһ������fun�����Ĺ����ǣ���һ���ַ���ת��Ϊһ������(���õ���c�����ṩ�Ľ��ַ���ת��Ϊ�����ĺ���)��";

#include<stdio.h>

int strToNum(char *str, long *sum)
{
	char *p = str;
	int flag = 1;
	if (*p == '-'){
		flag = 0;
		++p;
	}
	else if (*p == '+'){
		++*p;
	}
	*sum = 0;
	while (*p != '\0')
	{
		if (*p <= '0' || *p >= '9')
			return 0;
		*sum = (*sum) * 10 + (*p - '0');
		++p;
	}
	if (!flag){
		*sum *= -1;
	}
	return 1;
}

void Q24()
{
	puts(Question24);
	char str[20];
	long num;
	printf("Please input a number string:\n");
	gets(str);
	if (strToNum(str, &num))
		printf("%ld\n", num);
	else
		printf("Contents charactors that is not numbers.\n");
}