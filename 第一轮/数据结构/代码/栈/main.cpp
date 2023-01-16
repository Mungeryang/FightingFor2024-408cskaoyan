#include<stdio.h>
#include<stdlib.h>

#define Maxsize 50

//��ջ�Ĳ���
//LIFO->����ȳ��Ĳ�����ʽ
//s.top��������ָ�������±��ָ��
typedef int ElemType;
typedef struct {
	ElemType data[Maxsize];//����
	int top;
}SqStack;

//����ʹ��C++�����ã���Ϊ�Ǵ��к�����ֵ�������ı�ʵ�ε�ֵ
void InitStack(SqStack &S) {

	S.top = -1;//ջ��

}

//�ж�ջ�Ƿ�Ϊ�գ���Ϊ����Ҫ�ı�ʵ�ε�ֵ�����Բ��ü�����
bool StackEmpty(SqStack S) {
	if (S.top == -1) {
		return true;
	}
	return false;
}

//ѹջ����
//��Ҫ�ı�ʵ���е�ջ��ֵ��������Ҫ��������
bool Push(SqStack& S, ElemType x) {
	//������ջ���Ƕ��С������ڽ��в������ʱ��һ���ǵ�Ҫ�����ж�����
	if (S.top == Maxsize - 1) {
		return false;
	}
	//ѹջ����->�Ƚ���+����
	//ջ��Ԫ�ش����һ�����鵱��
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

//��ջ����
bool Pop(SqStack &S,ElemType x) {

	if (StackEmpty(S)) {
		return false;
	}
	//��������ȼ���x = S.data[S.top--];
	x = S.data[S.top--];
	//S.top--;
	return true;
}

int main() {

	SqStack S;//��ʼ��
	bool flag;
	ElemType m;
	InitStack(S);
	flag = StackEmpty(S);
	if (flag) {
		printf("ջ�ǿյģ�\n");
	}
	//Ԫ��ѹջ
	Push(S, 3);
	Push(S, 4);
	Push(S, 5);
	Push(S, 6);
	flag = GetTop(S, m);
	if (flag) {
		printf("�õ���ջ��Ԫ��Ϊ��%d\n", m);
	}
	flag = Pop(S, 6);
	if (flag) {
		printf("������Ԫ��Ϊ��%d\n", m);
	}

	return 0;


}