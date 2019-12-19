#include "clinica.h"
bool ListaPaciente::anadepaciente(string nombre1,string apellidos1, string DNI, string idhistorial){
Paciente aux(nombre1,apellidos1,DNI,idhistorial);
if(aux.getNombre()==nombre1){ addPaciente(aux); return 1;}
else return 0;
}


void ListaPaciente::escribePacientes(){
ofstream f1("BaseDeDatos.txt"); //Abro el fichero para escribir

	list <Paciente> :: iterator i;
//Recorro con un iterador la lista
	for(i=pacientes_.begin() ; i!=pacientes_.end() ; i++) 
	{
		f1 << (*i).getNombre() << "," << (*i).getApellidos();		 //Voy escribiendo los pacientes
		f1 << "," << (*i).getDNI() << "," << (*i).getIdhistorial();
		f1 << "," << (*i).getFecha() << "," << (*i).getCP();
		f1 << "," << (*i).getTelefono() <<endl;
	}

	f1.close();
}

void ListaPaciente::mostrarpacientes(){
	list <Paciente> :: iterator j;
	cout<<"\n\n";
for(j=pacientes_.begin(); j!=pacientes_.end(); j++){
	mostrarpaciente2((*j).getDNI());
}


}
void ListaPaciente::mostrarpaciente2(string dni){
list <Paciente> :: iterator j;
for(j=pacientes_.begin(); j!=pacientes_.end(); j++){
	if((*j).getDNI()==dni){ 
cout<<"Nombre:      "<<(*j).getNombre()<<"      Apellidos:      "<<(*j).getApellidos()<<"      DNI:       "<<(*j).getDNI()<<"      Fecha de nacimiento:      "<<(*j).getFecha()<<"       Codigo Postal:     "<<(*j).getCP()<<"      Telefono:     "<<(*j).getTelefono()<<endl;
	}
}
}









void ListaPaciente::leePacientes()
{
pacientes_.clear();
pacientes_.begin();
Paciente aux("hola","hola","hola","hola"); //Tengo que iniciar así por el diseño de Paciente


char nombre[20],apellidos[20],dni[20];
char idhistorial[20],fechanacimiento[20],CP[20],telefono[20];



ifstream file;
file.open("BaseDeDatos.txt"); //Abro el fichero para leer
if(file.is_open()){//Si el fichero efectivamente se abrió...
while(file.getline(nombre,20,',')){//Mientras se pueda obtener datos...
	file.getline(apellidos,20,',');
	file.getline(dni,20,',');
	file.getline(idhistorial,20,',');
	file.getline(fechanacimiento,20,',');
	file.getline(CP,20,',');
	file.getline(telefono,20,'\n');//Obtengo los datos en cada variable
	aux.setDNI(dni);
	aux.setCP(atoi(CP));
	aux.setNombre(nombre);
	aux.setIdhistorial(idhistorial);
	aux.setApellidos(apellidos);
	aux.setFecha(fechanacimiento);
	aux.setTelefono(telefono);
	//P4
	
	//P4
	pacientes_.push_back(aux);  //Lo meto en la lista
}
}
file.close();
}

   void ListaPaciente::addPaciente(Paciente aux){
pacientes_.push_back(aux);


   }

   bool ListaPaciente::checkDNI(string dni){
list <Paciente> :: iterator j;
for(j=pacientes_.begin(); j!=pacientes_.end(); j++){
	if((*j).getDNI()==dni){ return 1;}
}
return 0;


   }



void ListaPaciente::mostrarpaciente(string dni){
   	cout<<"\n\n";
list <Paciente> :: iterator j;
for(j=pacientes_.begin(); j!=pacientes_.end(); j++){
	if((*j).getDNI()==dni){ 
cout<<"Nombre:      "<<(*j).getNombre()<<"     Apellidos:      "<<(*j).getApellidos()<<"     DNI:       "<<(*j).getDNI()<<"     Fecha de nacimiento:      "<<(*j).getFecha()<<"     Codigo Postal:     "<<(*j).getCP()<<"     Telefono:     "<<(*j).getTelefono()<<endl;
	}
}



   }




void ListaPaciente::leeCitas()
{
listacitas_.clear();
listacitas_.begin();
Cita aux("hola","hola","hola","hola"); //Tengo que iniciar así por el diseño de Paciente

char codigo[20],fecha[20],hora[20],dni[20];
char doctor[20];



ifstream file;
file.open("CitasClinica.txt"); //Abro el fichero para leer
if(file.is_open()){//Si el fichero efectivamente se abrió...
while(file.getline(codigo,20,',')){//Mientras se pueda obtener datos...
	file.getline(fecha,20,',');
	file.getline(hora,20,',');
	file.getline(dni,20,',');
	file.getline(doctor,20,'\n');//Obtengo los datos en cada variable
	aux.setDNI(dni);
	aux.setCodigo(codigo);
	aux.setHora(hora);
	aux.setFecha(fecha);
	aux.setDoctor(doctor);
	//P4
	
	//P4
	listacitas_.push_back(aux);  //Lo meto en la lista
}
}
file.close();
}


void ListaPaciente::escribeCitas(){
ofstream f1("CitasClinica.txt"); //Abro el fichero para escribir

	list <Cita> :: iterator i;
//Recorro con un iterador la lista
	for(i=listacitas_.begin() ; i!=listacitas_.end() ; i++) 
	{
		f1 << (*i).getCodigo() << "," << (*i).getFecha();		 //Voy escribiendo los pacientes
		f1 << "," << (*i).getHora() << "," << (*i).getDNI();
		f1 << "," << (*i).getDoctor() <<endl;
	}

	f1.close();
}
    bool ListaPaciente::checkTratamiento(string dni){
list <Tratamiento> :: iterator j;
for(j=listatratamientos_.begin(); j!=listatratamientos_.end(); j++){
	if((*j).getDNI()==dni){ return 1;}
}
return 0;


    }

 bool ListaPaciente::checkCita(string dni){
list <Cita> :: iterator j;
for(j=listacitas_.begin(); j!=listacitas_.end(); j++){
	if((*j).getDNI()==dni){ return 1;}
}
return 0;


   }

  void ListaPaciente::mostrartratamientosdepaciente(string dni){
	if(checkTratamiento(dni)==1){
   	cout<<"\n\n";
list <Tratamiento> :: iterator j;
for(j=listatratamientos_.begin(); j!=listatratamientos_.end(); j++){
	if((*j).getDNI()==dni){ 
cout<<"DNI:     "<<(*j).getDNI()<<"     Cantidad diaria:       "<<(*j).getCantidaddiaria()<<"     Duracion:            "<<(*j).getDuracion()<<"    Doctor:         "<<(*j).getDoctorquereceta()<<"     Medicamento:           "<<(*j).getMedicamento()<<endl;
	}
}
						}
						else cout<<"No tiene tratamientos este paciente\n";
}



  

void ListaPaciente::mostrarcitasdepaciente(string dni){
	if(checkCita(dni)==1){
   	cout<<"\n\n";
list <Cita> :: iterator j;
for(j=listacitas_.begin(); j!=listacitas_.end(); j++){
	if((*j).getDNI()==dni){ 
cout<<"Codigo:    "<<(*j).getCodigo()<<"    Fecha:     "<<(*j).getFecha()<<"    Hora:      "<<(*j).getHora()<<"   DNI:     "<<(*j).getDNI()<<"    Doctor:     "<<(*j).getDoctor()<<endl;

	}
}
						}
						else cout<<"No tiene citas este paciente\n";
}

    int ListaPaciente::deletePaciente(Paciente a)
{
	if(pacientes_.empty()==1) return -1;

	list <Paciente> :: iterator i;      
	for(i=pacientes_.begin() ; i != pacientes_.end() ; i++) {
		if((*i).getDNI() == a.getDNI()){
			pacientes_.erase(i);	 //Mismo funcionamiento que el anterior	
			return 2;
		}
	}

	return 1;	
}
    int ListaPaciente::deleteCitas(Cita a)
{
	if(listacitas_.empty()==1) return -1;

	list <Cita> :: iterator i;      
	for(i=listacitas_.begin() ; i != listacitas_.end() ; i++) {
		if((*i).getDNI() == a.getDNI()){
			listacitas_.erase(i);	 //Mismo funcionamiento que el anterior	
		return 2;
		}
	}

	return 1;	
}

    int ListaPaciente::deleteTratamientos(Tratamiento a)
{
	if(listatratamientos_.empty()==1) return -1;

	list <Tratamiento> :: iterator i;      
	for(i=listatratamientos_.begin() ; i != listatratamientos_.end() ; i++) {
		if((*i).getDNI() == a.getDNI()){
			listatratamientos_.erase(i);	 //Mismo funcionamiento que el anterior	
			return 2;
		}
	}

	return 1;	
}

void ListaPaciente::addCita(Cita aux){

	listacitas_.push_back(aux);
	

}
   void ListaPaciente::addTratamiento(Tratamiento aux){
   	listatratamientos_.push_back(aux);
 
   }








void ListaPaciente::leeTratamientos()
{
listatratamientos_.clear();
listatratamientos_.begin();
Tratamiento aux("hola",5,"xd","hola","hola"); //Tengo que iniciar así por el diseño de Paciente

char dni[20],doctorquereceta[20],duracion[20];
char cantidaddiaria[20],medicamento[20];



ifstream file;
file.open("TratamientosClinica.txt"); //Abro el fichero para leer
if(file.is_open()){//Si el fichero efectivamente se abrió...
while(file.getline(dni,20,',')){//Mientras se pueda obtener datos...
	file.getline(cantidaddiaria,20,',');
	file.getline(duracion,20,',');
	file.getline(doctorquereceta,20,',');
	file.getline(medicamento,20,'\n');
	//Obtengo los datos en cada variable
	aux.setDNI(dni);
	aux.setCantidaddiaria(atoi(cantidaddiaria));
	aux.setDuracion(duracion);
	aux.setDoctorquereceta(doctorquereceta);
	aux.setMedicamento(medicamento);
	//P4
	
	//P4
	listatratamientos_.push_back(aux);  //Lo meto en la lista
}
}
file.close();
}


void ListaPaciente::escribeTratamientos(){
ofstream f1("TratamientosClinica.txt"); //Abro el fichero para escribir

	list <Tratamiento> :: iterator i;
//Recorro con un iterador la lista
	for(i=listatratamientos_.begin() ; i!=listatratamientos_.end() ; i++) 
	{
		f1 << (*i).getDNI() << "," << (*i).getCantidaddiaria();		 //Voy escribiendo los tratamientos
		f1 << "," << (*i).getDuracion() << "," << (*i).getDoctorquereceta()<<",";
		f1 << (*i).getMedicamento() <<endl;
	}

	f1.close();
}

int ListaPaciente::borracita(string cod)
{
	if(listacitas_.empty()==1) return -1;


	list <Cita> :: iterator i;      
	for(i=listacitas_.begin() ; i != listacitas_.end() ; i++) {
		if((*i).getCodigo() == cod){
			listacitas_.erase(i);	 //Mismo funcionamiento que el anterior	
		return 2;
		}
	}

	return 1;	
}

int ListaPaciente::borratratamiento(string dni,string medicamento)
{
	if(listatratamientos_.empty()==1) return -1;


	list <Tratamiento> :: iterator i;      
	for(i=listatratamientos_.begin() ; i != listatratamientos_.end() ; i++) {
		if(((*i).getDNI() == dni)&&((*i).getMedicamento()==medicamento)){
			listatratamientos_.erase(i);	 //Mismo funcionamiento que el anterior	
		return 2;
		}
	}

	return 1;	
}

 bool ListaPaciente::anadepaciente2(string nombre1,string apellidos1, string DNI, string idhistorial,string fech,int cp, string telf){
Paciente aux(nombre1,apellidos1,DNI,idhistorial,fech,cp,telf);
if(aux.getNombre()==nombre1){ addPaciente(aux); return 1;}
else return 0;
}
