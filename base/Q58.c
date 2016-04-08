char *Question58 = "Q58:请别写函数fun，该函数的功能是：将放在字符串数组中的m个字符串(每串的长度不超过n)，按顺序合并组成一个新的字符串。";

/*
wangdao jixunying is a good place for us to study!
shen zhen is a beautiful city, and I like her very much.
I must work very hard for beautiful future.
*/

#include "head.h"

void createNewStr(char(*p)[STR_LEN], char *a,int n)
{
	int i;
	for (i = 0; i < n; ++i){
		if (i == 0){
			strcpy(a, *p);
		}
		else{
			strcat(a, *(p + i));
		}
	}
}

void Q58()
{
	puts(Question58);
	char chapter[SIZE][STR_LEN], str[SIZE*STR_LEN];
	printf("Please input some strings(Ctrl+Z to end):\n");
	int i = 0;
	while (gets(chapter[i]) != NULL) ++i;
	createNewStr(chapter,str,i);
	printf("The new string is:\n");
	puts(str);
	return 0;
}