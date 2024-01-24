
#include "data.hpp"

int main() {

	Data dt, niver;
	dt = data_new(6,11,2023);
	data_print(dt);

	niver = data_copy(dt);
	data_print(niver);

	data_delete(dt);
	data_delete(niver);

	int dia = data_get_day(dt);



	return 0;
}