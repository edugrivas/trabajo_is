#ifndef TRATAMIENTO_H
#define TRATAMIENTO_H
#include <string>
class Tratamiento {

private:

int codigo_;
int cantidaddiaria_;
int duracion_;
string doctorquereceta_;

public:
	Tratamiento(int codigo,int cantidaddiaria,int duracion, string doctorquereceta);
	inline int getCodigo()const {return codigo_;};
	inline void setCodigo(int a){ codigo_=a;};
	inline string getCantidaddiaria()const {return cantidaddiaria_;};
	inline void setCantidaddiaria(string a){cantidaddiaria_=a;};
	inline string getDuracion()const{return duracion_};
	inline void setDuracion(string a){duracion_=a;};
	inline string getDoctorquereceta()const { return doctorquereceta_;};
	inline void setDoctorquereceta(string a){doctorquereceta_=a;};

};

#endif
