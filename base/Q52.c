char *Question52 = "Q52:编写一个函数fun，它的功能是：实现两个字符串的连接(不使用库函数strcat)，即把p2所指的字符串连接到p1所指的字符串后。";

/*
测试数据：
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