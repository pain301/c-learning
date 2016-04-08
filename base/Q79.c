char *Question79 = "Q79:已知学生的记录由学号和学习成绩构成，n名学生的数据已存入a结构体数组中。请编写函数fun，该函数的功能是：找出成绩最低的学生记录，通过形参返回主函数(规定只有一个最低分)。";

/*测试数据：
wang 88
zhao 73
zhang 100
lule 80
zhao 71
xusan 69
zhaoli 68
mahan 65
*/

#include "head.h"


void Q79()
{
	puts(Question79);
	StuInfo s[STU_NUM];
	int k = getStuInfo(s);
	float lowScore;
	int i, record = 0;
	for (i = 1; i < k; ++i){
		if (s[i].score < s[0].score){
			record = i;
		}
	}

	printf("The lowest score students are %s:%.2f:\n", s[record].sno, s[record].score);
}