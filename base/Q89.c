char *Question89 = "Q89:ѧ���ļ�¼����ѧ�źͳɼ���ɣ�n��ѧ�������������������з���ṹ������s�У����д����fun�����Ĺ����ǣ��Ѹ��ڵ���ƽ���ֵ�ѧ�����ݷ���b��ָ�������У����ڵ���ƽ���ֵ�ѧ������ͨ���β�n���أ�ƽ����ͨ������ֵ���ء�";
/*
�������ݣ�
zhang 100
meimei 99
wangxin 99
tianping 98
zhaoyun 97
*/

#include "head.h"

void Q89()
{
	StuInfo s[STU_NUM], b[STU_NUM];
	int k = getStuInfo(s);
	int higherThanAvg = 0;
	float avg = 0.0, sum = 0.0;
	int i;
	for (i = 0; i < k; ++i){
		sum += s[i].score;
	}
	avg = sum / k;
	for (i = 0; i < k; ++i){
		if (s[i].score >= avg){
			b[higherThanAvg++] = s[i];
		}
	}
	printf("The student who's score higher than average are:\n");
	for (i = 0; i < higherThanAvg; ++i){
		printf("%s:%f\n",b[i].sno,b[i].score);
	}
}