char *Question50 = "Q50:��֪ѧ���ļ�¼����ѧ�ź�ѧϰ�ɼ����ɣ�n��ѧ���������Ѵ���a�����������С����д����fun���ú����Ĺ����ǣ��ҳ��ɼ���ߵ�ѧ����¼��ͨ���βη���������(�涨ֻ��һ����߷�)��";

#include "head.h"

void highScore(StuInfo *s, StuInfo *h)
{
	int i, k = 0;
	for (i = 1; i < SIZE; ++i){
		if (s[i].score>s[k].score){
			k = i;
		}
	}
	*h = s[k];
}

void Q50()
{
	puts(Question50);
	StuInfo s[STU_NUM], highScoreStu;
	int i;
	printf("Please input the student's infomation(stuNo score)\n");
	for (i = 0; i < SIZE; ++i){
		scanf("%s %f", s[i].sno, &s[i].score);
	}
	highScore(s, &highScoreStu);
	printf("%s,%.2f\n", highScoreStu.sno, highScoreStu.score);
	return 0;
}