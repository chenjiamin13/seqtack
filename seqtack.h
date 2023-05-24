#ifndef _SEQSTACK_H_
#define _SEQSTACK_H_
#include <stdio.h>
#include <stdlib.h>

typedef struct seqstack
{
	int* data;//ָ��ջ�Ĵ洢λ��
	int maxlen;//����ջ����󳤶�
	int top;//��Ϊջ�룬�õ�ʱ����������Խ�����˳������last��ʹ��
	//top ʼ�մ���ǰջ�����һ����ЧԪ�ص��±�
}seqstack_t;

//1.����һ���յ�ջ
seqstack_t* CreateEpSeqStack(int len);//len������Ǵ���ջ��ʱ�����󳤶�
//2.�ж��Ƿ�Ϊ��,������1 δ������0
int IsFullSeqStack(seqstack_t* p);
//3.��ջ 
int PushStack(seqstack_t* p, int data);//data������ջ������
//4.�ж�ջ�Ƿ�Ϊ��
int IsEpSeqStack(seqstack_t* p);
//5.��ջ 
int PopSeqStack(seqstack_t* p);
//6. ���ջ 
void ClearSeqStack(seqstack_t* p);
//7. ��ȡջ������(ע�ⲻ�ǳ�ջ�����������ջ���൱��ɾ����ջ�����ݣ�ֻ�ǽ�ջ�������ݻ�ȡ��������Ҫ�ƶ�ջ��)
int GetTopSeqStack(seqstack_t* p);
//8. ��ջ�ĳ���
int LengthSeqStack(seqstack_t* p);
#endif 