#include <iostream>
#include <cstring>
#include <list>
#include <vector>
#include "clinica.h"
#include "paciente.h"
#include "cita.h"
#include "tratamiento.h"
using namespace std;

int main(){
	ListaPaciente aux3;
int x=0;
string aux6;
aux3.leePacientes();
aux3.leeCitas();
aux3.leeTratamientos();
while(x!=6){
cout<<"MENU INTERFAZ DE LA CLINICA"<<endl;
cout<<"_____________________________________"<<endl;
cout<<"_____________________________________"<<endl;
cout<<"1.Añadir paciente a la base de datos"<<endl;
cout<<"2.-Buscar paciente en la base de datos"<<endl;
cout<<"3.-Consultar cita medica"<<endl;               //interfaz
cout<<"4.-Seleccionar paciente"<<endl;
cout<<"5.-Listado de todos los pacientes"<<endl;
cout<<"6.-Salir del programa"<<endl;
cout<<"_____________________________________"<<endl;
cout<<"_____________________________________"<<endl;
cin>>x;
system("clear");
if(x==1){
string nombre1,apellidos1,DNI,aux5; //variables add paciente
string idhistorial;   //id paciente
cout<<"Introduce el nombre del paciente"<<endl;
cin>>nombre1;
cout<<"Introduce los apellidos del paciente"<<endl; //parametros obligatorios
cin>>apellidos1;
cout<<"Introduce el dni del paciente"<<endl;
cin>>DNI;
aux5=DNI.substr(3,2);
idhistorial=aux5;  //un simple id
if(1!=aux3.anadepaciente(nombre1,apellidos1,DNI,idhistorial)){cout<<"error"<<endl;}
else cout<<"Paciente añadido con exito"<<endl;
system("wait");
system("clear");
}
if(x==2)
{
	string aux7;
	int ayuda=0;
cout<<"Indique el DNI del paciente"<<endl;
cin>>aux7;
if(aux3.checkDNI(aux7)==1)
{
aux3.mostrarpaciente(aux7);
cout<<"\n Desea modifica este paciente? 0/1: ";
cin>>ayuda;
cout<<"\n";
if(ayuda==1){x=4; aux6=aux7;}  //Establezco valores para el paciente

}
else cout<<"No encontrado\n"<<endl;

}
if(x==3){
	string aux8;
	cout<<"Introduce el DNI del paciente de la cita"<<endl;
	cin>>aux8;
	aux3.mostrarcitasdepaciente(aux8);

}
if(x==5){
aux3.mostrarpacientes();
cout<<"\n\n\n";


}







if(x==4){
int aux2=0;
cout<<"Indique el DNI del paciente"<<endl;
cin>>aux6;
system("clear");
if(aux3.checkDNI(aux6)==1)
								{


while(aux2!=7)
{
cout<<"Panel de control del paciente :    "<<aux6<<endl;
cout<<"_______________________________________________"<<endl;
cout<<"_______________________________________________"<<endl;
cout<<"1.-Añadir tratamiento"<<endl;
cout<<"2.-Añadir cita médica"<<endl;
cout<<"3.-Ver historial medico"<<endl;
cout<<"4.-Ver citas médicas"<<endl;
cout<<"4.-Ver tratamientos"<<endl;
cout<<"5.-Modificar datos del paciente"<<endl;
cout<<"6.-Eliminar paciente de la base de datos"<<endl;
cout<<"7.-Volver atras"<<endl;
cout<<"_______________________________________________"<<endl;
cout<<"_______________________________________________"<<endl;
cin>>aux2;
system("clear");
if(aux2==6){
	int error;
	Paciente paciente("hola","hola",aux6,"hola");
	Cita cita("hola","hola","hola",aux6);
	Tratamiento tratamiento(aux6,5,"xd","hola","hola");
	for(int masivo=0;masivo<20;masivo++){
	error=aux3.deletePaciente(paciente);
	error=aux3.deleteCitas(cita);                 //Borra los tratamientos y Citas de 20 en 20
	error=aux3.deleteTratamientos(tratamiento);
}
	if(error==2){ cout<<"Eliminado correctamente\n"<<endl;}
}
if(aux2==2){
	string fecha,hora,doctor; //variables add paciente
string codigo;
cout<<"Introduce la fecha"<<endl;
cin>>fecha;
cout<<"Introduce la hora"<<endl; //parametros obligatorios
cin>>hora;
cout<<"Introduce el doctor"<<endl;
cin>>doctor;
codigo=aux6.substr(3,2)+fecha.substr(1,1)+doctor.substr(1,1);
	Cita cita2(codigo,fecha,hora,aux6,doctor);
	aux3.addCita(cita2);
	cout<<"Cita añadida\n"<<endl;
}
if(aux2==1){
	string duracion,doctorquereceta,medicamento; //variables add paciente
int cantidaddiaria;
cout<<"Introduce el nombre del medicamento"<<endl;
cin>>medicamento;
cout<<"Introduce la duracion en numero de dias"<<endl; //parametros obligatorios
cin>>duracion;
cout<<"Introduce el doctor que la receta"<<endl;
cin>>doctorquereceta;
	Tratamiento tratamiento2(aux6,cantidaddiaria,duracion,doctorquereceta,medicamento);
	aux3.addTratamiento(tratamiento2);
	cout<<"Tratamiento anadido con exito\n"<<endl;
}





