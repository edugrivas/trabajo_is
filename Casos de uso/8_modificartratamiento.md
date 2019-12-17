# Modificar un tratamiento

**ID:** 08

**Descripción:** Se actualiza la información de un tratamiento.

**Actores principales:** Secretaria
**Actores Secundarios:** Ninguno

**Precondiciones:**
* Debe existir el paciente del tratamiento.
* Debe existir ese tratamiento a modificar.

**Flujo principal:**
1. La secretaria debe modificar un tratamiento.
2. La secretaria accede al paciente en cuestión.
3. Abre la consulta de tratamientos.
4. Accede a la opción de modificar tratamientos.
5. El sistema permite modificar estos datos.

**Postcondiciones:**

* Ninguna

**Flujos alternativos:**

* Si ha habido un fallo al introducir los datos, aparece un mensaje de error.
* Si no ha sido posible modificar/borrar el tratamiento, aparece un error.
