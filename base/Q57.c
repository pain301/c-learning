char *Question57 = "Q57:学生的记录是由学号和成绩组成，n名学生的数据已在主函数中放入结构体数组s中，请编写函数fun，它的功能是：把指定分数范围内的学生数据放在b所指的数组中，分数范围内的学生人数由函数值返回。";

/*
测试数据：
zhang 100
zhaoyun 68
songhong 85
lixiang 77
mahan 82
*/

#include "head.h"

void Q57()
{
	puts(Question57);
	StuInfo s[STU_NUM], b[STU_NUM];
	int k=getStuInfo(s);
	float score1, score2;
	printf("Please input the higher score and the lower score:");
	scanf("%f %f",&score1,&score2);
	int i, j = 0;
	for (i = 0; i < k; ++i){
		if (s[i].score >= score2&&s[i].score <= score1){
			b[j++] = s[i];
		}
	}
	printf("The student who's score is between %f and %f are:\n",score2,score1);
	for (i = 0; i < j; ++i){
		printf("%s:%.2f\n",b[i].sno,b[i].score);
	}
}