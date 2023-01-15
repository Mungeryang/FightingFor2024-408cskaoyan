#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <math.h>
#include <time.h>
#include "Status.h"

int treeIndex = 1;
typedef char String[24];
String str;

Status StrAssign(String T, char *chars)
{
    int i;
    if (strlen(chars) > MAXSIZE)
    {
        return ERROR;
    }
    else
    {
        T[0] = strlen(chars);
        for (i = 0; i <= T[0]; i++)
        {
            //指针的偏移
            T[i] = *(chars + i - 1);
        }
        return OK;
    }
}
/* ************************************************ */
typedef char TElemType;
TElemType Nil = ' ';

Status visit(TElemType e)
{
    printf("%c", e);
    return OK;
}

typedef struct BiTNode
{
    TElemType data;
    struct BiTNode *lchild, *rchild;
} BiTNode, *BiTree;

/* 构造空二叉树T */
Status InitTree(BiTree *tree)
{
    *tree == NULL;
    return OK;
}
/* 初始条件: 二叉树T存在。操作结果: 销毁二叉树T */
void DestoryTree(BiTree *tree)
{
    if (*tree)
    {
        //递归操作
        if ((*tree)->lchild)
        {
            DestoryTree(&(*tree)->lchild);
        }
        if ((*tree)->rchild)
        {
            DestoryTree(&(*tree)->rchild);
        }
        //后序具体操作
        free(*tree);
        *tree = NULL;
    }
}

/* 按前序输入二叉树中结点的值（一个字符） */
/* #表示空树，构造二叉链表表示二叉树T。 */
void CreatTree(BiTree *tree)
{
    //接受一个字符串
    TElemType ch;
    ch = str[treeIndex++];
    if (ch == '#')
    {
        *tree = NULL;
    }
    else
    {
        *tree = (BiTree)malloc(sizeof(BiTNode));
        if (!*tree)
        {
            exit(OVERFLOW);
        }
        (*tree)->data = ch;
        CreatTree(&(*tree)->lchild);
        CreatTree(&(*tree)->rchild);
    }
}

/* 初始条件: 二叉树T存在 */
/* 操作结果: 若T为空二叉树,则返回TRUE,否则FALSE */
Status TreeEmpty(BiTree tree)
{
    if (tree)
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
}
#define ClearBiTree DestoryTree;

/* 初始条件: 二叉树T存在。操作结果: 返回T的深度 */
int BiTreeDepth(BiTree tree)
{
    int i, j;
    if (!tree)
    {
        return 0;
    }
    if (tree->lchild)
    {
        i = BiTreeDepth(tree->lchild);
    }
    else
    {
        i = 0;
    }
    if (tree->rchild)
    {
        j = BiTreeDepth(tree->rchild);
    }
    else
    {
        j = 0;
    }
    return i > j ? i + 1 : j + 1;
}

/* 初始条件: 二叉树T存在。操作结果: 返回T的根 */
TElemType Root(BiTree tree)
{
    if (TreeEmpty(tree))
    {
        return Nil;
    }
    else
    {
        return tree->data;
    }
}

/* 初始条件: 二叉树T存在，p指向T中某个结点 */
/* 操作结果: 返回p所指结点的值 */
TElemType Value(BiTree p)
{
    return p->data;
}
/* 给p所指结点赋值为value */
void Assign(BiTree p, TElemType value)
{
    p->data = value;
}

/* 初始条件: 二叉树T存在 */
/* 操作结果: 前序递归遍历T */
void PreOrder(BiTree tree)
{
    if (tree == NULL)
    {
        return;
    }
    printf("%c", tree->data);
    PreOrder(tree->lchild);
    PreOrder(tree->rchild);
}

/* 初始条件: 二叉树T存在 */
/* 操作结果: 中序递归遍历T */
void InOrder(BiTree tree)
{
    if (tree == NULL)
    {
        return;
    }
    InOrder(tree->lchild);
    printf("%c", tree->data);
    InOrder(tree->rchild);
}

/* 初始条件: 二叉树T存在 */
/* 操作结果: 后序递归遍历T */
void PostOrder(BiTree tree)
{
    if (tree == NULL)
    {
        return;
    }
    PostOrder(tree->lchild);
    PostOrder(tree->rchild);
    printf("%c", tree->data);
}

int main()
{
    int i, j;
    TElemType e1;
    BiTree tree;
    InitTree(&tree);
    StrAssign(str, "ABDH#K###E##CFI###G#J##");
    CreatTree(&tree);
    printf("构造空二叉树后,树空否？%d(1:是 0:否) 树的深度=%d\n", TreeEmpty(tree), BiTreeDepth(tree));
    e1 = Root(tree);
    printf("二叉树的根为: %c\n", e1);
    printf("\n前序遍历二叉树:");
    PreOrder(tree);
    printf("\n中序遍历二叉树:");
    InOrder(tree);
    printf("\n后序遍历二叉树:");
    PostOrder(tree);
    ClearBiTree(&tree);
    printf("\n清除二叉树后,树空否？%d(1:是 0:否) 树的深度=%d\n", TreeEmpty(tree), BiTreeDepth(tree));
    i = Root(tree);
    if (!i)
    {
        printf("树空，无根\n");
    }
    system("pause");
    return 0;
}
