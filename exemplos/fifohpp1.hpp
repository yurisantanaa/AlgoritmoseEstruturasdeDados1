
#ifndef __FIFO_HPP__

#define __FIFO_HPP__

// #define N_MAX 128
typedef struct {
	//int data[N_MAX];
	int n_max;
	int * data;
	int tamanho;
} Fila;

/**
 * @brief 
 * 
 * @param n_max capacidade máxima da fila
 * @return Fila* 
 */
Fila * fila_new(int n_max);
void fila_delete(Fila * f);
/**
 * @brief 
 * 
 * @param f 
 * @param elemento 
 * @return int true para sucesso, false caso o contrario
 */
bool fila_insere(Fila * f, int elemento);
/**
 * @brief 
 * 
 * @param f 
 * @param elemento 
 * @return int true para sucesso e false caso contrario
 */
bool fila_remove(Fila * f, int * elemento);

void fila_mostra(Fila * f);

#endif