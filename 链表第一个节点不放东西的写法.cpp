#include<stdio.h>
#include<stdlib.h>
#include<math.h>
typedef struct info {
	int num;
	struct info * next;
} node;
typedef struct List {
	node *head;//ָ�������ͷ
	node *tail;//ָ�������β//��������������
} List;//����List����һ���ṹ�壬�Ϳ��Թ�����һ���б�//List ����������
//node *add(node *head,int num){
//	node *p=(node *)malloc(sizeof(node));
//	p->num=num;
//	p->next=head->next;
//	head->next=p;
//} 
//int main() {
//	int num;
//	node *head=(node *)malloc(sizeof(node)),*p;
//	head->next=NULL;
//	while(scanf("%d",&num)&&num!=-1){
//		head=add(head,num);
//	}
//	for(p=head->next;p;p=p->next){
//		printf("%d ",p->num);
//	}
//	return 0;
//}
void head_add(List *list,int num){
	node *p=(node *)malloc(sizeof(node));
	p->num=num;
	p->next=list->head->next;
	list->head->next=p;
}//ͷ��ʱtailʧȥ����

void add(List *list,int num){
	node *p=(node *)malloc(sizeof(node));
	p->num=num;
	p->next=list->tail->next;//p->next=NULL;
	list->tail->next=p;
	list->tail=p;
}

int main(){
	List list;
	int num;
	node *p=(node *)malloc(sizeof(node));//�յ�ͷ���
	p->next=NULL;
	list.head=list.tail=p;
	while(scanf("%d",&num)&&num!=-1){
		head_add(&list,num);
	}
	for(p=list.head->next;p;p=p->next){
		printf("%d ",p->num);
	}
	return 0;
}

