char *Question58 = "Q58:���д����fun���ú����Ĺ����ǣ��������ַ��������е�m���ַ���(ÿ���ĳ��Ȳ�����n)����˳��ϲ����һ���µ��ַ�����";

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