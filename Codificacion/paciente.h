#ifndef PACIENTE_H
#define PACIENTE_H
#include <cstring>
#include <list>
#include <iostream>
#include "cita.h"
#include "tratamiento.h"
using namespace std;
class Paciente{
private:
  string nombre_;
  string apellidos_;
  string DNI_;
  string fechanacimiento_;
  int CP_;
  string idhistorial_;
  string telefono_;
public:
  Paciente(string nombre, string apellidos,string DNI, string idhistorial,string fechanacimiento = "",int CP = 0, string telefono = "");
  inline string getNombre() const {return nombre_;};
  inline string getApellidos() const {return apellidos_;};
  inline string getFecha() const {return fechanacimiento_;};
  inline string getTelefono() const {return telefono_;};
  inline string getDNI()const { return DNI_;};
  inline int getCP() const {return CP_;};
  inline string getIdhistorial() const {return idhistorial_;};
  inline void setNombre(string a) {nombre_ = a;};
  inline void setApellidos(string a) {apellidos_ = a;};
  inline void setDNI(string a){DNI_=a;};
  inline void setIdhistorial(string a){idhistorial_=a;};
  inline void setCP(int a){CP_=a;};
  inline void setFecha(string a){fechanacimiento_=a;};
  inline void setTelefono(string a){telefono_=a;};

};

#endif
