#include "seqtack.h"

//1.����һ���յ�ջ
seqstack_t* CreateEpSeqStack(int len)//len������Ǵ���ջ��ʱ�����󳤶�
{
	//����ռ���ջ�ṹ��
	seqstack_t* p = (seqstack_t*)malloc(sizeof(seqstack_t));
	if (p == NULL) {
		printf("error\n");
		return NULL;
	}
	//��ʼ��
	p->maxlen = len;//����ջ��󳤶�
	p->top = -1;//ջ��
	p->data = (int*)malloc(sizeof(int) * len);//ָ�򿪱����ݵĿռ䣬����int��
	if (p->data == NULL) {
		printf("error\n");
		return NULL;
	}
	return p;
}

//2.�ж��Ƿ�Ϊ��,������1 δ������0
int IsFullSeqStack(seqstack_t* p)
{
	return p->top + 1 == p->maxlen;
}
//3.��ջ 
int PushStack(seqstack_t* p, int data)//data������ջ������
{
	//1.�ݴ��ж�
	if (IsFullSeqStack(p)) {
		printf("error\n");
		return -1;
	}
	//2.�ƶ�ջ��
	p->top++;
	//3.������ջ
	p->data[p->top] = data;//���±����
	return 0;
}
//4.�ж�ջ�Ƿ�Ϊ��
int IsEpSeqStack(seqstack_t* p)
{
	return p->top == -1;
}
//5.��ջ 
int PopSeqStack(seqstack_t* p)
{
	//1.�ݴ��ж�
	if (IsEpSeqStack(p)) {
		printf("error\n");
		return -1;
	}
	//2.�ƶ�ջ��4rg u
	p->top--;
	//3.��ջ��Ԫ��ȡ��
	return p->data[p->top + 1];
}

//6. ���ջ 
void ClearSeqStack(seqstack_t* p)
{
	p->top = -1;
}

//7. ��ȡջ������(ע�ⲻ�ǳ�ջ�����������ջ���൱��ɾ����ջ�����ݣ�ֻ�ǽ�ջ�������ݻ�ȡ��������Ҫ�ƶ�ջ��)
int GetTopSeqStack(seqstack_t* p)
{
	if (!IsEpSeqStack(p)) {//ջ��Ϊ��
		return p->data[p->top];
	}
	return -1;
}
//8. ��ջ�ĳ���
int LengthSeqStack(seqstack_t* p)
{
	return p->top + 1;
}