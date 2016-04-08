char *Question37 = "Q37:某学生的记录由学号、8门课程成绩和平均分组成，学号和8门课程的成绩已在主函数中给出。请编写函数fun，它的功能是：求出该学生的平均分放在记录的ave成员中。请自己定义正确的形参。";

/*测试数据：123 98 97.5 96 89 96.5 99 91 92*/

#include "head.h"

typedef struct Stu
{
	char stuNo[20];
	float class1;
	float class2;
	float class3;
	float class4;
	float class5;
	float class6;
	float class7;
	float class8;
	float avg;
}Stu;

void getAvg(Stu *stu)
{
	stu->avg = (stu->class1 + stu->class2 + stu->class3 + stu->class4 + stu->class5 + stu->class6 + stu->class7 + stu->class8) / 8;
}

void Q37()
{
	puts(Question37);
	Stu stu;
	printf("Please input Student's No and his 8 score:\n");
	scanf("%s %f %f %f %f %f %f %f %f", stu.stuNo, &stu.class1, &stu.class2, &stu.class3, &stu.class4, &stu.class5, &stu.class6, &stu.class7, &stu.class8);
	getAvg(&stu);
	printf("No.%s student's avg score is: %5.2f\n", stu.stuNo, stu.avg);
	return 0;
}