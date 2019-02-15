/* --- Generated the 15/2/2019 at 14:44 --- */
/* --- heptagon compiler, version 1.03.02 (compiled fri. may. 4 17:11:35 CET 2018) --- */
/* --- Command line: /home/labcontrole/.opam/4.02.3/bin/heptc -target c -target z3z -s global automato.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "automato.h"

void Automato__simple_ac_reset(Automato__simple_ac_mem* self) {
  self->pnr = false;
  self->ck_1_2 = true;
}

void Automato__simple_ac_step(int toggle, int c1, int c2,
                              Automato__simple_ac_out* _out,
                              Automato__simple_ac_mem* self) {
  
  int nr_St_On;
  int ns_St_On_1;
  int status_St_On;
  int nr_St_Off;
  int ns_St_Off_1;
  int status_St_Off;
  int ck_1_1;
  int v_5;
  int v_4;
  int v_3;
  int v_2;
  int v_1;
  int v;
  int r_St_On;
  int s_St_On_1;
  int r_St_Off;
  int s_St_Off_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1_2) {
    v_4 = !(c1);
    v_3 = (toggle&&c2);
    v_5 = (v_3||v_4);
    if (v_5) {
      r_St_Off = true;
      s_St_Off_1 = false;
    } else {
      r_St_Off = self->pnr;
      s_St_Off_1 = true;
    };
    r = r_St_Off;
    s_1 = s_St_Off_1;
  } else {
    v_1 = !(c2);
    v = (toggle&&c1);
    v_2 = (v||v_1);
    if (v_2) {
      r_St_On = true;
    } else {
      r_St_On = self->pnr;
    };
    r = r_St_On;
    if (v_2) {
      s_St_On_1 = true;
    } else {
      s_St_On_1 = false;
    };
    s_1 = s_St_On_1;
  };
  ck_1_1 = s_1;
  if (ck_1_1) {
    status_St_Off = false;
    nr_St_Off = false;
    ns_St_Off_1 = true;
    _out->status = status_St_Off;
    nr = nr_St_Off;
    ns_1 = ns_St_Off_1;
  } else {
    status_St_On = true;
    _out->status = status_St_On;
    nr_St_On = false;
    nr = nr_St_On;
    ns_St_On_1 = false;
    ns_1 = ns_St_On_1;
  };
  self->pnr = nr;
  self->ck_1_2 = ns_1;;
}

void Automato__global_reset(Automato__global_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void Automato__global_step(int work_schedule, int ac_toggle_room,
                           Automato__global_out* _out,
                           Automato__global_mem* self) {
  Global_controller__global_controller_out Global_controller__global_controller_out_st;
  
  int nr_St_1_On;
  int ns_St_1_On_1;
  int status_St_1_On;
  int nr_St_1_Off;
  int ns_St_1_Off_1;
  int status_St_1_Off;
  int ck_2_1;
  int v_11;
  int v_10;
  int v_9;
  int v_8;
  int v_7;
  int v_6;
  int r_St_1_On;
  int s_St_1_On_1;
  int r_St_1_Off;
  int s_St_1_Off_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  int toggle;
  int c1;
  int c2;
  int status;
  int permission;
  int v;
  int ac_c2_room;
  int ac_c1_room;
  toggle = ac_toggle_room;
  Global_controller__global_controller_step(work_schedule, ac_toggle_room,
                                            self->ck_1, self->pnr, true,
                                            true,
                                            &Global_controller__global_controller_out_st);
  ac_c2_room = Global_controller__global_controller_out_st.global_ac_c2_room;
  ac_c1_room = Global_controller__global_controller_out_st.global_ac_c1_room;
  c1 = ac_c1_room;
  c2 = ac_c2_room;
  if (self->ck_1) {
    v_10 = !(c1);
    v_9 = (toggle&&c2);
    v_11 = (v_9||v_10);
    if (v_11) {
      r_St_1_Off = true;
      s_St_1_Off_1 = false;
    } else {
      r_St_1_Off = self->pnr;
      s_St_1_Off_1 = true;
    };
    r = r_St_1_Off;
    s_1 = s_St_1_Off_1;
  } else {
    v_7 = !(c2);
    v_6 = (toggle&&c1);
    v_8 = (v_6||v_7);
    if (v_8) {
      r_St_1_On = true;
    } else {
      r_St_1_On = self->pnr;
    };
    r = r_St_1_On;
    if (v_8) {
      s_St_1_On_1 = true;
    } else {
      s_St_1_On_1 = false;
    };
    s_1 = s_St_1_On_1;
  };
  ck_2_1 = s_1;
  if (ck_2_1) {
    status_St_1_Off = false;
    nr_St_1_Off = false;
    ns_St_1_Off_1 = true;
    status = status_St_1_Off;
    nr = nr_St_1_Off;
    ns_1 = ns_St_1_Off_1;
  } else {
    status_St_1_On = true;
    status = status_St_1_On;
    nr_St_1_On = false;
    nr = nr_St_1_On;
    ns_St_1_On_1 = false;
    ns_1 = ns_St_1_On_1;
  };
  _out->ac_on_room = status;
  v = !(_out->ac_on_room);
  permission = (work_schedule||v);
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

