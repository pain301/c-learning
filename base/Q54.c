char *Question54 = "Q54:ѧ���ļ�¼��ѧ�źͳɼ���Ƹ���n��ѧ�������������������з���ṹ������s�У����д����fun�����Ĺ����ǣ��ѵ���ƽ���ֵ�ѧ�����ݷ���b��ָ�������У�����ƽ���ֵ�ѧ������ͨ���β�n���أ�ƽ����ͨ������ֵ���ء�";

/*
�������ݣ�
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