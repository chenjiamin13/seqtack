#include "seqtack.h"

//1.创建一个空的栈
seqstack_t* CreateEpSeqStack(int len)//len代表的是创建栈的时候的最大长度
{
	//申请空间存放栈结构体
	seqstack_t* p = (seqstack_t*)malloc(sizeof(seqstack_t));
	if (p == NULL) {
		printf("error\n");
		return NULL;
	}
	//初始化
	p->maxlen = len;//保存栈最大长度
	p->top = -1;//栈空
	p->data = (int*)malloc(sizeof(int) * len);//指向开辟数据的空间，数据int型
	if (p->data == NULL) {
		printf("error\n");
		return NULL;
	}
	return p;
}

//2.判断是否为满,满返回1 未满返回0
int IsFullSeqStack(seqstack_t* p)
{
	return p->top + 1 == p->maxlen;
}
//3.入栈 
int PushStack(seqstack_t* p, int data)//data代表入栈的数据
{
	//1.容错判断
	if (IsFullSeqStack(p)) {
		printf("error\n");
		return -1;
	}
	//2.移动栈针
	p->top++;
	//3.数据入栈
	p->data[p->top] = data;//用下标插入
	return 0;
}
//4.判断栈是否为空
int IsEpSeqStack(seqstack_t* p)
{
	return p->top == -1;
}
//5.出栈 
int PopSeqStack(seqstack_t* p)
{
	//1.容错判断
	if (IsEpSeqStack(p)) {
		printf("error\n");
		return -1;
	}
	//2.移动栈针4rg u
	p->top--;
	//3.将栈顶元素取出
	return p->data[p->top + 1];
}

//6. 清空栈 
void ClearSeqStack(seqstack_t* p)
{
	p->top = -1;
}

//7. 获取栈顶数据(注意不是出栈操作，如果出栈，相当于删除了栈顶数据，只是将栈顶的数据获取到，不需要移动栈针)
int GetTopSeqStack(seqstack_t* p)
{
	if (!IsEpSeqStack(p)) {//栈不为空
		return p->data[p->top];
	}
	return -1;
}
//8. 求栈的长度
int LengthSeqStack(seqstack_t* p)
{
	return p->top + 1;
}