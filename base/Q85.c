char *Question85 = "Q85:n��ѧ���ĳɼ������������з���һ����ͷ�ڵ������ṹ�У�hָ�������ͷ�ڵ㡣���д����fun�����Ĺ����ǣ����ƽ���֣��ɺ���ֵ���ء�";

#include "head.h"

pNode InitList()
{
	pNode head = (pNode)malloc(sizeof(StuInfoNode));
	head->next = NULL;
	head->score = -1;
	return head;
}

int createList(pNode head)
{
	pNode p, q;
	int count = 0;
	float score;
	q = head;
	printf("Please input score infomation(Ctrl+Z to end input):\n");
	
	while (fflush(stdin),scanf("%f", &score) != EOF){
		p = (pNode)malloc(sizeof(StuInfoNode));
		p->next = NULL;
		p->score = score;
		count++;
		q->next = p;
		q = p;
	}
	return count;
}

void Q85()
{
	puts(Question85);
	pNode S;
	float sum = 0.0,avg = 0.0;
	S = InitList();
	int n = createList(S);
	pNode p = S->next;
	while (p != NULL){
		sum += p->score;
		p = p->next;
	}
	avg = sum / n;
	printf("The avg score is:%5.2f\n",avg);
}