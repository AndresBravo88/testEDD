/*
 * auth.c - Autenticacion.
 */
#include <stdio.h>
#include <string.h>
#include "auth.h"
#include "usuarios.h"

/* Revisa que el username exista y que la contraseña coincida.
 * El hash y la busqueda en la cubeta los hace buscarUsuario,
 * aca solo nos preocupamos de comparar la contraseña. */
Usuario *iniciarSesion(const char *username, const char *password) {
    Usuario *u = buscarUsuario(username);
    if (!u) return NULL;                            // ese username no existe
    if (strcmp(u->password, password) != 0)         // las contraseñas estan en texto plano,
        return NULL;                                // asi que se comparan directo
    return u;                                       // todo ok, devolvemos el usuario
}
