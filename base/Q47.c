char *Question47 = "Q47:���дһ������void fun(char *ss)���书��ʱ�����ַ���ss�������±�Ϊ����λ���ϵ���ĸת��Ϊ��д(��λ���ϲ�����ĸ����ת��)��";

#include "head.h"

void strTranscate(char *ss)
{
	int i = 0;
	while (ss[i] != '\0'){
		if (i % 2 == 1 && ss[i] <= 'z'&&ss[i] >= 'a'){
			ss[i] -= 32;
		}
		++i;
	}
}
void Q47()
{
	puts(Question47);
	puts(input_a_string);
	char str[STR_LEN];
	gets(str);
	strTranscate(str);
	puts(str);
	return 0;
}