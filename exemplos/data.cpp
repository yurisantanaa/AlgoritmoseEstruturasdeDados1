#include <iostream>
#include <stdlib.h>
#include "data.hpp"

#define DATA_SEP '/'

struct data {
	int d, m, a;
};

Data data_new(int dia, int mes, int ano) {
	Data dt = NULL;
	dt = (Data) calloc(1, sizeof(struct data));
	dt->d = dia;
	dt->m = mes;
	dt->a = ano;
	return dt;
}
void data_delete(Data dt) {
	free(dt);
}

void data_print(Data dt) {
	std::cout << dt->d << DATA_SEP << dt->m << DATA_SEP << dt->a << "\n";
}

Data data_copy(Data dt) {
	Data n = data_new(dt->d, dt->m, dt->a);
	return n;
}

int data_get_day(Data dt) {
	return dt->d;
}

logical data_is_bissexto(Data dt) {
	if(((dt->a%4 == 0 && dt->a%100 != 0) || (dt->a%400 == 0)) && (dt->a > 1582)) {
		return TRUE;
	} else return FALSE;
}


