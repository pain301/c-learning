char *Question48 = "Q48:���д����fun���书���ǣ���s��ָ�ַ������±�λż��ͬʱasciiֵΪ�������ַ�ɾ����s��ʣ����ַ��γɵ��´�����t��ָ�������С�";

/*�������ݣ�abcdefghighlmn*/
#include "head.h"

void strProcessingQ48(char *s, char *t)
{
	char *ss = s;
	int i = 0, k = 0;
	while (s[i] != '\0'){
		if (!(i % 2 == 0 && s[i] % 2 == 1)){
			t[k++] = s[i];
		}
		++i;
	}
	s[i] = '\0';
}
void Q48()
{
	puts(Question48);
	puts(input_a_string);
	char str1[STR_LEN], str2[STR_LEN];
	gets(str1);
	strProcessingQ48(str1, str2);
	puts(str2);
}