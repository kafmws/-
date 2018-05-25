#include<stdio.h>
#include<stdlib.h>

typedef struct _player
{
    int id;
    char name[51];
    char password[50];
    char role[50];
    int level;
    int exp;
    int gamecredit;//游戏积分
    int hp;
    int mp;
    int gold;
    int attack;
    int defence;
    struct _player *next;
}Player;

typedef struct _list{
    struct _player * head;
    struct _player * tail;
}List;

Player *Add(List *list)
{
    Player *pNew = (Player *)malloc(sizeof(Player));
    pNew -> next = NULL;
    if(list -> head)    //链表不为空
    {
        pNew -> id = ++list -> tail -> id;
        list -> tail -> next = pNew;
        list -> tail = pNew;
    }
    else
    {
        list -> head = list -> tail = pNew;
        pNew -> id = 1;
    }
    return pNew;
}
    List currlist;

int main()
{




    int i;
//    Read(&currlist);            //读

    for(i = 0;i < 20;i++)
        Add(&currlist);

    Player *temp = currlist.head;

    while(temp )
    {
        printf("%d\n",temp -> id);
        temp = temp -> next;
    }

//        Write(currlist.head);      //写
}

