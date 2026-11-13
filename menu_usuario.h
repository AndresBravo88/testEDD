/* menu_usuario.h - Menu inicial y menu del usuario. Responsable: INTEGRANTE 2 */
#ifndef MENU_USUARIO_H
#define MENU_USUARIO_H

#include "tipos.h"

/* Menu inicial: Registrarse / Iniciar sesion / Salir. Se repite hasta elegir salir. */
void menuInicial(void);

/* Menu del usuario con sesion iniciada. Termina al cerrar sesion. */
void menuUsuario(Usuario *u);

#endif
