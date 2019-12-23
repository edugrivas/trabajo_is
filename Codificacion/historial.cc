#include "historial.h"

void Historial::addCitahistorial(Cita aux)
{

	historialcitas_.push_back(aux);

}
   void Historial::addTratamientohistorial(Tratamiento aux)
   {

   	historialtratamientos_.push_back(aux);
   }


void Historial::leehistorialCitas()
{
historialcitas_.clear();
historialcitas_.begin();
Cita auxt("hola","hola","hola","hola"); //Tengo que iniciar así por el diseño de Paciente

char codigo[20],fecha[20],hora[20],dni[20];
char doctor[20];



ifstream file;
	
file.open("HistorialCitas.txt"); //Abro el fichero para leer
if(file.is_open()){//Si el fichero efectivamente se abrió...
while(file.getline(codigo,20,',')){//Mientras se pueda obtener datos...
	file.getline(fecha,20,',');
	file.getline(hora,20,',');
	file.getline(dni,20,',');
	file.getline(doctor,20,'\n');//Obtengo los datos en cada variable
	auxt.setDNI(dni);
	auxt.setCodigo(codigo);
	auxt.setHora(hora);
	auxt.setFecha(fecha);
	auxt.setDoctor(doctor);
	
	
	
	historialcitas_.push_back(auxt);  //Lo meto en la lista
}
}
file.close();
}


void Historial::escribehistorialCitas()
{
ofstream f1("HistorialCitas.txt"); //Abro el fichero para escribir

	list <Cita> :: iterator asu;
//Recorro con un iterador la lista
	for(asu=historialcitas_.begin() ; asu!=historialcitas_.end() ; asu++) 
	{
		f1 << (*asu).getCodigo() << "," << (*asu).getFecha();		 //Voy escribiendo los pacientes
		f1 << "," << (*asu).getHora() << "," << (*asu).getDNI();
		f1 << "," << (*asu).getDoctor() <<endl;
	}

	f1.close();
}



void Historial::leehistorialTratamientos()
{
historialtratamientos_.clear();
historialtratamientos_.begin();
Tratamiento auxt("hola",5,"xd","hola","hola"); //Tengo que iniciar así por el diseño de Paciente

char dni[20],doctorquereceta[20],duracion[20];
char cantidaddiaria[20],medicamento[20];



ifstream file;
file.open("HistorialTratamientos.txt"); //Abro el fichero para leer
if(file.is_open()){//Si el fichero efectivamente se abrió...
while(file.getline(dni,20,',')){//Mientras se pueda obtener datos...
	file.getline(cantidaddiaria,20,',');
	file.getline(duracion,20,',');
	file.getline(doctorquereceta,20,',');
	file.getline(medicamento,20,'\n');
	//Obtengo los datos en cada variable
	auxt.setDNI(dni);
	auxt.setCantidaddiaria(atoi(cantidaddiaria));
	auxt.setDuracion(duracion);
	auxt.setDoctorquereceta(doctorquereceta);
	auxt.setMedicamento(medicamento);
	
	
	
	historialtratamientos_.push_back(auxt);  //Lo meto en la lista
}
}
file.close();
}


void Historial::escribehistorialTratamientos()
{
ofstream f1("HistorialTratamientos.txt"); //Abro el fichero para escribir

	list <Tratamiento> :: iterator ja;
//Recorro con un iterador la lista
	for(ja=historialtratamientos_.begin() ; ja!=historialtratamientos_.end() ; ja++) 
	{
		f1 << (*ja).getDNI() << "," << (*ja).getCantidaddiaria();		 //Voy escribiendo los tratamientos
		f1 << "," << (*ja).getDuracion() << "," << (*ja).getDoctorquereceta()<<",";
		f1 << (*ja).getMedicamento() <<endl;
	}

	f1.close();
}



void Historial::mostrarcitashistorial(string dni)
{
   	cout<<"\n\n";
list <Cita> :: iterator kas;
for(kas=historialcitas_.begin(); kas!=historialcitas_.end(); kas++){
	if((*kas).getDNI()==dni){ 
cout<<"Codigo:    "<<(*kas).getCodigo()<<"    Fecha:     "<<(*kas).getFecha()<<"    Hora:      "<<(*kas).getHora()<<"   DNI:     "<<(*kas).getDNI()<<"    Doctor:     "<<(*kas).getDoctor()<<endl;	
}
						}
					
}

void Historial::mostrartratamientoshistorial(string dni)
{
	cout<<"\n\n";
	list <Tratamiento> :: iterator da;
	for(da=historialtratamientos_.begin(); da!=historialtratamientos_.end(); da++){
		if((*da).getDNI()==dni){
			cout<<"DNI:     "<<(*da).getDNI()<<"     Cantidad diaria:       "<<(*da).getCantidaddiaria()<<"     Duracion:            "<<(*da).getDuracion()<<"    Doctor:         "<<(*da).getDoctorquereceta()<<"     Medicamento:           "<<(*da).getMedicamento()<<endl;
		}
	}
}
