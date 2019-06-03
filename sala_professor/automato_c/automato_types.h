/* --- Generated the 6/4/2019 at 1:54 --- */
/* --- heptagon compiler, version 1.05.00 (compiled wed. mar. 13 20:25:55 CET 2019) --- */
/* --- Command line: /home/labcontrol/.opam/default/bin/heptc -target c -target z3z -s duas_tarefas_concorrentes automato.ept --- */

#ifndef AUTOMATO_TYPES_H
#define AUTOMATO_TYPES_H

#include "stdbool.h"
#include "assert.h"
#include "pervasives.h"
#include "duas_tarefas_concorrentes_controller_types.h"
typedef enum {
  Automato__St_2_Wait,
  Automato__St_2_Idle,
  Automato__St_2_Active
} Automato__st_2;

Automato__st_2 Automato__st_2_of_string(char* s);

char* string_of_Automato__st_2(Automato__st_2 x, char* buf);

typedef enum {
  Automato__St_1_Wait,
  Automato__St_1_Idle,
  Automato__St_1_Active
} Automato__st_1;

Automato__st_1 Automato__st_1_of_string(char* s);

char* string_of_Automato__st_1(Automato__st_1 x, char* buf);

typedef enum {
  Automato__St_Wait,
  Automato__St_Idle,
  Automato__St_Active
} Automato__st;

Automato__st Automato__st_of_string(char* s);

char* string_of_Automato__st(Automato__st x, char* buf);

#endif // AUTOMATO_TYPES_H
