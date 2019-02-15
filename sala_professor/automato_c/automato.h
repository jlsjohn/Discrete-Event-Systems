/* --- Generated the 15/2/2019 at 14:44 --- */
/* --- heptagon compiler, version 1.03.02 (compiled fri. may. 4 17:11:35 CET 2018) --- */
/* --- Command line: /home/labcontrole/.opam/4.02.3/bin/heptc -target c -target z3z -s global automato.ept --- */

#ifndef AUTOMATO_H
#define AUTOMATO_H

#include "automato_types.h"
#include "global_controller.h"
typedef struct Automato__simple_ac_mem {
  int ck_1_2;
  int pnr;
} Automato__simple_ac_mem;

typedef struct Automato__simple_ac_out {
  int status;
} Automato__simple_ac_out;

void Automato__simple_ac_reset(Automato__simple_ac_mem* self);

void Automato__simple_ac_step(int toggle, int c1, int c2,
                              Automato__simple_ac_out* _out,
                              Automato__simple_ac_mem* self);

typedef struct Automato__global_mem {
  int ck_1;
  int pnr;
} Automato__global_mem;

typedef struct Automato__global_out {
  int ac_on_room;
} Automato__global_out;

void Automato__global_reset(Automato__global_mem* self);

void Automato__global_step(int work_schedule, int ac_toggle_room,
                           Automato__global_out* _out,
                           Automato__global_mem* self);

#endif // AUTOMATO_H
