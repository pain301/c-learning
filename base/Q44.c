char *Question44 = "Q44:��дһ���������ú�������ͳ��һ������Ϊ2���ַ�������һ���ַ����г��ֵĴ�����";

#include "head.h"

int substrTimes(char *str, char *substr)
{
	char *sl = str, *ss = substr, *st;
	int fail = 0, count = 0;
	while (*sl != '\0')
	{
		fail = 0;
		while (*sl != '\0'&&*sl != *ss){
			++sl;
		}
		st = sl;
		if (*sl == *ss){
			while (*ss != '\0'){
				if (*sl != *ss){
					fail = 1;
					break;
				}
				++ss;
				++sl;
			}
			if (!fail){
				++count;
			}
			sl = st + 1;
			ss = substr;
		}
	}
	return count;
}
void Q44()
{
	puts(Question44);
	puts(input_a_string);
	char str[STR_LEN], substr[STR_LEN];
	gets(str);
	printf("Please enter a substring with 2 charactors:\n");
	gets(substr);
	int matchTime = substrTimes(str, substr);
	printf("%d\n", matchTime);
	return 0;
}
