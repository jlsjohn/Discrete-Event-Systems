/* --- Generated the 15/2/2019 at 14:44 --- */
/* --- heptagon compiler, version 1.03.02 (compiled fri. may. 4 17:11:35 CET 2018) --- */
/* --- Command line: /home/labcontrole/.opam/4.02.3/bin/heptc -target c -target z3z -s global automato.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "_main.h"

Automato__global_mem mem;
int main(int argc, char** argv) {
  int step_c;
  int step_max;
  int work_schedule;
  int ac_toggle_room;
  Automato__global_out _res;
  step_c = 0;
  step_max = 0;
  if ((argc==2)) {
    step_max = atoi(argv[1]);
  };
  Automato__global_reset(&mem);
  while ((!(step_max)||(step_c<step_max))) {
    step_c = (step_c+1);
    
    printf("work_schedule ? ");
    scanf("%d", &work_schedule);;
    
    printf("ac_toggle_room ? ");
    scanf("%d", &ac_toggle_room);;
    Automato__global_step(work_schedule, ac_toggle_room, &_res, &mem);
    printf("=> ");
    printf("%d ", _res.ac_on_room);
    puts("");
    fflush(stdout);
  };
  return 0;
}

