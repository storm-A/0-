#include<stdio.h>
#include<stdlib.h>
#include "text7.h"

int main(void)
{
	minheap heap;
	int i, a = 0, b = 0, c=0;
	printf("������ߴ�\n");
	scanf_s("%d", &b);
	heap = create(b);
	printf("����������\n");
	for (i = 0; i < b; i++)
	{
		scanf_s("%d", &a);
		insert(heap, a);
	}
	printf("�����\n");
	for (i = 0; i < b; i++)
	{
		c = delelte(heap);
		printf("%d ", c);
	}

	return 0;
}