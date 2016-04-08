char *Question41 = "Q41:请编写函数fun，该函数的功能是：将m行n列的二维数组中的字符数据，按列的顺序依次放到一个字符串中。";

#include "head.h"
#define m 5
#define n 5
#define size 50
void funQ41(char(*p)[n], char *str)
{
	int i, j;
	for (j = 0; j < n; ++j){
		for (i = 0; i < m; ++i){
			*(str + j*n + i) = *(*(p + i) + j);
		}
	}
	*(str + m*n) = '\0';
}

void Q41()
{
	char str1[m][n] = {
		"aaaaa",
		"bbbbb",
		"ccccc",
		"ddddd",
		"eeeee"
	};
	char longStr[size];
	funQ41(str1, longStr);
	puts(longStr);
}