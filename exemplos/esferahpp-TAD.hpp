
#ifndef __ESFERA_HPP__
#define __ESFERA_HPP__

typedef struct {
	double raio;
} Esfera;

Esfera* esf_new(double r);
void esf_delete(Esfera * esf);

double esf_get_raio(Esfera * esf);
void esf_set_raio(Esfera * esf, double r);
double esf_get_area(Esfera * esf);
double esf_get_volume(Esfera * esf);

#endif