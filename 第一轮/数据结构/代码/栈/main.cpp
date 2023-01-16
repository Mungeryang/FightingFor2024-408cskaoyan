#include<stdio.h>
#include<stdlib.h>

#define Maxsize 50

//堆栈的操作
//LIFO->后进先出的操作方式
//s.top就是用来指向数组下标的指针
typedef int ElemType;
typedef struct {
	ElemType data[Maxsize];//数组
	int top;
}SqStack;

//必须使用C++的引用，因为是从中函数传值进来，改变实参的值
void InitStack(SqStack &S) {

	S.top = -1;//栈空

}

//判断栈是否为空：因为不需要改变实参的值，所以不用加引用
bool StackEmpty(SqStack S) {
	if (S.top == -1) {
		return true;
	}
	return false;
}

//压栈操作
//需要改变实参中的栈数值，所以需要加入引用
bool Push(SqStack& S, ElemType x) {
	//无论是栈还是队列、链表；在进行插入操作时，一定记得要首先判断是满
	if (S.top == Maxsize - 1) {
		return false;
	}
	//压栈操作->先进性+操作
	//栈内元素存放在一个数组当中
	S.data[++S.top] = x;
	return true;
}

bool GetTop(SqStack S, ElemType& x) {

	if (StackEmpty(S)) {

		return false;
	}
	x = S.data[S.top];
	return true;
}

//出栈操作
bool Pop(SqStack &S,ElemType x) {

	if (StackEmpty(S)) {
		return false;
	}
	//以下两句等价于x = S.data[S.top--];
	x = S.data[S.top--];
	//S.top--;
	return true;
}

int main() {

	SqStack S;//初始化
	bool flag;
	ElemType m;
	InitStack(S);
	flag = StackEmpty(S);
	if (flag) {
		printf("栈是空的！\n");
	}
	//元素压栈
	Push(S, 3);
	Push(S, 4);
	Push(S, 5);
	Push(S, 6);
	flag = GetTop(S, m);
	if (flag) {
		printf("得到的栈顶元素为：%d\n", m);
	}
	flag = Pop(S, 6);
	if (flag) {
		printf("弹出的元素为：%d\n", m);
	}

	return 0;


}