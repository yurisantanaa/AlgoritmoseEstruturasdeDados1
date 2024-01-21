#include <iostream>
#include <stdlib.h>
#include "fifohpp1.hpp"

Fila * fila_new(int n_max) {
	Fila * f = NULL;
	f = (Fila *) malloc( sizeof(Fila) );
	f->data = (int *) malloc( n_max*sizeof(int) );
	f->tamanho = 0;
	f->n_max = n_max;
	return f;
}
void fila_delete(Fila * f) {
	free(f);
}
bool fila_insere(Fila * f, int elemento) {
	int i;
	if(f->tamanho >= f->n_max) return false;
	for(i=f->tamanho;i>0;i--) {
		f->data[i] = f->data[i-1];
	}
	f->data[0] = elemento;
	f->tamanho++;
	return true;
}
bool fila_remove(Fila * f, int * elemento) {
	if(f->tamanho<=0) return false;
	*elemento = f->data[ (f->tamanho)-1 ];
	(f->tamanho)--;
	return true;
}
void fila_mostra(Fila * f) {
	std::cout << "[";
	for(int i=0; i< f->tamanho;i++) {
		std::cout << f->data[i] << ", ";
	}
	std::cout << "]\n";
}
