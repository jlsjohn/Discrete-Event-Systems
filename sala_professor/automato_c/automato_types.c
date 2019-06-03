/* --- Generated the 6/4/2019 at 1:54 --- */
/* --- heptagon compiler, version 1.05.00 (compiled wed. mar. 13 20:25:55 CET 2019) --- */
/* --- Command line: /home/labcontrol/.opam/default/bin/heptc -target c -target z3z -s duas_tarefas_concorrentes automato.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "automato_types.h"

Automato__st_2 Automato__st_2_of_string(char* s) {
  if ((strcmp(s, "St_2_Wait")==0)) {
    return Automato__St_2_Wait;
  };
  if ((strcmp(s, "St_2_Idle")==0)) {
    return Automato__St_2_Idle;
  };
  if ((strcmp(s, "St_2_Active")==0)) {
    return Automato__St_2_Active;
  };
}

char* string_of_Automato__st_2(Automato__st_2 x, char* buf) {
  switch (x) {
    case Automato__St_2_Wait:
      strcpy(buf, "St_2_Wait");
      break;
    case Automato__St_2_Idle:
      strcpy(buf, "St_2_Idle");
      break;
    case Automato__St_2_Active:
      strcpy(buf, "St_2_Active");
      break;
    default:
      break;
  };
  return buf;
}

Automato__st_1 Automato__st_1_of_string(char* s) {
  if ((strcmp(s, "St_1_Wait")==0)) {
    return Automato__St_1_Wait;
  };
  if ((strcmp(s, "St_1_Idle")==0)) {
    return Automato__St_1_Idle;
  };
  if ((strcmp(s, "St_1_Active")==0)) {
    return Automato__St_1_Active;
  };
}

char* string_of_Automato__st_1(Automato__st_1 x, char* buf) {
  switch (x) {
    case Automato__St_1_Wait:
      strcpy(buf, "St_1_Wait");
      break;
    case Automato__St_1_Idle:
      strcpy(buf, "St_1_Idle");
      break;
    case Automato__St_1_Active:
      strcpy(buf, "St_1_Active");
      break;
    default:
      break;
  };
  return buf;
}

Automato__st Automato__st_of_string(char* s) {
  if ((strcmp(s, "St_Wait")==0)) {
    return Automato__St_Wait;
  };
  if ((strcmp(s, "St_Idle")==0)) {
    return Automato__St_Idle;
  };
  if ((strcmp(s, "St_Active")==0)) {
    return Automato__St_Active;
  };
}

char* string_of_Automato__st(Automato__st x, char* buf) {
  switch (x) {
    case Automato__St_Wait:
      strcpy(buf, "St_Wait");
      break;
    case Automato__St_Idle:
      strcpy(buf, "St_Idle");
      break;
    case Automato__St_Active:
      strcpy(buf, "St_Active");
      break;
    default:
      break;
  };
  return buf;
}

