#ifndef HISTORIAL_H
#define HISTORIAL_H
#include <string>
#include <list>
#include "tratamiento.h"
#include "cita.h"
#include "paciente.h"
#include <iostream>
#include <fstream>
using namespace std;
class Historial{
private:
  list <Cita> historialcitas_;
  list <Tratamiento> historialtratamientos_;
  int inicializer_;


public:
Historial(int inicializer=0){inicializer_=inicializer;}
 void leehistorialCitas();
    void leehistorialTratamientos();
    void escribehistorialTratamientos();
    void escribehistorialCitas();
    void addCitahistorial(Cita aux);
    void addTratamientohistorial(Tratamiento aux);
    void mostrarcitashistorial(string dni);
    void mostrartratamientoshistorial(string dni);
};







#endif
