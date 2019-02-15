/* --- Generated the 15/2/2019 at 14:44 --- */
/* --- heptagon compiler, version 1.03.02 (compiled fri. may. 4 17:11:35 CET 2018) --- */
/* --- Command line: /home/labcontrole/.opam/4.02.3/bin/heptc -target c -target z3z -s global automato.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "automato_types.h"

Automato__st_1 Automato__st_1_of_string(char* s) {
  if ((strcmp(s, "St_1_On")==0)) {
    return Automato__St_1_On;
  };
  if ((strcmp(s, "St_1_Off")==0)) {
    return Automato__St_1_Off;
  };
}

char* string_of_Automato__st_1(Automato__st_1 x, char* buf) {
  switch (x) {
    case Automato__St_1_On:
      strcpy(buf, "St_1_On");
      break;
    case Automato__St_1_Off:
      strcpy(buf, "St_1_Off");
      break;
    default:
      break;
  };
  return buf;
}

Automato__st Automato__st_of_string(char* s) {
  if ((strcmp(s, "St_On")==0)) {
    return Automato__St_On;
  };
  if ((strcmp(s, "St_Off")==0)) {
    return Automato__St_Off;
  };
}

char* string_of_Automato__st(Automato__st x, char* buf) {
  switch (x) {
    case Automato__St_On:
      strcpy(buf, "St_On");
      break;
    case Automato__St_Off:
      strcpy(buf, "St_Off");
      break;
    default:
      break;
  };
  return buf;
}

