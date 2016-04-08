char *Question89 = "Q89:学生的记录是由学号和成绩组成，n名学生的数据已在主函数中放入结构体数组s中，请编写函数fun，它的功能是：把高于等于平均分的学生数据放在b所指的数组中，高于等于平均分的学生人数通过形参n传回，平均分通过函数值返回。";
/*
测试数据：
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