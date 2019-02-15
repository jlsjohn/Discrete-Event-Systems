/* --- Generated the 15/2/2019 at 14:44 --- */
/* --- heptagon compiler, version 1.03.02 (compiled fri. may. 4 17:11:35 CET 2018) --- */
/* --- Command line: /home/labcontrole/.opam/4.02.3/bin/heptc -target c global_controller.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "global_controller.h"

void Global_controller__global_controller_global_ac_c2_room_step(int global_work_schedule,
                                                                 int global_ac_toggle_room,
                                                                 int global_ck_1,
                                                                 int global_pnr,
                                                                 int p_global_ac_c2_room,
                                                                 int p_global_ac_c1_room,
                                                                 int global_ac_c1_room,
                                                                 Global_controller__global_controller_global_ac_c2_room_out* _out) {
  
  int v_5;
  int v_4;
  int v_3;
  int v_2;
  int v_1;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  v = !(global_ck_1);
  sub_2 = p_global_ac_c2_room;
  v_3 = (global_ck_1&&sub_2);
  v_1 = (v&&sub_2);
  sub_1 = sub_2;
  sub_3 = (global_ck_1&&false);
  if (global_ac_c1_room) {
    v_4 = v_3;
    v_2 = v_1;
  } else {
    v_4 = sub_3;
    v_2 = sub_3;
  };
  if (global_ac_toggle_room) {
    v_5 = v_2;
  } else {
    v_5 = v_4;
  };
  if (global_work_schedule) {
    sub_0 = sub_1;
  } else {
    sub_0 = v_5;
  };
  _out->global_ac_c2_room = sub_0;;
}

void Global_controller__global_controller_global_ac_c1_room_step(int global_work_schedule,
                                                                 int global_ac_toggle_room,
                                                                 int global_ck_1,
                                                                 int global_pnr,
                                                                 int p_global_ac_c2_room,
                                                                 int p_global_ac_c1_room,
                                                                 Global_controller__global_controller_global_ac_c1_room_out* _out) {
  
  int sub_0;
  int sub_1;
  int sub_2;
  sub_1 = p_global_ac_c1_room;
  sub_2 = (global_ck_1||sub_1);
  if (global_work_schedule) {
    sub_0 = sub_1;
  } else {
    sub_0 = sub_2;
  };
  _out->global_ac_c1_room = sub_0;;
}

void Global_controller__global_controller_step(int global_work_schedule,
                                               int global_ac_toggle_room,
                                               int global_ck_1,
                                               int global_pnr,
                                               int p_global_ac_c2_room,
                                               int p_global_ac_c1_room,
                                               Global_controller__global_controller_out* _out) {
  Global_controller__global_controller_global_ac_c2_room_out Global_controller__global_controller_global_ac_c2_room_out_st;
  Global_controller__global_controller_global_ac_c1_room_out Global_controller__global_controller_global_ac_c1_room_out_st;
  Global_controller__global_controller_global_ac_c1_room_step(global_work_schedule,
                                                              global_ac_toggle_room,
                                                              global_ck_1,
                                                              global_pnr,
                                                              p_global_ac_c2_room,
                                                              p_global_ac_c1_room,
                                                              &Global_controller__global_controller_global_ac_c1_room_out_st);
  _out->global_ac_c1_room = Global_controller__global_controller_global_ac_c1_room_out_st.global_ac_c1_room;
  Global_controller__global_controller_global_ac_c2_room_step(global_work_schedule,
                                                              global_ac_toggle_room,
                                                              global_ck_1,
                                                              global_pnr,
                                                              p_global_ac_c2_room,
                                                              p_global_ac_c1_room,
                                                              _out->global_ac_c1_room,
                                                              &Global_controller__global_controller_global_ac_c2_room_out_st);
  _out->global_ac_c2_room = Global_controller__global_controller_global_ac_c2_room_out_st.global_ac_c2_room;
}

