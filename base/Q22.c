char *Question22="Q22:n名学生的成绩已在主函数中放入一个带头节点的链表结构中，h指向链表的头节点。请编写函数fun，它的功能是：找出学生的最高分，由函数值返回。";


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Stu_Link
{
	char name[10];
	float score;
	struct Stu *next;
}SNode, *PNode;

PNode findHighScore(PNode Head)
{
	PNode S = Head->next, R = NULL;
	R = S;
	S = S->next;
	while (S != NULL)
	{
		if (S->score > R->score)
			R = S;
		S = S->next;
	}
	return R;
}

PNode InitListQ22()
{
	PNode head;
	if (!(head = (PNode)malloc(sizeof(SNode))))
		exit(1);
	head->next = NULL;
	return head;
}

void CreateListQ22(PNode head)
{
	PNode p, q;
	char name[10];
	float score;
	printf("Please input student infomation(name score),Ctrl+Z to end:\n");
	q = head;
	while (fflush, scanf("%s %f", name, &score) != EOF)
	{
		p = (PNode)malloc(sizeof(SNode));
		strcpy(p->name, name);
		p->score = score;
		p->next = NULL;
		q->next = p;
		q = p;
	}
}

void Q22()
{
	puts(Question22);
	PNode stuList;
	PNode highScoreStu;
	stuList = InitListQ22();
	CreateListQ22(stuList);
	highScoreStu = findHighScore(stuList);
	printf("The highest student is %s,his/her score is:%f\n", highScoreStu->name, highScoreStu->score);
}