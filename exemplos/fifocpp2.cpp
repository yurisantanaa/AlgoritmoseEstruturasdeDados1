#include "fifohpp2.hpp"
#include <stdlib.h>
#include <iostream>

FIFO * fifo_new(void) {
	FIFO * f = NULL;
	f = (FIFO *) malloc( sizeof(FIFO) );
	f->head = NULL;
	f->size = 0;
	//f->add(fifo_insert);
	return f;
}
FIFO_Node * fifo_node_new(int data) {
	FIFO_Node * n = (FIFO_Node *) malloc( sizeof(FIFO_Node) );
	n->data = data;
	n->next = NULL;
	return n;
}
void fifo_node_insert(FIFO_Node * head, FIFO_Node * node) {
	if(head->next == NULL) {
		head->next = node;
		node->next = NULL;
		return;
	}
	fifo_node_insert( head->next, node );
}

bool fifo_insert(FIFO * fifo, int v) {
	FIFO_Node * n = fifo_node_new(v);
	if(fifo->head == NULL) {
		fifo->head = n;
		fifo->size = 1;
		return true;
	}
	fifo_node_insert(fifo->head, n);
	fifo->size++;
	return true;
}

void fifo_node_show(FIFO_Node * n) {
	if(!n) return;
	std::cout << n->data << ", ";
	fifo_node_show(n->next);
}

void fifo_show(FIFO * fifo) {
	std::cout << "[";
	fifo_node_show(fifo->head);
	std::cout << "]\n";
}

void fifo_node_free(FIFO_Node * n) {
	free(n);
}

bool fifo_remove(FIFO * fifo, int * data) {
	FIFO_Node * h = NULL;
	if(!fifo) {
		exit(0);
	}
	if(fifo->size==0) return false;
	h = fifo->head;
	fifo->head = fifo->head->next;
	*data = h->data;
	fifo_node_free(h);
	fifo->size--;
	return true;
}










// FIFO * fifo_new(void) {
// 	FIFO * f = NULL;
// 	f = (FIFO *) malloc(sizeof(FIFO));
// 	f->head = NULL;
// 	f->size = 0;
// }
// void fifo_delete(void);

// FIFO_Node * fifo_node_new(int data) {
// 	FIFO_Node * fnode = (FIFO_Node *) malloc( sizeof(FIFO_Node) );
// 	fnode->data = data;
// 	fnode->next = NULL;
// 	return fnode;
// }

// void fifo_insert_node( FIFO_Node * head, FIFO_Node * fnode) {
// 	if(head->next == NULL) {
// 		head->next = fnode;
// 		fnode->next = NULL;
// 		return;
// 	}
// 	fifo_insert_node( head->next, fnode );
// }

// bool fifo_insert(FIFO * fifo, int data) {
// 	FIFO_Node * fnode = fifo_node_new(data);
// 	if(!fnode) return false;
// 	fifo_insert_node(fifo->head, fnode);
// 	return true;
// }
// bool fifo_remove(FIFO * fifo, int * data);
// int fifo_size(FIFO * fifo);
// void fifo_show(FIFO * fifo);