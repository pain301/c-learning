char *Question38 = "Q38:请编写函数fun，它的功能是：求出ss所指字符串中指定字符的个数，并返回此值。";

#include "head.h" 
int appearTime(char *str, char c)
{
	int count = 0;
	while (*str != '\0'){
		if (*str == c){
			++count;
		}
		++str;
	}
	return count;
}

void Q38()
{
	puts(Question38);
	puts(input_a_string);
	char str[STR_LEN], c;
	gets(str);
	printf("Please enter the charactor you want to statistic: \n");
	scanf("%c", &c);
	printf("The charactor %c has appeared %d times.\n", c, appearTime(str, c));
	return 0;
}