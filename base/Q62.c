char *Question62 = "Q62:请编写函数fun，该函数的功能是：统一一含字符串中单词的个数，作为函数值返回。一行字符串在主函数中输入，规定所有单词由小写字母组成，单词之间由若干个空格格开，一行的开始没有空格。";

/*测试用例：Shen zhen is beautiful city!*/

#include "head.h"

int countWord(char *str)
{
	int wordNum = 0, flag = 1;
	char *c = str;
	while (*c != 0){
		while (*c != 0 && *c == 32){
			if (*(c + 1) == 0){
				flag = 0;
			}
			++c;
		}
		while (*c != 0 && *c != 32){
			++c;
		}
		if (flag){
			++wordNum;
		}
	}
	return wordNum;
}

void Q62()
{
	puts(Question62);
	char str[STR_LEN];
	printf("Please enter a sentence:\n");
	gets(str);
	int wordNum = countWord(str);
	printf("The string has %d words.\n", wordNum);
	return 0;
}