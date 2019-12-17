# Modificar una cita

**ID:** 06

**Descripción:** Se actualiza la información de una cita.

**Actores principales:** Secretaria
**Actores Secundarios:** Ninguno

**Precondiciones:**
* Debe existir la cita.
* El paciente beneficiario de esta cita, también debe existir.

**Flujo principal:**
1. La secretaria debe cambiar una cita.
2. La secretaria accede al paciente en cuestión.
3. Abre la opción de consultar citas.
4. Se muestran en pantalla las citas del paciente.
5. La secretaria abre la opción de modificar cita.
6. El sistema muestra las citas para modificarlas.

**Postcondiciones:**

* Ninguna

**Flujos alternativos:**

* Si ha habido un fallo al introducir los datos, aparece un mensaje de error.
* Si no ha sido posible actualizar/borrar la cita, aparece un error.
