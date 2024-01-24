
#ifndef __DATA_HPP__
#define __DATA_HPP__

typedef struct data * Data;
/**
 * @brief logical define a boolean value
 * 0 for false
 * 1 for true
 */
typedef unsigned char logical;
#define TRUE 1
#define FALSE 0


Data data_new(int dia, int mes, int ano);
void data_delete(Data dt);
void data_print(Data dt);
Data data_copy(Data dt);

int data_get_day(Data dt);

logical data_is_bissexto(Data dt);

#endif

