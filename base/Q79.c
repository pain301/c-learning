char *Question79 = "Q79:��֪ѧ���ļ�¼��ѧ�ź�ѧϰ�ɼ����ɣ�n��ѧ���������Ѵ���a�ṹ�������С����д����fun���ú����Ĺ����ǣ��ҳ��ɼ���͵�ѧ����¼��ͨ���βη���������(�涨ֻ��һ����ͷ�)��";

/*�������ݣ�
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