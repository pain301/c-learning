char *Question48 = "Q48:请编写函数fun，其功能是：将s所指字符串中下标位偶数同时ascii值为奇数的字符删除，s中剩余的字符形成的新串放在t所指的数组中。";

/*测试数据：abcdefghighlmn*/
#include "head.h"

void strProcessingQ48(char *s, char *t)
{
	char *ss = s;
	int i = 0, k = 0;
	while (s[i] != '\0'){
		if (!(i % 2 == 0 && s[i] % 2 == 1)){
			t[k++] = s[i];
		}
		++i;
	}
	s[i] = '\0';
}
void Q48()
{
	puts(Question48);
	puts(input_a_string);
	char str1[STR_LEN], str2[STR_LEN];
	gets(str1);
	strProcessingQ48(str1, str2);
	puts(str2);
}