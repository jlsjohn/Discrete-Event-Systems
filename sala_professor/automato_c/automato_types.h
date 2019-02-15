/* --- Generated the 15/2/2019 at 14:44 --- */
/* --- heptagon compiler, version 1.03.02 (compiled fri. may. 4 17:11:35 CET 2018) --- */
/* --- Command line: /home/labcontrole/.opam/4.02.3/bin/heptc -target c -target z3z -s global automato.ept --- */

#ifndef AUTOMATO_TYPES_H
#define AUTOMATO_TYPES_H

#include "stdbool.h"
#include "assert.h"
#include "pervasives.h"
#include "global_controller_types.h"
typedef enum {
  Automato__St_1_On,
  Automato__St_1_Off
} Automato__st_1;

Automato__st_1 Automato__st_1_of_string(char* s);

char* string_of_Automato__st_1(Automato__st_1 x, char* buf);

typedef enum {
  Automato__St_On,
  Automato__St_Off
} Automato__st;

Automato__st Automato__st_of_string(char* s);

char* string_of_Automato__st(Automato__st x, char* buf);

#endif // AUTOMATO_TYPES_H
