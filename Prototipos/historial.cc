#include "historial.h"
Historial::Historial(){
	registrocitas_.erase();
	registrotratamientos_.erase();
}

void Historial::setNuevacita(Cita aux){
registrocitas_.push_back(aux);





}


void Historial::setNuevotratamiento(Tratamiento aux){
	registrotratamientos_.push_back(aux);


}
void Historial::mostrarhistorial(){
list <Cita>::iterator C;
for(C=registrocitas_.front(); C!=registrocitas_.end(); C++){
cout<<"Codigo: "<<(*C).getCodigo()<<"\t"<<"Fecha: "<<(*C).getFecha()<<"\t"<<"Doctor: "<<(*C).getDoctor()<<endl;

}
list <Tratamiento>::iterator T;
for(T=registrotratamientos_.front(); T!=registrotratamientos_.end(); T++){
cout<<"Codigo: "<<(*T).getCodigo()<<"\t"<<"Cantidad diaria: "<<(*T).getCantidaddiaria()<<"\t"<<"Doctor que receta: "<<(*T).getDoctorquereceta()<<endl;

}



}
