char *Question47 = "Q47:请编写一个函数void fun(char *ss)，其功能时：将字符串ss中所有下标为奇数位置上的字母转换为大写(若位置上不是字母，则不转换)。";

#include "head.h"

void strTranscate(char *ss)
{
	int i = 0;
	while (ss[i] != '\0'){
		if (i % 2 == 1 && ss[i] <= 'z'&&ss[i] >= 'a'){
			ss[i] -= 32;
		}
		++i;
	}
}
void Q47()
{
	puts(Question47);
	puts(input_a_string);
	char str[STR_LEN];
	gets(str);
	strTranscate(str);
	puts(str);
	return 0;
}