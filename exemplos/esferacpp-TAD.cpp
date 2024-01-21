#include <math.h>
#include <stdlib.h>
#include "esfera.hpp"

Esfera* esf_new(double r) {
	Esfera * e = NULL;
	e = (Esfera *) calloc(1, sizeof(Esfera) );
	e->raio = r;
	return e;
}

void esf_delete(Esfera * esf) {
	free(esf);
}

double esf_get_raio(Esfera * esf) {
	return esf->raio;
}

void esf_set_raio(Esfera * esf, double r) {
	esf->raio = r;
}

double esf_get_area(Esfera * esf) {
	return 4*M_PI*esf->raio*esf->raio;
}

double esf_get_volume(Esfera * esf) {
	return 4.0/3*M_PI*esf->raio*esf->raio*esf->raio;
}