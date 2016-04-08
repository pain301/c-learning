#include "head.h"
int getStuInfo(StuInfo *s)
{
	int i = 0;
	printf("Please input the students' infomation(sno score),Ctrl+Z to end input.\n");
	while (fflush(stdin), scanf("%s %f", s[i].sno, &s[i].score) != EOF) i++;
	return i;
}