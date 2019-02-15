/* --- Generated the 15/2/2019 at 14:44 --- */
/* --- heptagon compiler, version 1.03.02 (compiled fri. may. 4 17:11:35 CET 2018) --- */
/* --- Command line: /home/labcontrole/.opam/4.02.3/bin/heptc -target c global_controller.ept --- */

#ifndef GLOBAL_CONTROLLER_H
#define GLOBAL_CONTROLLER_H

#include "global_controller_types.h"
typedef struct Global_controller__global_controller_global_ac_c2_room_out {
  int global_ac_c2_room;
} Global_controller__global_controller_global_ac_c2_room_out;

void Global_controller__global_controller_global_ac_c2_room_step(int global_work_schedule,
                                                                 int global_ac_toggle_room,
                                                                 int global_ck_1,
                                                                 int global_pnr,
                                                                 int p_global_ac_c2_room,
                                                                 int p_global_ac_c1_room,
                                                                 int global_ac_c1_room,
                                                                 Global_controller__global_controller_global_ac_c2_room_out* _out);

typedef struct Global_controller__global_controller_global_ac_c1_room_out {
  int global_ac_c1_room;
} Global_controller__global_controller_global_ac_c1_room_out;

void Global_controller__global_controller_global_ac_c1_room_step(int global_work_schedule,
                                                                 int global_ac_toggle_room,
                                                                 int global_ck_1,
                                                                 int global_pnr,
                                                                 int p_global_ac_c2_room,
                                                                 int p_global_ac_c1_room,
                                                                 Global_controller__global_controller_global_ac_c1_room_out* _out);

typedef struct Global_controller__global_controller_out {
  int global_ac_c2_room;
  int global_ac_c1_room;
} Global_controller__global_controller_out;

void Global_controller__global_controller_step(int global_work_schedule,
                                               int global_ac_toggle_room,
                                               int global_ck_1,
                                               int global_pnr,
                                               int p_global_ac_c2_room,
                                               int p_global_ac_c1_room,
                                               Global_controller__global_controller_out* _out);

#endif // GLOBAL_CONTROLLER_H
