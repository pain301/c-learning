char *Question52 = "Q52:��дһ������fun�����Ĺ����ǣ�ʵ�������ַ���������(��ʹ�ÿ⺯��strcat)������p2��ָ���ַ������ӵ�p1��ָ���ַ�����";

/*
�������ݣ�
Hello
,World
*/

#include<stdio.h>
#include<string.h>
#define SIZE 10000

void _strcat(char *str1, char *str2)
{
	int s1_len, s2_len;
	char *s1_end = str1;
	s1_len = strlen(str1);
	s2_len = strlen(str2);
	while (*s1_end != 0){
		++s1_end;
	}
	if (SIZE > s1_len + s2_len){
		while (*str2 != 0){
			*s1_end = *str2;
			++s1_end;
			++str2;
		}
		*s1_end = 0;
	}
	else{
		printf("The first string isn't long enough,so only copy part of string2.\n");
		int len = SIZE - s1_len - 1;
		while (len--){
			*s1_end = *str2;
			++s1_end;
			++str2;
		}
		*s1_end = 0;
	}
}

void Q52()
{
	puts(Question52);
	char str1[SIZE], str2[SIZE];
	printf("Please input string1:\n");
	gets(str1);
	printf("Please input string2:\n");
	gets(str2);
	_strcat(str1, str2);
	puts(str1);
	return 0;
}