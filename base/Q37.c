char *Question37 = "Q37:ĳѧ���ļ�¼��ѧ�š�8�ſγ̳ɼ���ƽ������ɣ�ѧ�ź�8�ſγ̵ĳɼ������������и��������д����fun�����Ĺ����ǣ������ѧ����ƽ���ַ��ڼ�¼��ave��Ա�С����Լ�������ȷ���βΡ�";

/*�������ݣ�123 98 97.5 96 89 96.5 99 91 92*/

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