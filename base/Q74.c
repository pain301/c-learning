char *Question74 = "Q74:学生的记录由学号和成绩组成n名学生的数据已在主函数中放入结构体数组s中，请编写函数fun，它的功能时：把分数最低的学生数据放在h所指的数组中，注意：分数最低的学生可能不止一个，函数返回分数最低的学生的人数。";

/*测试数据：
wang 88
zhao 73
zhang 100
lule 80
zhao 73
xusan 73
zhaoli 73
mahan 73
*/

#include "head.h"

void Q74()
{
	puts(Question74);
	StuInfo s[STU_NUM],h[STU_NUM];
	int k = getStuInfo(s);
	float lowScore;
	int i,j, record=0;
	for (i = 1; i < k; ++i){
		if (s[i].score < s[0].score){
			record = i;
		}
	}
	for (i = 0, j = 0; i < k; ++i){
		if (s[i].score == s[record].score){
			h[j++] = s[i];
		}
	}

	printf("The lowest score students are:\n");
	for (i = 0; i < j; ++i){
		printf("%s:%f\n",h[i].sno,h[i].score);
	}
}