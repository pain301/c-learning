char *Question74 = "Q74:ѧ���ļ�¼��ѧ�źͳɼ����n��ѧ�������������������з���ṹ������s�У����д����fun�����Ĺ���ʱ���ѷ�����͵�ѧ�����ݷ���h��ָ�������У�ע�⣺������͵�ѧ�����ܲ�ֹһ�����������ط�����͵�ѧ����������";

/*�������ݣ�
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