char *Question67 = "Q67:学生的记录时由学号和成绩组成，n名学生的数据已在主函数中放入结构体数组s中，请编写函数fun，它的功能时：函数返回指定学号的学生数据，指定的学号在主函数中输入。若没找到指定学号，在结构体变量中给学号置空串，给成绩置-1,作为函数值返回(用于字符串比较的函数时strcmp)。";

/*测试数据：
10001 100
10002 98
10003 97
10004 96
10005 95
*/

#include "head.h"


void Q67()
{
	puts(Question67);
	StuInfo s[100], s1;
	int i;
	char sn[20];
	int n = getStuInfo(s);
	printf("Please enter a student NO. : ");
	gets(sn);
	for (i = 0; i < n; ++i){
		if (!strcmp(s[i].sno, sn)){
			s1 = s[i];
			printf("Sno:%s,Score:%5.2f\n",s1.sno,s1.score);
			break;
		}
	}
	if (i == n){
		strcpy(s1.sno,"");
		s1.score = -1;
		printf("There is no infomation about %s student.\n",sn);
	}
}