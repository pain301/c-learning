char *Question46 = "Q46:ѧ���ü�¼��ѧ�źͳɼ���Ƹ���n����ѧ�������������������з���ṹ������s�У����д����fun�����Ĺ���ʱ���������ĸߵ�����ѧ���ļ�¼���߷���ǰ��";

#include "head.h"

void scoreSort(StuInfo *s, int n)
{
	StuInfo temp;
	int i, j;
	for (i = 0; i < n - 1; ++i){
		for (j = 0; j < n - i - 1; ++j){
			if (s[j].score < s[j + 1].score){
				temp = s[j];
				s[j] = s[j + 1];
				s[j + 1] = temp;
			}
		}
	}
}

void Q46()
{
	puts(Question46);
	StuInfo s[STU_NUM];
	int i = getStuInfo(s);
	scoreSort(s, SIZE);
	printf("After sort\n");
	for (i = 0; i < SIZE; ++i){
		printf("%s:%.2f\n", s[i].sno, s[i].score);
	}
	return 0;
}