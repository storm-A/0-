#pragma once
#ifndef __SY1_H__
#define __SY1_H__

#define maxvertexnum 100

extern short visited[100];

//ͼ
typedef int vertex;
typedef int datatype;
//�߶��� 
typedef struct enode *ptrtoenode;
struct enode {
	vertex v1;
	vertex v2;
};
typedef ptrtoenode edge;
//�ڽӵ� 
typedef struct adjvnode *ptrtoadjvnode;
struct adjvnode {
	vertex adjv;
	ptrtoadjvnode next;
};
//�����ͷ�ڵ㶨��
typedef struct vnode {
	ptrtoadjvnode firstedge;  //�߱�ͷָ��
	datatype data;
} adjlist[maxvertexnum];
//ͼ�Ķ���
typedef struct gnode *ptrtognode;
struct gnode {
	int nv;  //������
	int ne;  //����
	adjlist g;  //�ڽӱ�
};
typedef ptrtognode lgraph;

//����
typedef int elementtype;
typedef struct node *ptrtonode;
struct node {
	struct vnode v;
	ptrtonode next;
};
typedef ptrtonode position;

typedef struct qnode *ptrtoqnode;
struct qnode {
	position front;
	position rear;
};
typedef ptrtoqnode queue;

queue creatqueue();
short isempty(queue q);
void addq(queue q, struct vnode v);
position deleteq(queue q);

lgraph buildgraph(int nv);
void dfs(lgraph graph, vertex v);
void bfs(lgraph graph, vertex v);

#endif
