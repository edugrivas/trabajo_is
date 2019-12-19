#ifndef CLINICA_H
#define CLINICA_H
#include <string>
#include <list>
#include "paciente.h"
#include "cita.h"
#include "tratamiento.h"
#include <iostream>
#include <fstream>
using namespace std;
class ListaPaciente{
private:
	list <Paciente> pacientes_;
int contadorpacientes_;
  list <Cita> listacitas_;
  list <Tratamiento> listatratamientos_;

public:
	ListaPaciente(int contadorpacientes=0){contadorpacientes_=contadorpacientes;}
	void escribePacientes();
	void leePacientes();
   void addPaciente(Paciente aux);
bool anadepaciente(string nombre1,string apellidos1, string DNI, string idhistorial);
 bool checkDNI(string dni);
    void mostrarpaciente(string dni);
    void mostrarpacientes();
    void leeCitas();
    void escribeCitas();
    void mostrarcitasdepaciente(string dni);
    bool checkCita(string dni);
    bool checkTratamiento(string dni);
    void mostrarpaciente2(string dni);
    int deletePaciente(Paciente a);
    int deleteCitas(Cita a);
    int deleteTratamientos(Tratamiento a);
    void addCita(Cita aux);
    void addTratamiento(Tratamiento aux);
    void escribeTratamientos();
    void leeTratamientos();
    void mostrartratamientosdepaciente(string dni);

    //Modificar citas y tratamientos
    int borracita(string cod);
    int borratratamiento(string dni,string medicamento);
    bool anadepaciente2(string nombre1,string apellidos1, string DNI, string idhistorial,string fech,int cp, string telf);

};







#endif
