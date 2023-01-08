/*
笔记：
单链表的元素定位通用模板：
首先定义一个指针：LinkList p;int j;
然后判断链表是否为空：if(l = NULL);
指针初始化：p = L;j = 0;
while循环到指定位置：一般为目标位置的前一个节点：while(p->next != NULL || j < i - 1)p = p->next;++j;
最后进行增删改查的操作
*/
//单链表的创建初始化
#include <iostream>
#include <cstdio>
#include <stdlib.h>
#include <string.h>

using namespace std;

//全局的宏定义
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define MAXSIZE 20
//注释即定义
typedef int Elem;
typedef int Status;

//定义单链表的结构
typedef struct LinkNode
{
    Elem data;
    struct LinkNode *next;
} LinkNode, *LinkList;

/*初始化链式线性表,多用于初始化带头结点的链表*/
Status Initlist(LinkList *L)
{
    //动态申请内存空间
    *L = (LinkNode *)malloc(sizeof(LinkNode));
    if (!(*L))
    {
        return ERROR;
    }
    (*L)->next = NULL; /*指针域为空*/
    return OK;
}

/*初始条件是L已经存在,若L为空表则返回TRUE,否则返回FALSE*/
Status LinstEmpty(LinkList L)
{
    if (L->next)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

/*若L已经存在则清楚L的内容*/
Status ClearList(LinkList *L)
{
    LinkList p, q;
    //确保链表存在
    if (L == NULL)
    {
        return ERROR;
    }
    p = (*L)->next;
    while (p)
    {
        q = p->next;
        free(p);
        p = q;
    }
    (*L)->next = NULL;
    return OK;
}

/*如果L已经存在，返回L的长度*/
int LinkLength(LinkList L)
{
    int i = 0;
    LinkList p;
    p = L->next; /* p指向第一个结点 */
    while (p)
    {
        i++;
        p = p->next;
    }
    return i;
}

/*如果L已经存在，返回L中第1个与e满足关系的数据元素的位序*/
int GetElem(LinkList L, Elem e)
{
    int i = 0;
    LinkList p;
    p = L->next;
    while (p)
    {
        i++;
        if (p->data == e)
        {
            return i;
        }
        p = p->next;
    }
    return 0;
}

Status DestoryLink(LinkList *L)
{
    LinkList p;

    //确保链表结构存在
    if (L == NULL || *L == NULL)
    {
        return ERROR;
    }
    p = *L;

    while (p != NULL)
    {
        p = (*L)->next;
        free(p);
        (*L) = p;
    }
    *L = NULL;
    return OK;
}

/*
 * 遍历
 *
 * 用visit函数访问链表L
 */
void ListTraverse(LinkList L, void(visit)(Elem))
{
    LinkList p;

    //确保链表不为空
    if (L == NULL || L->next == NULL)
    {
        return;
    }
    p = L->next;
    while (p)
    {
        visit(p->data);
        p = p->next;
    }
    printf("\n");
}

/*
 * 删除链表第i个位置上的元素，并将被删除元素存储到e中。
 *【备注】
 * 教材中i的含义是元素位置，从1开始计数
 */
Status LinkDelete(LinkList *L, int i, Elem *e)
{
    LinkList p, q;
    int j;

    //确保链表不为空链表
    if ((*L) == NULL || (*L)->next == NULL)
    {
        return ERROR;
    }
    p = *L;
    j = 0;

    // 寻找第i-1个结点，且保证该结点的后继不为NULL
    while (p->next != NULL && j < i - 1)
    {
        p = p->next;
        ++j;
    }

    // 如果遍历到头了，或者i的值不合规(比如i<=0)，说明没找到合乎目标的结点
    if (p->next == NULL || j > i - 1)
    {
        return ERROR;
    }
    //删除第i个节点
    q = p->next;
    p->next = q->next;
    *e = q->data;
    free(q);
    return OK;
}

/*
 * 插入
 * 向链表第i个位置上插入e，插入成功则返回OK，否则返回ERROR。
 * 教材中i的含义是元素位置，从1开始计数
 */
Status LinkInsert(LinkList *L, int i, Elem e)
{
    LinkList p, s;
    int j = 0;

    //确保链表存在
    if ((*L) == NULL)
    {
        return ERROR;
    }

    p = *L;
    j = 0;

    while (p != NULL || j < i - 1)
    {
        p = p->next;
        ++j;
    }
    // 如果遍历到头了，或者i的值不合规(比如i<=0)，说明没找到合乎目标的结点
    if (p == NULL || j > i - 1)
    {
        return ERROR;
    }

    //生成新的节点
    s = (LinkList)malloc(sizeof(LinkNode));
    if (s == NULL)
    {
        return ERROR;
    }
    s->data = e;
    s->next = p->next;
    p->next = s;
    return OK;
}

void PrintElem(Elem e)
{
    printf("%d", e);
}

int main()
{
    LinkList L;
    int i;
    Elem e;
    printf("████████InitLink\n");
    {
        printf("初始化单链表\n");
        Initlist(&L);
    }

    LinstEmpty(L) ? printf("L 为空！！\n") : printf("L 不为空！\n");
    for (i = 1; i <= 3; i++)
    {
        printf("█ 在 L 第 %d 个位置插入 \"%d\" ...\n", i, 3 * i);
        LinkInsert(&L, i, 3 * i);
    }
    ListTraverse(L, PrintElem);
    system("pause");
    return 0;
}
