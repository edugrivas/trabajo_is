#ifndef CITA_H
#define CITA_H
#include <string>
#include <cstdio>
#include <cstdlib>

class Cita {
private:
int codigo_;
string fecha_;
string hora_;
string doctor_;

public:
	Cita(int codigo,string fecha,string hora);
	inline int getCodigo()const {return codigo_;};
	inline void setCodigo(int a){ codigo_=a;};
	inline string getFecha()const {return fecha_;};
	inline void setFecha(string a){fecha_=a;};
	inline string getHora()const{return hora_};
	inline void setHora(string a){hora_=a;};
	inline string getDoctor()const { return doctor_;};
	inline void setDoctor(string a){doctor_=a;};
};
#endif
