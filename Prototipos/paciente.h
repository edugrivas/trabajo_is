#ifndef PACIENTE_H
#define PACIENTE_H
#include <string>
#include <list>
class Paciente{
private:
  string nombre_;
  string apellidos_;
  string DNI_;
  string fechanacimiento_;
  int CP_;
  int idhistorial_;
  string telefono_;
  list <Cita> listacitas_;
  list <Tratamiento> listatratamientos_;
public:
  Paciente(string nombre, string apellidos,string DNI, int idhistorial,string fechanacimiento = "",int CP = 0, string telefono = "");
  inline string getNombre() const {return nombre_;};
  inline string getApellidos() const {return apellidos_;};
  inline string getFecha() const {return fechanacimiento_;};
  inline string getTelefono() const {return telefono_;}
  inline int getCP() const {return CP_;};
  inline int getIdhistorial() const {return idhistorial_;};
  inline void setNombre(string a) {nombre_ = a;}
  inline void setApellidos(string a) {apellidos_ = a;}
  void setCP(int a);
  void setFecha(string a);
  void setTelefono(string a);
};
#endif;
