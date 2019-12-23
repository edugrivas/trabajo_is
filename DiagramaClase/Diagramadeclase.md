## **Clase paciente**
La clase paciente contendra los pacientes y sus datos.

**Datos**

Nombre | Tipo | Descripción
-- | :--: | :--
Apellidos | string | No puede estar vacio ya que guarda los apellidos del paciente.
Nombre | string | No puede estar vacio ya que guarda el nombre del paciente.
CP | int | Guarda el codigo postal del paciente.
Fecha de nacimiento | string | Guarda la fecha de nacimiento de tal modo: día/mes/año. Ejemplo: 05/12/2005.
DNI | string | Guarda el numero DNI del paciente de tal modo: XXXXXXXXA. Ejemplo: 31875389Z.
idhistorial | string | Guarda el numero id del historial del paciente.
telefono | string | Guarda el numero de telefono del paciente de tal modo: 999-999-999. Ejemplo: 634766631.

**Métodos**

Función | Descripción
-- | :--
getNombre() | Esta funcion hace de observador del parametro nombre.
getApellidos() | Esta funcion hace de observador del parametro apellidos.
getFecha() | Esta funcion hace de observador del parametro fecha.
getTelefono() | Esta funcion hace de observador del parametro Telefono.
getDNI() | Esta función hace de observador del parametro DNI.
getCP() | Esta funcion hace de observador del parametro CP.
getidhistorial() | Esta funcion hace de observador del parametro idhistorial.
setNombre() | Esta funcion hace de modificador del parametro Nombre.
setApellidos() | Esta funcion hace de modificador del parametro Apellidos.
setDNI() | Esta funcion hace de modificador del parametro DNI.
setIdhistorial() | Esta funcion hace de modificador del parametro Idhistorial.
setCP() | Esta funcion hace de modificador del parametro CP.
setFecha() | Esta funcion hace de modificador del parametro Fecha.
setTelefono() | Esta funcion hace de modificador del parametro Telefono.

## **Clase citas**
La clase citas contendrá las citas de todos los pacientes a la hora que se realizan, cuanto duran y el doctor que las lleva a cabo.
**Datos**

Nombre | Tipo | Descripción
-- | :--: | :--
codigo | int | Guarda el identificador de las citas y es único.
Fecha | string | Guarda la fehca de la cita de tal modo: día/mes/año. Ejemplo: 28/12/2019.
Hora | string | Guarda la hora de la cita. Ejemplo: 18:00.
DNI | string | Guarda el dni del paciente de tal modo: XXXXXXXXA. Ejemplo:31875329Z.
Doctor | string | Guarda el doctor que llevara a cabo la cita.

**Métodos**

Función | Descripción
-- | :--
getCodigo() | Esta funcion hace de observador del parametro Codigo.
getFecha() | Esta funcion hace de observador del parametro Fecha.
getHora() | Esta funcion hace de observador del parametro Hora.
getDNI() | Esta funcion hace de observador del parametro Dni.
getDoctor() | Esta funcion hace de observador del parametro Doctor.
setCodigo() | Esta funcion hace de modificador del parametro Codigo.
setFecha() | Esta funcion hace de modificador del parametro Fecha.
setHora() | Esta funcion hace de modificador del parametro Hora.
setDni() | Esta funcion hace de modificador del parametro Dni.
setDoctor() | Esta funcion hace de modificador del parametro Doctor.


## **Clase Tratamiento**
La clase tratamiento contendra los tratamientos de los pacientes y todos los datos necesarios de estos tratamientos.

**Datos**

Nombre | Tipo | Descripción
-- | :--: | :--
Dni | string | Guarda el dni del paciente.
Cantidaddiaria | string | Guarda la porcion de medicamento que tiene que tomar el paciente.
Duracion | string | Guarda la duracion de tiempo en que se lleva a cabo el tratamiento.
Doctorquereceta | string | Guarda el nombre del doctor que receta el tratamiento.
Medicamento | string | Guarda el medicamento que debe tomar el paciente.

**Métodos**

Función | Descripción
-- | :--
getDNI() | Esta funcion hace de observador del parametro DNI.
getCantidaddiaria() | Esta funcion hace de observador del parametro Cantidadiaria.
getDuracion() | Esta funcion hace de observador del parametro Duracion.
getDoctorquereceta() | Esta funcion hace de observador del parametro Doctorquereceta.
getMedicamento() | Esta funcion hace de observador del parametro Medicamento.
setDNI() | Esta funcion hace de modificador del parametro DNI. 
setCantidaddiaria() | Esta funcion hace de modificador del parametro cantidaddiaria.
setDuracion() | Esta funcion hace de modificador del parametro Duracion.
setDoctorquereceta() | Esta funcion hace de modificador del parametro Doctorquereceta.
setMedicamento() | Esta funcion hace de modificador del parametro Medicamento.


## **Clase historial**
La clase historial guarda el historial medico del paciente.

**Datos**

Nombre | Tipo | Descripción
-- | :--: | :--
inicializer | int | Guarda el valor de inicio.

**Métodos**

Función | Descripción
-- | :--
leehistorialcitas() | Esta funcion lee el historial de citas del paciente.
escribehistorialTratamientos() | Esta función escribe el historial de tratamientos del paciente.
escribehistorialCitas() | Esta funcion escribe el historial de citas del paciente.
addCitahistorial() | Esta funcion añade una cita al historial medico del paciente.
addTratamientohistorial() | Esta funcion añade un tratamiento al historial medico del paciente.
mostrarcitashistorial() | Esta funcion muestra las citas del historial médico del paciente.
mostrartratamientoshistorial() | Esta funcion muestra los tratamientos del historial medico del paciente.



## **Clase clínica**
La clase clínica

**Datos**

Nombre | Tipo | Descripción
-- | :--: | :--
contadorpacientes | int |  Guarda el valor de un contador de pacientes de la clínica.

**Métodos**

Función | Descripción
-- | :--
escribePacientes() | .

