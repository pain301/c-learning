char *Question4 = "Q4:���дһ������void fun(char *tt,int pp[]),ͳ����tt�ַ���\"a\"��\"z\"26����ĸ���Գ��ֵĴ����������η���pp��ָ�������С�";

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