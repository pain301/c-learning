char *Question57 = "Q57:ѧ���ļ�¼����ѧ�źͳɼ���ɣ�n��ѧ�������������������з���ṹ������s�У����д����fun�����Ĺ����ǣ���ָ��������Χ�ڵ�ѧ�����ݷ���b��ָ�������У�������Χ�ڵ�ѧ�������ɺ���ֵ���ء�";

/*
�������ݣ�
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