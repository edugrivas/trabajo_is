## Casos de uso
# Añadir paciente
**Opción 1**
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
**Opción 2**

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
# Actualizar paciente
**Opción 3**

### Descripción: El sistema permite cambiar algunos datos de los pacientes

**Actores principales:** Secretaría

**Actores secundarios:** Pacientes a actualizar

**Condiciones a cumplir:**

La persona a buscar debe estar registrada en el sistema, de lo contrario dará error.

El cambio que se desea hacer no debe interferir con el sistema ni con los parámetros a cambiar.

**Actividad principal:**

El usuario debe introducir el identificador de la persona a actualizar, acto seguido , deberá seleccionar el dato a cambiar y rellenarlo con la nueva información.

Aparecerá un mensaje de exito.

Los datos quedarán actualizados.

**Condiciones que se cumplen:**

El sistema tendrá actualizados los datos del paciente.

**Recursos auxiliares**

Si hay algún tipo de conflicto entre los datos o la nueva información no puede ser correcta dará error.


