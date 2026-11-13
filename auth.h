/* auth.h - Inicio de sesion. Responsable: INTEGRANTE 2 */
#ifndef AUTH_H
#define AUTH_H

#include "tipos.h"

/* Verifica username y contrasena. Devuelve el Usuario si son correctos, o NULL si no. */
Usuario *iniciarSesion(const char *username, const char *password);

#endif
