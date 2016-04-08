char *Question29 = "Q29:请编写一个函数fun，它的功能是：将ss所指字符串中所有下标为奇数位置上的字母转换为大写(若该位置上不是字母，则不转换)。";

#include "head.h"

void lowToUp(char *ss)
{
	int i = 0;
	while (ss[i] != '\0')
	{
		if (i % 2 == 1){
			if (ss[i] <= 'z'&&ss[i] >= 'a')
				ss[i] -= 32;
		}
		++i;
	}
}

void Q29()
{
	puts(Question29);
	puts(input_a_string);
	char str[STR_LEN];
	gets(str);
	lowToUp(str);
	printf("After transcation:\n");
	puts(str);
}