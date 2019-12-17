# Añadir nuevo tratamiento a un paciente

**ID:** 04

**Descripción:** Se añade un tratamiento médico a un paciente del sistema.

**Actores principales:** Secretaria
**Actores Secundarios:** Ninguno

**Precondiciones:**
* Debe existir el paciente para poder proporcionarle un tratamiento.

**Flujo principal:**
1. La secretaria debe añadir un tratamiento a un determinado paciente.
2. La secretaria accede al paciente en cuestión.
3. Accede a la consulta de tratamientos.
4. Abre la función de añadir nuevo tratamiento.
5. El sistema pide los datos concretos de este nuevo tratamiento.

**Postcondiciones:**

* Ninguna.

**Flujos alternativos:**

* Si ha habido un fallo al introducir los datos, aparece un mensaje de error.
* Si no ha sido posible añadir un tratamiento al paciente dado, aparece un error.

