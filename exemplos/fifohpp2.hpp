
#ifndef __FIFO_HPP__
#define __FIFO_HPP__

typedef struct _fifo_node {
	int data;
	struct _fifo_node * next;
} FIFO_Node;

typedef struct _fifo {
	FIFO_Node * head;
	// FIFO_Node * tail;
	int size;
	void * (*add)(FIFO_Node * head, FIFO_Node * node);
} FIFO;

FIFO * fifo_new(void);
void fifo_delete(void);
bool fifo_insert(FIFO * fifo, int data);
bool fifo_remove(FIFO * fifo, int * data);
int fifo_size(FIFO * fifo);
void fifo_show(FIFO * fifo);

#endif

