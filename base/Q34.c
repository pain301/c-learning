char *Question34 = "Q34:ѧ���ļ�¼��ѧ�źͳɼ���ɣ�n��ѧ�������������������з���ṹ������s�У����д����fun�����Ĺ���ʹ���ѷ�����ߵ�ѧ�����ݷ���h��ָ�������У�ע�⣺������ߵ�ѧ�����ܲ�ֹһ�����������ط�����ߵ�ѧ����������";

#include "head.h"
#define N 10


int HighScoreStudent(StuInfo stu[], int n, StuInfo h[])
{
	int stuNum = 0, i, k = 0;
	float maxScore = stu[0].score;
	for (i = 1; i < n; ++i){
		if (stu[i].score>maxScore){
			maxScore = stu[i].score;
		}
	}
	for (i = 0; i < n; ++i){
		if (stu[i].score == maxScore){
			h[k++] = stu[i];
		}
	}
	return k;
}

void Q34()
{
	puts(Question34);
	StuInfo stu[N];
	printf("Please input %d student's infomation(Name Score).\n", N);
	int i;
	for (i = 0; i < N; ++i)
		scanf("%s %f", stu[i].sno, &stu[i].score);
	StuInfo h[N];
	int stuNum = HighScoreStudent(stu, N, h);
	printf("There are %d students being the best,they are:\n", stuNum);
	for (i = 0; i < stuNum; ++i)
		printf("%8s:%5.2f\n", h[i].sno, h[i].score);
	return 0;
}