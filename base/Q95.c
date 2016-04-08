char *Question95 = "Q95: 假定输入的字符串中只包含字母和*号。请编写函数fun，它的功能是：使字符串的前导*号不得多于n个；若多于n个，则删除多于的*号；若少于或等于n个，则什么也不做。字符串中间和尾部的*号不删除。";
/*测试数据：******char***dao***  */

#include "head.h"

char* findPosition(char *str,int n)
{
	char *p = str;
	int count = 0;
	if (*p == '*'){
		while (*p!=0&&*p == '*'&&count!=n){
			++p;
			++count;
		}
		if (count == n){
			return p;
		}
	}
	return NULL;
}

void Q95()
{
	puts(Question95);
	char str[STR_LEN];
	int n;
	printf("Please input a string:\n");
	gets(str);
	printf("Please input the number of '*' in the begining of string that you want to delete:\n");
	scanf("%d", &n);
	char *p, *q;
	p = findPosition(str,n);
	if (p){
		while (*p != 0){
			*(p - n) = *p;
			++p;
		}
		*(p - n) = 0;
	}
	printf("After delete '*':\n");
	puts(str);
}