char *Question40 = "Q40:请编写函数fun，该函数的功能是移动字符串中内容，移动的规则如下：把第1到第m个字符，平移到字符串的最后，把第m＋1到最后的字符移到字符串的前部。";

#include "head.h"
void reverse(char *str, int low, int high)
{
	while (low < high)
	{
		str[low] = str[low] ^ str[high];
		str[high] = str[low] ^ str[high];
		str[low] = str[low] ^ str[high];
		++low;
		--high;
	}
}

void move(char *str, int m)
{
	int length = strlen(str);
	reverse(str, 0, length - 1);
	reverse(str, 0, length - m - 1);
	reverse(str, length - m, length - 1);
}

void Q40()
{
	puts(Question40);
	puts(input_a_string);
	char str[STR_LEN];
	gets(str);
	int k;
	int length = strlen(str);
	printf("Please enter a number(0<n<%d)\n", length);
	scanf("%d", &k);
	while (k <= 0 || k >= length){
		printf("The number must bigger than 0 and smaller than %d", length);
		scanf("%d", &k);
	}
	move(str, k);
	printf("After move:\n");
	puts(str);
}