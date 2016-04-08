char *Question40 = "Q40:���д����fun���ú����Ĺ������ƶ��ַ��������ݣ��ƶ��Ĺ������£��ѵ�1����m���ַ���ƽ�Ƶ��ַ�������󣬰ѵ�m��1�������ַ��Ƶ��ַ�����ǰ����";

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