#ifndef TRATAMIENTO_H
#define TRATAMIENTO_H
#include <cstring>
#include <iostream>
using namespace std;
class Tratamiento {

private:

string dni_;
int cantidaddiaria_;
string duracion_;
string doctorquereceta_;
string medicamento_;

public:
	Tratamiento(string dni,int cantidaddiaria,string duracion, string doctorquereceta,string medicamento);
	inline string getDNI()const {return dni_;};
	inline void setDNI(string a){ dni_=a;};
	inline int getCantidaddiaria()const {return cantidaddiaria_;};
	inline void setCantidaddiaria(int a){cantidaddiaria_=a;};
	inline string getDuracion()const{return duracion_;};
	inline void setDuracion(string a){duracion_=a;};
	inline string getDoctorquereceta()const { return doctorquereceta_;};
	inline void setDoctorquereceta(string a){doctorquereceta_=a;};
		inline string getMedicamento()const{return medicamento_;};
	inline void setMedicamento(string a){medicamento_=a;};

};

#endif
