# Busqueda de un paciente

**ID:** 03

**Descripción:** Se busca en el sistema a un paciente a base de su DNI.

**Actores principales:** Secretaria
**Actores Secundarios:** Ninguno

**Precondiciones:**
* Ninguna.

**Flujo principal:**
1. La secretaria desea buscar un paciente en concreto,
2. La secretaria accede al buscador en el menú.
3. Introduce el DNI del paciente.
4. Se muestra en pantalla los resultados coincidentes con el DNI.

**Postcondiciones:**

* Se le da opción a la secretaria de acceder a la consulta de ese paciente.

**Flujos alternativos:**

* Si no existe ningún paciente con ese DNI, aparece un error.
* Si se ha introducido un formato incorrecto de DNI, aparece un error.

