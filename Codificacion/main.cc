#include <iostream>
#include <cstring>
#include <list>
#include <vector>
#include "clinica.h"
#include "paciente.h"
#include "cita.h"           //Mis clases
#include "tratamiento.h"
#include "historial.h"
using namespace std;

int main(){
	ListaPaciente aux3;   //auxiliares
	Historial constante;
	string pausa;
int x=0;
string aux6;

aux3.leePacientes();
aux3.leeCitas();
aux3.leeTratamientos();   //Cada que inicia, carga los ficheros de datos
constante.leehistorialCitas();          //Historial independiente
constante.leehistorialTratamientos();
while(x!=6){
	system("clear");
cout<<"MENU INTERFAZ DE LA CLINICA"<<endl;
cout<<endl;
cout<<endl;
cout<<"1.Anadir paciente a la base de datos"<<endl;
cout<<"2.-Buscar paciente en la base de datos"<<endl;
cout<<"3.-Consultar cita medica"<<endl;               //interfaz ciclica
cout<<"4.-Seleccionar paciente"<<endl;
cout<<"5.-Listado de todos los pacientes"<<endl;
cout<<"6.-Salir del programa"<<endl;
cout<<"7.-Mostrar citas diarias"<<endl;

cin>>x;
if(x==1){
string nombre1,apellidos1,DNI,aux5; //variables add paciente
string idhistorial;   //id paciente
cin.clear();
cin.ignore();
cout<<"Introduce los apellidos del paciente"<<endl; //parametros obligatorios
getline(cin,apellidos1);
cout<<"Introduce el nombre del paciente"<<endl;
cin>>nombre1;
cout<<"Introduce el dni del paciente"<<endl;
cin>>DNI;
aux5=DNI.substr(3,2);
idhistorial=aux5;  //un simple id
if(1!=aux3.anadepaciente(nombre1,apellidos1,DNI,idhistorial)){cout<<"error"<<endl;}
else {cout<<"Paciente anadido con exito"<<endl;}
cin.ignore();
cin.get();
}

if(x==2)
{system("clear");
	string aux7;
	int ayuda=0;
cout<<"Indique el DNI del paciente a buscar"<<endl;
cin>>aux7;     
if(aux3.checkDNI(aux7)==1)  //Busco con el dni en la lista de pacientes
{ system("clear");
aux3.mostrarpaciente(aux7);    //muestro el paciente si lo encuentra
cout<<"\n Desea modifica este paciente? 0/1: ";
cin>>ayuda;
cout<<"\n";  //Doy la opcion de ir al paciente
if(ayuda==1){x=4; aux6=aux7;}  //Establezco valores para el paciente a modificar

}
else cout<<"No encontrado\n"<<endl;
cin.ignore();
cin.get();
}
if(x==3){
	string aux8;
	cout<<"Introduce el DNI del paciente de la cita"<<endl;
	cin>>aux8;
	aux3.mostrarcitasdepaciente(aux8);  //Muestro las citas del paciente
cin.ignore();
cin.get();
}
if(x==5){
aux3.mostrarpacientes();  //Muestro todos los pacientes
cout<<"\n\n\n";
cin.ignore();
cin.get();


}
if(x==7)
{ string fecha1;
	cout<<"Introduce la fecha asi: XX/XX/XXXX"<<endl;
	cin>>fecha1;
aux3.mostrarcitasdiarias(fecha1);
cin.ignore();
cin.get();
}







if(x==4){
int aux2=0;
cout<<"Indique el DNI del paciente"<<endl;
cin>>aux6;   //Guardo el dni
if(aux3.checkDNI(aux6)==1)  //compruebo que existe en la base de datos
								{


while(aux2!=7)
{
	system("clear");
cout<<"Panel de control del paciente :    "<<aux6<<endl;
cout<<endl;
cout<<endl;
cout<<"1.-Anadir tratamiento"<<endl;
cout<<"2.-Anadir cita medica"<<endl;
cout<<"3.-Ver historial medico"<<endl;
cout<<"4.-Ver citas medicas"<<endl;   //Interfaz de paciente concreto
cout<<"5.-Ver tratamientos"<<endl;
cout<<"0.-Modificar datos del paciente"<<endl;
cout<<"6.-Eliminar paciente de la base de datos"<<endl;
cout<<"7.-Volver atras"<<endl;
cout<<endl;
cout<<endl;
cin>>aux2;
if(aux2==6){
	int error;
	Paciente paciente("hola","hola",aux6,"hola");
	Cita cita("hola","hola","hola",aux6);         //Objetos de ayuda para borrar
	Tratamiento tratamiento(aux6,5,"xd","hola","hola");  
	error=aux3.deletePaciente(paciente);   
	for(int masivo=0;masivo<20;masivo++){
	aux3.deleteCitas(cita); 
	               //Borra los tratamientos y Citas de 20 en 20
	aux3.deleteTratamientos(tratamiento);
}
	if(error==2){ cout<<"Eliminado correctamente\n"<<endl; }cin.ignore();
cin.get(); 
break;  //para no volver al menú de un usuario eliminado
}
if(aux2==2){
	system("clear");
	string fecha,hora,doctor; //variables add paciente
string codigo;
cout<<"Introduce la fecha"<<endl;
cin>>fecha;
cout<<"Introduce la hora"<<endl; //parametros obligatorios
cin>>hora;
cout<<"Introduce el doctor"<<endl;
cin>>doctor;
codigo=aux6.substr(3,2)+fecha.substr(1,1)+doctor.substr(1,1);  //Esta es la "formula" para generar el codigo, algo basica.
	Cita cita2(codigo,fecha,hora,aux6,doctor);
	aux3.addCita(cita2);  //Añadimos a citas
	constante.addCitahistorial(cita2);  //al historial
	cout<<"Cita anadida\n"<<endl;
cin.ignore();
cin.get();
}
if(aux2==1){
	system("clear");
	string duracion,doctorquereceta,medicamento; //variables de tratamiento
int cantidaddiaria;
cout<<"Introduce el nombre del medicamento"<<endl;
cin>>medicamento;
cout<<"Introduce la duracion en numero de dias"<<endl; //parametros obligatorios
cin>>duracion;
cout<<"Introduce la cantidad diaria"<<endl;
cin>>cantidaddiaria;
cout<<"Introduce el doctor que la receta"<<endl;
cin>>doctorquereceta;
	Tratamiento tratamiento2(aux6,cantidaddiaria,duracion,doctorquereceta,medicamento);  //creamos el tratamiento
	aux3.addTratamiento(tratamiento2);
	constante.addTratamientohistorial(tratamiento2);  //al historial
	system("clear");
	cout<<"Tratamiento anadido con exito\n"<<endl;
cin.ignore();
cin.get();
}
if(aux2==4){
	system("clear");
aux3.mostrarcitasdepaciente(aux6); //mostrar las citas del paciente con dni aux6
cin.ignore();
cin.get();
}
if(aux2==5){
	system("clear");
aux3.mostrartratamientosdepaciente(aux6);  // tratamientos
cin.ignore();
cin.get();
}
if(aux2==3){
	system("clear");
	cout<<"\n Citas registradas en historial: \n"<<endl;
	constante.mostrarcitashistorial(aux6);    
	cout<<"\n \n \n Tratamientos registrados en historial: \n"<<endl;
	constante.mostrartratamientoshistorial(aux6);        //Muestro el historial 
	cout<<"\n\n\n"<<endl;
	cin.ignore();
cin.get();
}
if(aux2==0)
{ system("clear");
	int elegir;  //para movernos por las opciones del secretario.
cout<<"Que quieres modificar: \n 1.-Datos paciente \n 2.-Citas \n3.-Tratamientos"<<endl;
cin>>elegir;
			if(elegir==1)
			{ system("clear");
					Paciente paciente3("hola","hola",aux6,"hola");  //Borro mi paciente antiguo
					aux3.deletePaciente(paciente3);
			string nombre11,apellidos11,DNI1,aux51,fech1,telf1; //variables add paciente
			string idhistorial1;   //id paciente
			int cp1;
			DNI1=aux6;
			cout<<"Introduce el nombre del paciente"<<endl;
			cin>>nombre11;
			cin.clear();
			cin.ignore();
			cout<<"Introduce los apellidos del paciente"<<endl; //parametros obligatorios
			getline(cin,apellidos11);
			cout<<"Introduce la fecha de nacimiento"<<endl;
			cin>>fech1;
			cout<<"Introduce el codigo postal"<<endl;   //Actualizo los datos
			cin>>cp1;
			cout<<"Introduce el telefono"<<endl;
			cin>>telf1;
			aux51=DNI1.substr(3,2);
			idhistorial1=aux51;  //un simple id
			if(1!=aux3.anadepaciente2(nombre11,apellidos11,DNI1,idhistorial1,fech1,cp1,telf1)){cout<<"error"<<endl;}
			else cout<<"Paciente modificado con exito"<<endl;
			cin.ignore();
			cin.get();
			}
			if(elegir==2)
			{ system("clear");
				string cod;
						cout<<"Introduce el codigo de la cita que quieres borrar\n"<<endl;
						cin>>cod;  //borro mi cita
						 aux3.borracita(cod);
						 cout<<"Borrado con exito\n"<<endl;
						 cin.ignore();
						cin.get();




			}
			if(elegir==3){
				system("clear");
				string medicam;
				cout<<"Indica el medicamento del Tratamiento a borrar"<<endl;
				cin>>medicam;            //Si es 3.- Borro mi tratamiento
				aux3.borratratamiento(aux6,medicam);
				cout<<"\n Borrado con exito"<<endl;
				cin.ignore();
				cin.get();
			}



}



}
            					} else { cout<<"Paciente not found\n\n"<<endl; cin.ignore();
										cin.get();}
}
}

constante.escribehistorialTratamientos();
constante.escribehistorialCitas();
aux3.escribePacientes(); //Guardo cuando cierro el programa todos los datos
aux3.escribeCitas();
aux3.escribeTratamientos();

return 0;
}
