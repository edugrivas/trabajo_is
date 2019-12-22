#ifndef CITA_H
#define CITA_H
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;
class Cita {
private:
string codigo_;
string fecha_;
string hora_;
string doctor_;
string dni_;

public:
	Cita(string codigo,string fecha,string hora,string dni,string doctor="");
	inline string getCodigo()const {return codigo_;};
	inline void setCodigo(string a){ codigo_=a;};
	inline string getFecha()const {return fecha_;};
	inline void setFecha(string a){fecha_=a;};
	inline string getHora()const{return hora_;};
	inline void setHora(string a){hora_=a;};
	inline string getDoctor()const { return doctor_;};
	inline void setDoctor(string a){doctor_=a;};
	inline string getDNI()const { return dni_;};
	inline void setDNI(string a){dni_=a;};
};
#endif
