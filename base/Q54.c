char *Question54 = "Q54:学生的记录由学号和成绩组称个，n名学生的数据已在主函数中放入结构体数组s中，请编写函数fun，它的功能是：把低于平均分的学生数据放在b所指的数组中，低于平均分的学生人数通过形参n传回，平均分通过函数值返回。";

/*
测试数据：
zhang 100
mahan 99
fankuai 90
zhaoyang 91
qiangui 90
*/

#include "head.h"

void Q54()
{
	puts(Question54);
	StuInfo s[STU_NUM], b[STU_NUM];
	int k = getStuInfo(s);
	int i, j;
	float sum = 0.0, avg = 0.0;
	for (i = 0; i < k; ++i){
		sum += s[i].score;
	}
	avg = sum / k;
	for (i = 0, j = 0; i < k; ++i){
		if (s[i].score < avg){
			b[j++] = s[i];
		}
	}
	printf("The students who are lower than avarage are:\n");
	for (i = 0; i < j; ++i){
		printf("%s:%.2f\n",b[i].sno,b[i].score);
	}
}