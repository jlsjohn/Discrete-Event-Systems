/* --- Generated the 6/4/2019 at 1:54 --- */
/* --- heptagon compiler, version 1.05.00 (compiled wed. mar. 13 20:25:55 CET 2019) --- */
/* --- Command line: /home/labcontrol/.opam/default/bin/heptc -target c -target z3z -s duas_tarefas_concorrentes automato.ept --- */

#ifndef AUTOMATO_H
#define AUTOMATO_H

#include "automato_types.h"
#include "duas_tarefas_concorrentes_controller.h"
typedef struct Automato__tarefa_concorrente_mem {
  int v_25;
  int v_24;
  int pnr;
} Automato__tarefa_concorrente_mem;

typedef struct Automato__tarefa_concorrente_out {
  int a;
} Automato__tarefa_concorrente_out;

void Automato__tarefa_concorrente_reset(Automato__tarefa_concorrente_mem* self);

void Automato__tarefa_concorrente_step(int r, int c, int e,
                                       Automato__tarefa_concorrente_out* _out,
                                       Automato__tarefa_concorrente_mem* self);

typedef struct Automato__duas_tarefas_concorrentes_mem {
  int v_41;
  int v_40;
  int v_57;
  int v_56;
  int pnr_1;
  int pnr;
} Automato__duas_tarefas_concorrentes_mem;

typedef struct Automato__duas_tarefas_concorrentes_out {
  int a1;
  int a2;
} Automato__duas_tarefas_concorrentes_out;

void Automato__duas_tarefas_concorrentes_reset(Automato__duas_tarefas_concorrentes_mem* self);

void Automato__duas_tarefas_concorrentes_step(int r1, int e1, int r2, int e2,
                                              Automato__duas_tarefas_concorrentes_out* _out,
                                              Automato__duas_tarefas_concorrentes_mem* self);

#endif // AUTOMATO_H
