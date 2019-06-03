/* --- Generated the 6/4/2019 at 1:55 --- */
/* --- heptagon compiler, version 1.05.00 (compiled wed. mar. 13 20:25:55 CET 2019) --- */
/* --- Command line: /home/labcontrol/.opam/default/bin/heptc -target c duas_tarefas_concorrentes_controller.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "duas_tarefas_concorrentes_controller.h"

void Duas_tarefas_concorrentes_controller__duas_tarefas_concorrentes_controller_duas_tarefas_concorrentes_c2_step(
  int duas_tarefas_concorrentes_r1, int duas_tarefas_concorrentes_e1,
  int duas_tarefas_concorrentes_r2, int duas_tarefas_concorrentes_e2,
  int duas_tarefas_concorrentes_v_57, int duas_tarefas_concorrentes_v_56,
  int duas_tarefas_concorrentes_pnr_1, int duas_tarefas_concorrentes_v_41,
  int duas_tarefas_concorrentes_v_40, int duas_tarefas_concorrentes_pnr,
  int p_duas_tarefas_concorrentes_c2, int p_duas_tarefas_concorrentes_c1,
  int duas_tarefas_concorrentes_c1,
  Duas_tarefas_concorrentes_controller__duas_tarefas_concorrentes_controller_duas_tarefas_concorrentes_c2_out* _out) {
  
  int v_47;
  int v_46;
  int v_45;
  int v_44;
  int v_43;
  int v_42;
  int v_41;
  int v_40;
  int v_39;
  int v_38;
  int v_37;
  int v_36;
  int v_35;
  int v_34;
  int v_33;
  int v_32;
  int v_31;
  int v_30;
  int v_29;
  int v_28;
  int v_27;
  int v_26;
  int v_25;
  int v_24;
  int v_23;
  int v_22;
  int v_21;
  int v_20;
  int v_19;
  int v_18;
  int v_17;
  int v_16;
  int v_15;
  int v_14;
  int v_13;
  int v_12;
  int v_11;
  int v_10;
  int v_9;
  int v_8;
  int v_7;
  int v_6;
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
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  v_47 = !(duas_tarefas_concorrentes_v_41);
  v_46 = !(duas_tarefas_concorrentes_v_41);
  sub_3 = p_duas_tarefas_concorrentes_c2;
  sub_22 = (duas_tarefas_concorrentes_v_56&&sub_3);
  if (duas_tarefas_concorrentes_v_41) {
    sub_20 = false;
  } else {
    sub_20 = sub_3;
  };
  if (duas_tarefas_concorrentes_v_56) {
    sub_19 = sub_3;
  } else {
    sub_19 = sub_20;
  };
  sub_18 = (v_46&&sub_3);
  if (duas_tarefas_concorrentes_v_56) {
    sub_24 = sub_3;
  } else {
    sub_24 = sub_18;
  };
  if (duas_tarefas_concorrentes_v_57) {
    sub_25 = sub_20;
    sub_23 = sub_19;
    sub_21 = sub_20;
    sub_17 = sub_19;
  } else {
    sub_25 = sub_24;
    sub_23 = sub_24;
    sub_21 = sub_18;
    sub_17 = sub_18;
  };
  if (duas_tarefas_concorrentes_v_56) {
    sub_16 = sub_3;
  } else {
    sub_16 = false;
  };
  if (duas_tarefas_concorrentes_v_40) {
    sub_6 = sub_3;
  } else {
    sub_6 = false;
  };
  if (duas_tarefas_concorrentes_v_41) {
    sub_30 = false;
  } else {
    sub_30 = sub_6;
  };
  if (duas_tarefas_concorrentes_v_56) {
    sub_29 = sub_3;
    sub_26 = sub_3;
  } else {
    sub_29 = sub_30;
    sub_26 = sub_6;
  };
  if (duas_tarefas_concorrentes_v_41) {
    sub_10 = sub_6;
  } else {
    sub_10 = sub_3;
  };
  if (duas_tarefas_concorrentes_v_56) {
    sub_9 = sub_3;
  } else {
    sub_9 = sub_10;
  };
  if (duas_tarefas_concorrentes_v_41) {
    sub_5 = sub_6;
  } else {
    sub_5 = false;
  };
  if (duas_tarefas_concorrentes_v_56) {
    sub_4 = sub_3;
  } else {
    sub_4 = sub_5;
  };
  sub_2 = (duas_tarefas_concorrentes_v_40&&sub_3);
  sub_28 = (v_47&&sub_2);
  if (duas_tarefas_concorrentes_v_56) {
    sub_31 = sub_3;
    sub_27 = sub_3;
  } else {
    sub_31 = sub_28;
    sub_27 = sub_2;
  };
  if (duas_tarefas_concorrentes_v_41) {
    sub_8 = sub_2;
  } else {
    sub_8 = sub_3;
  };
  if (duas_tarefas_concorrentes_v_56) {
    sub_14 = sub_3;
  } else {
    sub_14 = sub_8;
  };
  if (duas_tarefas_concorrentes_v_57) {
    sub_15 = sub_10;
    sub_13 = sub_9;
    sub_11 = sub_10;
    sub_7 = sub_9;
  } else {
    sub_15 = sub_14;
    sub_13 = sub_14;
    sub_11 = sub_8;
    sub_7 = sub_8;
  };
  sub_1 = (duas_tarefas_concorrentes_v_41&&sub_2);
  if (duas_tarefas_concorrentes_v_56) {
    sub_12 = sub_3;
  } else {
    sub_12 = sub_1;
  };
  if (duas_tarefas_concorrentes_v_57) {
    v_41 = sub_30;
  } else {
    v_41 = sub_31;
  };
  if (duas_tarefas_concorrentes_c1) {
    v_42 = v_41;
  } else {
    v_42 = sub_25;
  };
  if (duas_tarefas_concorrentes_v_57) {
    v_39 = sub_29;
  } else {
    v_39 = sub_31;
  };
  if (duas_tarefas_concorrentes_c1) {
    v_40 = v_39;
  } else {
    v_40 = sub_23;
  };
  if (duas_tarefas_concorrentes_e2) {
    v_43 = v_40;
  } else {
    v_43 = v_42;
  };
  if (duas_tarefas_concorrentes_v_57) {
    v_36 = sub_30;
  } else {
    v_36 = sub_28;
  };
  if (duas_tarefas_concorrentes_c1) {
    v_37 = v_36;
  } else {
    v_37 = sub_21;
  };
  if (duas_tarefas_concorrentes_v_57) {
    v_34 = sub_29;
  } else {
    v_34 = sub_28;
  };
  if (duas_tarefas_concorrentes_c1) {
    v_35 = v_34;
  } else {
    v_35 = sub_17;
  };
  if (duas_tarefas_concorrentes_e2) {
    v_38 = v_35;
  } else {
    v_38 = v_37;
  };
  if (duas_tarefas_concorrentes_r2) {
    v_44 = v_38;
  } else {
    v_44 = v_43;
  };
  if (duas_tarefas_concorrentes_v_57) {
    v_30 = sub_6;
  } else {
    v_30 = sub_27;
  };
  if (duas_tarefas_concorrentes_c1) {
    v_31 = v_30;
  } else {
    v_31 = sub_15;
  };
  if (duas_tarefas_concorrentes_v_57) {
    v_28 = sub_26;
  } else {
    v_28 = sub_27;
  };
  if (duas_tarefas_concorrentes_c1) {
    v_29 = v_28;
  } else {
    v_29 = sub_13;
  };
  if (duas_tarefas_concorrentes_e2) {
    v_32 = v_29;
  } else {
    v_32 = v_31;
  };
  if (duas_tarefas_concorrentes_v_57) {
    v_25 = sub_6;
  } else {
    v_25 = sub_2;
  };
  if (duas_tarefas_concorrentes_c1) {
    v_26 = v_25;
  } else {
    v_26 = sub_11;
  };
  if (duas_tarefas_concorrentes_v_57) {
    v_23 = sub_26;
  } else {
    v_23 = sub_2;
  };
  if (duas_tarefas_concorrentes_c1) {
    v_24 = v_23;
  } else {
    v_24 = sub_7;
  };
  if (duas_tarefas_concorrentes_e2) {
    v_27 = v_24;
  } else {
    v_27 = v_26;
  };
  if (duas_tarefas_concorrentes_r2) {
    v_33 = v_27;
  } else {
    v_33 = v_32;
  };
  if (duas_tarefas_concorrentes_e1) {
    v_45 = v_33;
  } else {
    v_45 = v_44;
  };
  if (duas_tarefas_concorrentes_v_57) {
    v_18 = false;
  } else {
    v_18 = sub_22;
  };
  if (duas_tarefas_concorrentes_c1) {
    v_19 = v_18;
  } else {
    v_19 = sub_25;
  };
  if (duas_tarefas_concorrentes_v_57) {
    v_16 = sub_16;
  } else {
    v_16 = sub_22;
  };
  if (duas_tarefas_concorrentes_c1) {
    v_17 = v_16;
  } else {
    v_17 = sub_23;
  };
  if (duas_tarefas_concorrentes_e2) {
    v_20 = v_17;
  } else {
    v_20 = v_19;
  };
  v_13 = (duas_tarefas_concorrentes_v_57&&false);
  if (duas_tarefas_concorrentes_c1) {
    v_14 = v_13;
  } else {
    v_14 = sub_21;
  };
  v_11 = (duas_tarefas_concorrentes_v_57&&sub_16);
  if (duas_tarefas_concorrentes_c1) {
    v_12 = v_11;
  } else {
    v_12 = sub_17;
  };
  if (duas_tarefas_concorrentes_e2) {
    v_15 = v_12;
  } else {
    v_15 = v_14;
  };
  if (duas_tarefas_concorrentes_r2) {
    v_21 = v_15;
  } else {
    v_21 = v_20;
  };
  if (duas_tarefas_concorrentes_v_57) {
    v_7 = sub_5;
  } else {
    v_7 = sub_12;
  };
  if (duas_tarefas_concorrentes_c1) {
    v_8 = v_7;
  } else {
    v_8 = sub_15;
  };
  if (duas_tarefas_concorrentes_v_57) {
    v_5 = sub_4;
  } else {
    v_5 = sub_12;
  };
  if (duas_tarefas_concorrentes_c1) {
    v_6 = v_5;
  } else {
    v_6 = sub_13;
  };
  if (duas_tarefas_concorrentes_e2) {
    v_9 = v_6;
  } else {
    v_9 = v_8;
  };
  if (duas_tarefas_concorrentes_v_57) {
    v_2 = sub_5;
  } else {
    v_2 = sub_1;
  };
  if (duas_tarefas_concorrentes_c1) {
    v_3 = v_2;
  } else {
    v_3 = sub_11;
  };
  if (duas_tarefas_concorrentes_v_57) {
    v = sub_4;
  } else {
    v = sub_1;
  };
  if (duas_tarefas_concorrentes_c1) {
    v_1 = v;
  } else {
    v_1 = sub_7;
  };
  if (duas_tarefas_concorrentes_e2) {
    v_4 = v_1;
  } else {
    v_4 = v_3;
  };
  if (duas_tarefas_concorrentes_r2) {
    v_10 = v_4;
  } else {
    v_10 = v_9;
  };
  if (duas_tarefas_concorrentes_e1) {
    v_22 = v_10;
  } else {
    v_22 = v_21;
  };
  if (duas_tarefas_concorrentes_r1) {
    sub_0 = v_22;
  } else {
    sub_0 = v_45;
  };
  _out->duas_tarefas_concorrentes_c2 = sub_0;;
}

void Duas_tarefas_concorrentes_controller__duas_tarefas_concorrentes_controller_duas_tarefas_concorrentes_c1_step(
  int duas_tarefas_concorrentes_r1, int duas_tarefas_concorrentes_e1,
  int duas_tarefas_concorrentes_r2, int duas_tarefas_concorrentes_e2,
  int duas_tarefas_concorrentes_v_57, int duas_tarefas_concorrentes_v_56,
  int duas_tarefas_concorrentes_pnr_1, int duas_tarefas_concorrentes_v_41,
  int duas_tarefas_concorrentes_v_40, int duas_tarefas_concorrentes_pnr,
  int p_duas_tarefas_concorrentes_c2, int p_duas_tarefas_concorrentes_c1,
  Duas_tarefas_concorrentes_controller__duas_tarefas_concorrentes_controller_duas_tarefas_concorrentes_c1_out* _out) {
  
  int v_60;
  int v_59;
  int v_58;
  int v_57;
  int v_56;
  int v_55;
  int v_54;
  int v_53;
  int v_52;
  int v_51;
  int v_50;
  int v_49;
  int v_48;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  sub_6 = (duas_tarefas_concorrentes_v_41&&false);
  sub_2 = p_duas_tarefas_concorrentes_c1;
  sub_9 = (duas_tarefas_concorrentes_v_40&&sub_2);
  if (duas_tarefas_concorrentes_v_41) {
    sub_11 = false;
  } else {
    sub_11 = sub_9;
  };
  if (duas_tarefas_concorrentes_v_57) {
    v_60 = sub_11;
  } else {
    v_60 = sub_2;
  };
  if (duas_tarefas_concorrentes_v_56) {
    v_58 = sub_2;
  } else {
    v_58 = sub_11;
  };
  if (duas_tarefas_concorrentes_v_57) {
    v_59 = v_58;
  } else {
    v_59 = sub_2;
  };
  if (duas_tarefas_concorrentes_e2) {
    sub_10 = v_59;
  } else {
    sub_10 = v_60;
  };
  if (duas_tarefas_concorrentes_v_57) {
    v_54 = sub_6;
  } else {
    v_54 = sub_2;
  };
  if (duas_tarefas_concorrentes_v_56) {
    v_52 = sub_2;
  } else {
    v_52 = sub_6;
  };
  if (duas_tarefas_concorrentes_v_57) {
    v_53 = v_52;
  } else {
    v_53 = sub_2;
  };
  if (duas_tarefas_concorrentes_e2) {
    sub_5 = v_53;
  } else {
    sub_5 = v_54;
  };
  if (duas_tarefas_concorrentes_v_40) {
    sub_4 = sub_2;
  } else {
    sub_4 = false;
  };
  if (duas_tarefas_concorrentes_v_41) {
    sub_8 = sub_4;
  } else {
    sub_8 = sub_9;
  };
  if (duas_tarefas_concorrentes_v_57) {
    v_57 = sub_8;
  } else {
    v_57 = sub_2;
  };
  if (duas_tarefas_concorrentes_v_56) {
    v_55 = sub_2;
  } else {
    v_55 = sub_8;
  };
  if (duas_tarefas_concorrentes_v_57) {
    v_56 = v_55;
  } else {
    v_56 = sub_2;
  };
  if (duas_tarefas_concorrentes_e2) {
    sub_7 = v_56;
  } else {
    sub_7 = v_57;
  };
  sub_3 = (duas_tarefas_concorrentes_v_41&&sub_4);
  if (duas_tarefas_concorrentes_v_57) {
    v_51 = sub_3;
  } else {
    v_51 = sub_2;
  };
  if (duas_tarefas_concorrentes_v_56) {
    v_49 = sub_2;
  } else {
    v_49 = sub_3;
  };
  if (duas_tarefas_concorrentes_v_57) {
    v_50 = v_49;
  } else {
    v_50 = sub_2;
  };
  if (duas_tarefas_concorrentes_e2) {
    sub_1 = v_50;
  } else {
    sub_1 = v_51;
  };
  if (duas_tarefas_concorrentes_e1) {
    v_48 = sub_7;
    v = sub_1;
  } else {
    v_48 = sub_10;
    v = sub_5;
  };
  if (duas_tarefas_concorrentes_r1) {
    sub_0 = v;
  } else {
    sub_0 = v_48;
  };
  _out->duas_tarefas_concorrentes_c1 = sub_0;;
}

void Duas_tarefas_concorrentes_controller__duas_tarefas_concorrentes_controller_step(
  int duas_tarefas_concorrentes_r1, int duas_tarefas_concorrentes_e1,
  int duas_tarefas_concorrentes_r2, int duas_tarefas_concorrentes_e2,
  int duas_tarefas_concorrentes_v_57, int duas_tarefas_concorrentes_v_56,
  int duas_tarefas_concorrentes_pnr_1, int duas_tarefas_concorrentes_v_41,
  int duas_tarefas_concorrentes_v_40, int duas_tarefas_concorrentes_pnr,
  int p_duas_tarefas_concorrentes_c2, int p_duas_tarefas_concorrentes_c1,
  Duas_tarefas_concorrentes_controller__duas_tarefas_concorrentes_controller_out* _out) {
  Duas_tarefas_concorrentes_controller__duas_tarefas_concorrentes_controller_duas_tarefas_concorrentes_c2_out Duas_tarefas_concorrentes_controller__duas_tarefas_concorrentes_controller_duas_tarefas_concorrentes_c2_out_st;
  Duas_tarefas_concorrentes_controller__duas_tarefas_concorrentes_controller_duas_tarefas_concorrentes_c1_out Duas_tarefas_concorrentes_controller__duas_tarefas_concorrentes_controller_duas_tarefas_concorrentes_c1_out_st;
  Duas_tarefas_concorrentes_controller__duas_tarefas_concorrentes_controller_duas_tarefas_concorrentes_c1_step(
  duas_tarefas_concorrentes_r1, duas_tarefas_concorrentes_e1,
  duas_tarefas_concorrentes_r2, duas_tarefas_concorrentes_e2,
  duas_tarefas_concorrentes_v_57, duas_tarefas_concorrentes_v_56,
  duas_tarefas_concorrentes_pnr_1, duas_tarefas_concorrentes_v_41,
  duas_tarefas_concorrentes_v_40, duas_tarefas_concorrentes_pnr,
  p_duas_tarefas_concorrentes_c2, p_duas_tarefas_concorrentes_c1,
  &Duas_tarefas_concorrentes_controller__duas_tarefas_concorrentes_controller_duas_tarefas_concorrentes_c1_out_st);
  _out->duas_tarefas_concorrentes_c1 = Duas_tarefas_concorrentes_controller__duas_tarefas_concorrentes_controller_duas_tarefas_concorrentes_c1_out_st.duas_tarefas_concorrentes_c1;
  Duas_tarefas_concorrentes_controller__duas_tarefas_concorrentes_controller_duas_tarefas_concorrentes_c2_step(
  duas_tarefas_concorrentes_r1, duas_tarefas_concorrentes_e1,
  duas_tarefas_concorrentes_r2, duas_tarefas_concorrentes_e2,
  duas_tarefas_concorrentes_v_57, duas_tarefas_concorrentes_v_56,
  duas_tarefas_concorrentes_pnr_1, duas_tarefas_concorrentes_v_41,
  duas_tarefas_concorrentes_v_40, duas_tarefas_concorrentes_pnr,
  p_duas_tarefas_concorrentes_c2, p_duas_tarefas_concorrentes_c1,
  _out->duas_tarefas_concorrentes_c1,
  &Duas_tarefas_concorrentes_controller__duas_tarefas_concorrentes_controller_duas_tarefas_concorrentes_c2_out_st);
  _out->duas_tarefas_concorrentes_c2 = Duas_tarefas_concorrentes_controller__duas_tarefas_concorrentes_controller_duas_tarefas_concorrentes_c2_out_st.duas_tarefas_concorrentes_c2;
}

