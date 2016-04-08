char *Question34 = "Q34:学生的记录由学号和成绩组成，n名学生的数据已在主函数中放入结构体数组s中，请编写函数fun，它的功能使：把分数最高的学生数据放在h所指的数组中，注意：分数最高的学生可能不止一个，函数返回分数最高的学生的人数。";

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