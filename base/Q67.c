char *Question67 = "Q67:ѧ���ļ�¼ʱ��ѧ�źͳɼ���ɣ�n��ѧ�������������������з���ṹ������s�У����д����fun�����Ĺ���ʱ����������ָ��ѧ�ŵ�ѧ�����ݣ�ָ����ѧ���������������롣��û�ҵ�ָ��ѧ�ţ��ڽṹ������и�ѧ���ÿմ������ɼ���-1,��Ϊ����ֵ����(�����ַ����Ƚϵĺ���ʱstrcmp)��";

/*�������ݣ�
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