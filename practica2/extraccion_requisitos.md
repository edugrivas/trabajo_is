# Documento de extracción de requisitos
## Partes interesadas

Las partes interesadas serán:
- El secretario.
- La doctora de una clinica.
- Desarrolladores del grupo 14.

## Datos almacenados

El secretario y la doctora necesita que se almacenen los siguientes datos dentro de la aplicación:

- De los pacientes: 
  * Nombre y apellidos.
  * Dirección Postal.
  * Teléfono.
  * Fecha de nacimiento.
  * Privado o por Mutua.
  * Citas.
  * Tratamiento.
  * Historial médico.
  
- Del tratamiento:
  * Rutina.
  * Medicación.
  * Duración.
  
- Del historial: 
  * Clase enfermedad.
  * Fecha.
  
- De las citas:
  * Fecha y hora.
  * Duracion.
  * Requisitos.
  
## Requisitos funcionales

  * La aplicación debe poder realizar las siguientes acciones para todos los usuarios:

  * Añadir nuevo paciente
  * Añadir nueva cita
  * Añadir nuevo tratamiento a paciente
  * Añadir nueva entrada del historial.
  * Mostrar citas
  * Mostrar lista con pacientes
  * Mostrar toda la información del paciente seleccionado
  * Modificar paciente
  * Modificar tratamiento
  * Búsqueda por nombre (opcional: busqueda por otros campos)
  * Borrar paciente
  * Mover cita
  * Cancelar cita
  * Consultar citas de hoy
  * Consultar citas de un paciente
  * Consultar historial médico de un paciente
  * Consultar tratamientos de un paciente

  
  

## Requisitos no funcionales
  * La aplicación debe estar en idioma español.
  * La aplicación debe ser desarrollada para funcionar en sistemas Linux.
  * La aplicación constará con una interfaz de consola. En el caso de que se pueda crear en entorno gráfico se hará.
  * La aplicación debe estar programada en C++.

## Prioridad de los requisitos
  El sistema de prioridades de nuestros requisitos sigue el siguiente orden:

    1. Creación de pacientes.
    2. Concertar una cita.
    3. Búsqueda de pacientes.
    4. Añadir una cita.
    5. Modificación de los datos de los pacientes.
    6. Eliminar pacientes.
    7. Ver historial médico.


    

