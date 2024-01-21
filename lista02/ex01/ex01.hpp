/* #ifndef __EX01_HPP__
#define __EX01_HPP__

struct _conjunto{
    int Num;
    _conjunto *prox;
};
typedef struct _conjunto conjunto; 


conjunto* criaConjunto(void); //
int conjuntoVazio(conjunto * c);  //
conjunto* insereElementoConjunto(unsigned int x,conjunto * c); //
conjunto* excluiDoConjunto(unsigned int x,conjunto * c); //
void tamanhoConjunto(conjunto * c); //
int maiores(unsigned int x,conjunto * c);//
int menores(unsigned int x,conjunto * c);//
int pertenceConjunto(unsigned int x,conjunto * c); //
int conjuntosIdenticos(conjunto * c1,conjunto * c2);
int subConjunto(conjunto * c1,conjunto * c2);
conjunto complemento(conjunto * c1,conjunto * c2);
conjunto uniao(conjunto * c1,conjunto * c2);
conjunto interseccao(conjunto * c1,conjunto * c2);
conjunto diferenca(conjunto * c1,conjunto * c2);
void mostraConjunto(conjunto * c, int ordem); //necessita ordena
int copiarConjunto(conjunto * c1,conjunto * c2);
void destruirConjunto(conjunto * c);//
void ordena(conjunto * c, int ordem);

#endif
 */