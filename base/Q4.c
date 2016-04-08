char *Question4 = "Q4:请编写一个函数void fun(char *tt,int pp[]),统计在tt字符中\"a\"到\"z\"26各字母各自出现的次数，并依次放在pp所指的数组中。";

#include<stdio.h>
void frequency(char *tt, int pp[])
{
	char *c = tt;
	while (*c != '\0')
	{
		if (*c <= 'z'&&*c >= 'a')
			++pp[*c - 97];
		++c;
	}
}

void Q4()
{
	puts(Question4);
	int i, pp[26] = { 0 };
	char tt[1000];
	printf("Please input a string with lowercase:\n");
	gets(tt);
	frequency(tt, pp);
	for (i = 0; i < 26; ++i)
		printf("%c:%d\n", 97 + i, pp[i]);
	return 0;
}