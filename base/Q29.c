char *Question29 = "Q29:���дһ������fun�����Ĺ����ǣ���ss��ָ�ַ����������±�Ϊ����λ���ϵ���ĸת��Ϊ��д(����λ���ϲ�����ĸ����ת��)��";

#include "head.h"

void lowToUp(char *ss)
{
	int i = 0;
	while (ss[i] != '\0')
	{
		if (i % 2 == 1){
			if (ss[i] <= 'z'&&ss[i] >= 'a')
				ss[i] -= 32;
		}
		++i;
	}
}

void Q29()
{
	puts(Question29);
	puts(input_a_string);
	char str[STR_LEN];
	gets(str);
	lowToUp(str);
	printf("After transcation:\n");
	puts(str);
}