#include <stdio.h>
#include "seqtack.h"

int main()
{
	int i;
	seqstack_t* p = CreateEpSeqStack(5);
	for (i = 1; i <= 5; i++) {//1 2 3 4 5
		//入栈
		PushStack(p, i);
	}
	printf("栈顶是：%d\n", GetTopSeqStack(p));
	/*
	//栈不空就出栈
	while (!IsEpSeqStack(p)) {//5 4 3 2 1
		printf("%d ", PopSeqStack(p));//出栈
	}
	printf("\n");
	free(p->data);
	p->data = NULL;
	free(p);
	p = NULL;
	*/
	return 0;
}