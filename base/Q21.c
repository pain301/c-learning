char *Question21 = "Q21:请编写函数fun,对长度位7个字符的字符串，除首尾字符外，将其余5个字符按ascii码降序排列。";

/*测试数据：abcdefg,所用排序方法：直接插入排序*/

#include<stdio.h>
#include<string.h>

void strSort(char *str)
{
	int i, j;
	char ct;
	for (i = 2; i <= 5; ++i)
	{
		ct = str[i];
		j = i - 1;
		while (j > 0 && ct > str[j])
		{
			str[j + 1] = str[j];
			--j;
		}
		str[j + 1] = ct;
	}
}

void Q21()
{
	char str[100];
	do
	{
		printf("Please enter 7 characters.\n");
		gets(str);
	} while (strlen(str)>7 || strlen(str)<7);
	strSort(str);
	printf("After sort:\n");
	puts(str);
}