
## Añadir paciente
	- Como doctor quiero agregar pacientes
	- prioridad: 1
### Reverso
	- Añadir paciente y guardarlo en la base de datos.
	
## Concertar cita
	- Como doctor quiero poder concertar citas con un paciente
	- prioridad: 1
	
## Búsqueda de paciente
	- Como doctor quiero buscar pacientes y poder si ha tenido citas antes.
	- prioridad: 2
### Reverso
	- La búsqueda se hará según el nombre y el apellido
	- En el caso de haber varios resultados, se mostrará una lista

## Modificar paciente
	- Como doctor quiero poder modificar los datos de los pacientes
	- prioridad: 2
### Reverso
	- Depende de:
		- Búsqueda de paciente
	- Si se da el caso de que se encuentre mas de un paciente, se mostrara una lista para seleccionar el paciente que se desea modificar


## Eliminar paciente
	- Como doctor quiero poder eliminar completamente el paciente de nuestros registros
	- prioridad: 2
### Reverso
	- Depende de:
		- Búsqueda de paciente
		

## Ver historial médico
	- Como doctor quiero poder consultar los registros de antiguas consultas de un paciente.
	- prioridad: 2
### Reverso
	- Para poder ver el historial médico primero se debe acceder al paciente y despues se podrá ver el historial médico.
	- Depende de:
		- Búsqueda de paciente
