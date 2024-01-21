
#include <iostream>
#include "fifohpp2.hpp"

int main() {
	int v;
	FIFO * fila = fifo_new();

	fifo_insert(fila, 7);
	fifo_insert(fila, 10);
	fifo_insert(fila, 8);
	fifo_insert(fila, 2);
	fifo_show(fila);

	while( fifo_remove(fila,&v) ) {
		std::cout << "Valor removido: " << v << "\n";
		fifo_show(fila);
	}

	return 0;
}