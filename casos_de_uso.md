## Casos de uso
# Añadir paciente
**ID: 001**
### Descripción: El sistema permite añadir una nueva persona registrada como paciente.

**Actores principales:** Secretaría.

**Actores secundarios:** Pacientes.

 **Condiciones a cumplir:**

El paciente debe como mínimo recibir una consulta para constar en el sistema.

No debe haber registros suyos previos.

 **Actividad principal:**

Se pide al usuario los datos del paciente a introducir.

Se compueba que no existe dicha persona en los registros.

Se guarda la información.

 **Condiciones que se cumplen:**

El paciente añadido aparacerá en los registros del sistema.

Su información será constante aunque podrá ser modificada más adelante.

**Recursos auxiliares:**

Si algunos de los campos introducidos a la hora de añadir al usuario son incorrectos, aparecerá el mensaje de error.

# Búsqueda de paciente 
**ID: 002**

### Descripción: Nuestro sistema permite encontrar a la persona deseada a base de introducir alguno de sus datos

**Actores principales:** Secretaría

**Actores secundarios:** Pacientes a buscar

**Condiciones a cumplir:**

La persona a buscar debe estar registrada en el sistema, de lo contrario dará error.

**Actividad principal:**

El usuario debe introducir los datos de la persona a buscar en el sistema.

Los datos aparecen en pantalla.

**Condiciones que se cumplen:**

El sistema analiza y encuentra los datos buscados.

**Recursos auxiliares**

Si la persona en cuestión no se encuentra registrada en el sistema , aparece un mensaje de error.

