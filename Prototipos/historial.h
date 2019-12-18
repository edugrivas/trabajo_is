#ifndef HISTORIAL_H
#define HISTORIAL_H
#include <string>
#include <list>
#include "tratamiento.h"
#include "cita.h"
class Historial {
private:
list <Cita> registrocitas_;
list <Tratamiento> registrotratamientos_;


public:
Historial();
list <Cita> getCitas()const {return registrocitas_;};
void setNuevacita(Cita aux);
list <Tratamiento> getTratamientos()const {return registrotratamientos_;};
void setNuevotratamiento(Tratamiento aux);
void mostrarhistorial();
};







#endif
