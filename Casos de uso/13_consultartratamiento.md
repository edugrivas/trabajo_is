# Consultar tratamiento

**ID:** 13

**Descripción:** Se consulta el tratamiento de un paciente.

**Actores principales:** Secretaria
**Actores Secundarios:** Ninguno

**Precondiciones:**
* Debe existir el paciente.
* Debe de tener un tratamiento asignado.

**Flujo principal:**
1. La secretaria debe consultar el tratamiento de un paciente.
2. La secretaria accede al paciente en cuestión.
3. Abre la opción de consulta de tratamiento.
4. Se muestran en pantalla los datos del tratamiento del paciente.
5. El sistema permite modificar estos datos.

**Postcondiciones:**

* Se puede modificar los datos.

**Flujos alternativos:**

* Si no ha sido posible mostrar el tratamiento, aparece un error.
