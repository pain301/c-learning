char *Question62 = "Q62:���д����fun���ú����Ĺ����ǣ�ͳһһ���ַ����е��ʵĸ�������Ϊ����ֵ���ء�һ���ַ����������������룬�涨���е�����Сд��ĸ��ɣ�����֮�������ɸ��ո�񿪣�һ�еĿ�ʼû�пո�";

/*����������Shen zhen is beautiful city!*/

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