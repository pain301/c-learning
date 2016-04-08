char *Question50 = "Q50:已知学生的记录是由学号和学习成绩构成，n名学生的数据已存入a机构体数组中。请编写函数fun，该函数的功能是：找出成绩最高的学生记录，通过形参返回主函数(规定只有一个最高分)。";

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