char *Question35 = "Q35:���дһ������������ɾ���ַ����е����пո�";

#include "head.h"

void delSpace(char *str)
{
	char *cs;
	int i = 0;
	while (str[i] != '\0'){
		if (str[i] == 32){
			cs = &str[i];
			while (*(cs + 1) != '\0'){
				*cs = *(cs + 1);
				++cs;
			}
			*cs = '\0';
		}
		else
			++i;
	}
}

void Q35()
{
	puts(Question35);
	char str[STR_LEN];
	printf("Please enter a string:\n");
	gets(str);
	delSpace(str);
	printf("After delete the space:\n");
	puts(str);
}