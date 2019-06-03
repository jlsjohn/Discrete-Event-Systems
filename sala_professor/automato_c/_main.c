/* --- Generated the 6/4/2019 at 1:54 --- */
/* --- heptagon compiler, version 1.05.00 (compiled wed. mar. 13 20:25:55 CET 2019) --- */
/* --- Command line: /home/labcontrol/.opam/default/bin/heptc -target c -target z3z -s duas_tarefas_concorrentes automato.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "_main.h"

Automato__duas_tarefas_concorrentes_mem mem;
int main(int argc, char** argv) {
  int step_c;
  int step_max;
  int r1;
  int e1;
  int r2;
  int e2;
  Automato__duas_tarefas_concorrentes_out _res;
  step_c = 0;
  step_max = 0;
  if ((argc==2)) {
    step_max = atoi(argv[1]);
  };
  Automato__duas_tarefas_concorrentes_reset(&mem);
  while ((!(step_max)||(step_c<step_max))) {
    step_c = (step_c+1);
    
    printf("r1 ? ");
    scanf("%d", &r1);;
    
    printf("e1 ? ");
    scanf("%d", &e1);;
    
    printf("r2 ? ");
    scanf("%d", &r2);;
    
    printf("e2 ? ");
    scanf("%d", &e2);;
    Automato__duas_tarefas_concorrentes_step(r1, e1, r2, e2, &_res, &mem);
    printf("=> ");
    printf("%d ", _res.a1);
    printf("=> ");
    printf("%d ", _res.a2);
    puts("");
    fflush(stdout);
  };
  return 0;
}

