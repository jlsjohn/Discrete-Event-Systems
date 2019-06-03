/* --- Generated the 6/4/2019 at 1:54 --- */
/* --- heptagon compiler, version 1.05.00 (compiled wed. mar. 13 20:25:55 CET 2019) --- */
/* --- Command line: /home/labcontrol/.opam/default/bin/heptc -target c -target z3z -s duas_tarefas_concorrentes automato.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "automato.h"

void Automato__tarefa_concorrente_reset(Automato__tarefa_concorrente_mem* self) {
  self->pnr = false;
  self->v_24 = true;
  self->v_25 = false;
}

void Automato__tarefa_concorrente_step(int r, int c, int e,
                                       Automato__tarefa_concorrente_out* _out,
                                       Automato__tarefa_concorrente_mem* self) {
  
  int v_23;
  int v_22;
  int v_21;
  int v_20;
  int v_19;
  int v_18;
  int v_17;
  int v_16;
  int ns_St_Active_2_0;
  int ns_St_Active_2_1;
  int ns_St_Wait_2_0;
  int ns_St_Wait_2_1;
  int ns_St_Idle_2_0;
  int ns_St_Idle_2_1;
  int ck_1_2_0;
  int ck_1_2_1;
  int nr_St_Active;
  int ns_St_Active_2;
  int ns_St_Active_1;
  int a_St_Active;
  int nr_St_Wait;
  int ns_St_Wait_2;
  int ns_St_Wait_1;
  int a_St_Wait;
  int nr_St_Idle;
  int ns_St_Idle_2;
  int ns_St_Idle_1;
  int a_St_Idle;
  int ck_1_2;
  int ck_1_1;
  int v_3_2_0;
  int v_3_2_1;
  int v_4;
  int v_3_2;
  int v_3_1;
  int v_2;
  int v_1;
  int v;
  int v_31;
  int v_30;
  int v_29;
  int v_28;
  int v_27;
  int v_26;
  int s_St_Active_2_0;
  int s_St_Active_2_1;
  int s_St_Wait_2_0;
  int s_St_Wait_2_1;
  int s_St_Idle_2_0;
  int s_St_Idle_2_1;
  int ck_2_0;
  int ck_2_1;
  int r_2_St_Active;
  int s_St_Active_2;
  int s_St_Active_1;
  int r_2_St_Wait;
  int s_St_Wait_2;
  int s_St_Wait_1;
  int r_2_St_Idle;
  int s_St_Idle_2;
  int s_St_Idle_1;
  int ck_2;
  int ck_1_3;
  int s_2_0;
  int s_2_1;
  int ns_2_0;
  int ns_2_1;
  int s_2;
  int s_1;
  int ns_2;
  int ns_1;
  int r_2;
  int nr;
  ck_1_3 = self->v_24;
  ck_2 = self->v_25;
  if (ck_1_3) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      if (e) {
        r_2_St_Active = true;
      } else {
        r_2_St_Active = self->pnr;
      };
      v_30 = r_2_St_Active;
      if (e) {
        s_St_Active_1 = true;
      } else {
        s_St_Active_1 = true;
      };
      v_26 = s_St_Active_1;
      if (e) {
        s_St_Active_2 = false;
      } else {
        s_St_Active_2 = true;
      };
      v_27 = s_St_Active_2;
    } else {
      v_1 = !(c);
      v_2 = (r&&v_1);
      if (v_2) {
        v_4 = true;
        v_3_1 = false;
        v_3_2 = false;
      } else {
        v_4 = self->pnr;
        v_3_1 = true;
        v_3_2 = false;
      };
      v = (r&&c);
      if (v) {
        r_2_St_Idle = true;
        s_St_Idle_1 = true;
        s_St_Idle_2 = true;
      } else {
        r_2_St_Idle = v_4;
        s_St_Idle_1 = v_3_1;
        s_St_Idle_2 = v_3_2;
      };
      v_30 = r_2_St_Idle;
      v_26 = s_St_Idle_1;
      v_27 = s_St_Idle_2;
      if (v_3_1) {
        v_3_2_1 = v_3_2;
      } else {
        v_3_2_0 = v_3_2;
      };
    };
    s_1 = v_26;
    s_2 = v_27;
    r_2 = v_30;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      v_31 = true;
      v_28 = true;
      v_29 = true;
    } else {
      if (c) {
        r_2_St_Wait = true;
      } else {
        r_2_St_Wait = self->pnr;
      };
      v_31 = r_2_St_Wait;
      if (c) {
        s_St_Wait_1 = true;
      } else {
        s_St_Wait_1 = false;
      };
      v_28 = s_St_Wait_1;
      if (c) {
        s_St_Wait_2 = true;
      } else {
        s_St_Wait_2 = false;
      };
      v_29 = s_St_Wait_2;
      if (s_St_Wait_1) {
        s_St_Wait_2_1 = s_St_Wait_2;
      } else {
        s_St_Wait_2_0 = s_St_Wait_2;
      };
    };
    s_1 = v_28;
    s_2 = v_29;
    r_2 = v_31;
  };
  ck_1_1 = s_1;
  ck_1_2 = s_2;
  if (ck_1_1) {
    ck_1_2_1 = ck_1_2;
    if (ck_1_2_1) {
      a_St_Active = true;
      v_16 = a_St_Active;
      nr_St_Active = false;
      v_22 = nr_St_Active;
      ns_St_Active_1 = true;
      v_18 = ns_St_Active_1;
      ns_St_Active_2 = true;
      v_19 = ns_St_Active_2;
    } else {
      a_St_Idle = false;
      nr_St_Idle = false;
      ns_St_Idle_1 = true;
      ns_St_Idle_2 = false;
      v_16 = a_St_Idle;
      v_22 = nr_St_Idle;
      v_18 = ns_St_Idle_1;
      v_19 = ns_St_Idle_2;
    };
    _out->a = v_16;
    ns_1 = v_18;
    ns_2 = v_19;
    nr = v_22;
  } else {
    ck_1_2_0 = ck_1_2;
    if (ck_1_2_0) {
      v_17 = true;
      v_23 = true;
      v_20 = true;
      v_21 = true;
    } else {
      a_St_Wait = false;
      v_17 = a_St_Wait;
      nr_St_Wait = false;
      v_23 = nr_St_Wait;
      ns_St_Wait_1 = false;
      v_20 = ns_St_Wait_1;
      ns_St_Wait_2 = false;
      v_21 = ns_St_Wait_2;
      if (ns_St_Wait_1) {
        ns_St_Wait_2_1 = ns_St_Wait_2;
      } else {
        ns_St_Wait_2_0 = ns_St_Wait_2;
      };
    };
    _out->a = v_17;
    ns_1 = v_20;
    ns_2 = v_21;
    nr = v_23;
  };
  if (ns_1) {
    ns_2_1 = ns_2;
  } else {
    ns_2_0 = ns_2;
  };
  if (ck_1_1) {
    if (ck_1_2_1) {
      if (ns_St_Active_1) {
        ns_St_Active_2_1 = ns_St_Active_2;
      } else {
        ns_St_Active_2_0 = ns_St_Active_2;
      };
    } else {
      if (ns_St_Idle_1) {
        ns_St_Idle_2_1 = ns_St_Idle_2;
      } else {
        ns_St_Idle_2_0 = ns_St_Idle_2;
      };
    };
  };
  if (s_1) {
    s_2_1 = s_2;
  } else {
    s_2_0 = s_2;
  };
  if (ck_1_3) {
    if (ck_2_1) {
      if (s_St_Active_1) {
        s_St_Active_2_1 = s_St_Active_2;
      } else {
        s_St_Active_2_0 = s_St_Active_2;
      };
    } else {
      if (s_St_Idle_1) {
        s_St_Idle_2_1 = s_St_Idle_2;
      } else {
        s_St_Idle_2_0 = s_St_Idle_2;
      };
    };
  };
  self->pnr = nr;
  self->v_24 = ns_1;
  self->v_25 = ns_2;;
}

void Automato__duas_tarefas_concorrentes_reset(Automato__duas_tarefas_concorrentes_mem* self) {
  self->pnr = false;
  self->v_40 = true;
  self->v_41 = false;
  self->pnr_1 = false;
  self->v_56 = true;
  self->v_57 = false;
}

void Automato__duas_tarefas_concorrentes_step(int r1, int e1, int r2, int e2,
                                              Automato__duas_tarefas_concorrentes_out* _out,
                                              Automato__duas_tarefas_concorrentes_mem* self) {
  Duas_tarefas_concorrentes_controller__duas_tarefas_concorrentes_controller_out Duas_tarefas_concorrentes_controller__duas_tarefas_concorrentes_controller_out_st;
  
  int v_39;
  int v_38;
  int v_37;
  int v_36;
  int v_35;
  int v_34;
  int v_33;
  int v_32;
  int ns_St_1_Active_2_0;
  int ns_St_1_Active_2_1;
  int ns_St_1_Wait_2_0;
  int ns_St_1_Wait_2_1;
  int ns_St_1_Idle_2_0;
  int ns_St_1_Idle_2_1;
  int ck_4_2_0;
  int ck_4_2_1;
  int nr_St_1_Active;
  int ns_St_1_Active_2;
  int ns_St_1_Active_1;
  int a_1_St_1_Active;
  int nr_St_1_Wait;
  int ns_St_1_Wait_2;
  int ns_St_1_Wait_1;
  int a_1_St_1_Wait;
  int nr_St_1_Idle;
  int ns_St_1_Idle_2;
  int ns_St_1_Idle_1;
  int a_1_St_1_Idle;
  int ck_4_2;
  int ck_4_1;
  int v_14_2_0;
  int v_14_2_1;
  int v_15;
  int v_14_2;
  int v_14_1;
  int v_13;
  int v_12;
  int v_11;
  int v_47;
  int v_46;
  int v_45;
  int v_44;
  int v_43;
  int v_42;
  int s_St_1_Active_2_0;
  int s_St_1_Active_2_1;
  int s_St_1_Wait_2_0;
  int s_St_1_Wait_2_1;
  int s_St_1_Idle_2_0;
  int s_St_1_Idle_2_1;
  int ck_3_2_0;
  int ck_3_2_1;
  int r_3_St_1_Active;
  int s_St_1_Active_2;
  int s_St_1_Active_1;
  int r_3_St_1_Wait;
  int s_St_1_Wait_2;
  int s_St_1_Wait_1;
  int r_3_St_1_Idle;
  int s_St_1_Idle_2;
  int s_St_1_Idle_1;
  int ck_3_2;
  int ck_3_1;
  int v_55;
  int v_54;
  int v_53;
  int v_52;
  int v_51;
  int v_50;
  int v_49;
  int v_48;
  int ns_1_St_2_Active_2_0;
  int ns_1_St_2_Active_2_1;
  int ns_1_St_2_Wait_2_0;
  int ns_1_St_2_Wait_2_1;
  int ns_1_St_2_Idle_2_0;
  int ns_1_St_2_Idle_2_1;
  int ck_2_2_0;
  int ck_2_2_1;
  int nr_1_St_2_Active;
  int ns_1_St_2_Active_2;
  int ns_1_St_2_Active_1;
  int a_St_2_Active;
  int nr_1_St_2_Wait;
  int ns_1_St_2_Wait_2;
  int ns_1_St_2_Wait_1;
  int a_St_2_Wait;
  int nr_1_St_2_Idle;
  int ns_1_St_2_Idle_2;
  int ns_1_St_2_Idle_1;
  int a_St_2_Idle;
  int ck_2_2;
  int ck_2_1;
  int v_9_2_0;
  int v_9_2_1;
  int v_10;
  int v_9_2;
  int v_9_1;
  int v_8;
  int v_7;
  int v_6;
  int v_63;
  int v_62;
  int v_61;
  int v_60;
  int v_59;
  int v_58;
  int s_1_St_2_Active_2_0;
  int s_1_St_2_Active_2_1;
  int s_1_St_2_Wait_2_0;
  int s_1_St_2_Wait_2_1;
  int s_1_St_2_Idle_2_0;
  int s_1_St_2_Idle_2_1;
  int ck_2_3_0;
  int ck_2_3_1;
  int r_4_St_2_Active;
  int s_1_St_2_Active_2;
  int s_1_St_2_Active_1;
  int r_4_St_2_Wait;
  int s_1_St_2_Wait_2;
  int s_1_St_2_Wait_1;
  int r_4_St_2_Idle;
  int s_1_St_2_Idle_2;
  int s_1_St_2_Idle_1;
  int ck_2_3;
  int ck_1;
  int s_1_2_0;
  int s_1_2_1;
  int ns_1_2_0;
  int ns_1_2_1;
  int s_2_0;
  int s_2_1;
  int ns_2_0;
  int ns_2_1;
  int s_1_2;
  int s_1_1;
  int ns_1_2;
  int ns_1_1;
  int r_4;
  int nr_1;
  int s_2;
  int s_1_3;
  int ns_2;
  int ns_1_3;
  int r_3;
  int nr;
  int r_1;
  int c_1;
  int e_1;
  int a_1;
  int r;
  int c;
  int e;
  int a;
  int v_5;
  int v;
  int c2;
  int c1;
  r_1 = r1;
  e_1 = e1;
  ck_3_1 = self->v_40;
  ck_3_2 = self->v_41;
  r = r2;
  e = e2;
  ck_1 = self->v_56;
  ck_2_3 = self->v_57;
  Duas_tarefas_concorrentes_controller__duas_tarefas_concorrentes_controller_step(
  r1, e1, r2, e2, self->v_57, self->v_56, self->pnr_1, self->v_41,
  self->v_40, self->pnr, true, true,
  &Duas_tarefas_concorrentes_controller__duas_tarefas_concorrentes_controller_out_st);
  c2 = Duas_tarefas_concorrentes_controller__duas_tarefas_concorrentes_controller_out_st.duas_tarefas_concorrentes_c2;
  c1 = Duas_tarefas_concorrentes_controller__duas_tarefas_concorrentes_controller_out_st.duas_tarefas_concorrentes_c1;
  c_1 = c1;
  c = c2;
  if (ck_3_1) {
    ck_3_2_1 = ck_3_2;
    if (ck_3_2_1) {
      if (e_1) {
        r_3_St_1_Active = true;
      } else {
        r_3_St_1_Active = self->pnr;
      };
      v_46 = r_3_St_1_Active;
      if (e_1) {
        s_St_1_Active_1 = true;
      } else {
        s_St_1_Active_1 = true;
      };
      v_42 = s_St_1_Active_1;
      if (e_1) {
        s_St_1_Active_2 = false;
      } else {
        s_St_1_Active_2 = true;
      };
      v_43 = s_St_1_Active_2;
    } else {
      v_12 = !(c_1);
      v_13 = (r_1&&v_12);
      if (v_13) {
        v_15 = true;
        v_14_1 = false;
        v_14_2 = false;
      } else {
        v_15 = self->pnr;
        v_14_1 = true;
        v_14_2 = false;
      };
      v_11 = (r_1&&c_1);
      if (v_11) {
        r_3_St_1_Idle = true;
        s_St_1_Idle_1 = true;
        s_St_1_Idle_2 = true;
      } else {
        r_3_St_1_Idle = v_15;
        s_St_1_Idle_1 = v_14_1;
        s_St_1_Idle_2 = v_14_2;
      };
      v_46 = r_3_St_1_Idle;
      v_42 = s_St_1_Idle_1;
      v_43 = s_St_1_Idle_2;
      if (v_14_1) {
        v_14_2_1 = v_14_2;
      } else {
        v_14_2_0 = v_14_2;
      };
    };
    s_1_3 = v_42;
    s_2 = v_43;
    r_3 = v_46;
  } else {
    ck_3_2_0 = ck_3_2;
    if (ck_3_2_0) {
      v_47 = true;
      v_44 = true;
      v_45 = true;
    } else {
      if (c_1) {
        r_3_St_1_Wait = true;
      } else {
        r_3_St_1_Wait = self->pnr;
      };
      v_47 = r_3_St_1_Wait;
      if (c_1) {
        s_St_1_Wait_1 = true;
      } else {
        s_St_1_Wait_1 = false;
      };
      v_44 = s_St_1_Wait_1;
      if (c_1) {
        s_St_1_Wait_2 = true;
      } else {
        s_St_1_Wait_2 = false;
      };
      v_45 = s_St_1_Wait_2;
      if (s_St_1_Wait_1) {
        s_St_1_Wait_2_1 = s_St_1_Wait_2;
      } else {
        s_St_1_Wait_2_0 = s_St_1_Wait_2;
      };
    };
    s_1_3 = v_44;
    s_2 = v_45;
    r_3 = v_47;
  };
  ck_4_1 = s_1_3;
  ck_4_2 = s_2;
  if (ck_4_1) {
    ck_4_2_1 = ck_4_2;
    if (ck_4_2_1) {
      a_1_St_1_Active = true;
      v_32 = a_1_St_1_Active;
      nr_St_1_Active = false;
      v_38 = nr_St_1_Active;
      ns_St_1_Active_1 = true;
      v_34 = ns_St_1_Active_1;
      ns_St_1_Active_2 = true;
      v_35 = ns_St_1_Active_2;
    } else {
      a_1_St_1_Idle = false;
      nr_St_1_Idle = false;
      ns_St_1_Idle_1 = true;
      ns_St_1_Idle_2 = false;
      v_32 = a_1_St_1_Idle;
      v_38 = nr_St_1_Idle;
      v_34 = ns_St_1_Idle_1;
      v_35 = ns_St_1_Idle_2;
    };
    a_1 = v_32;
    ns_1_3 = v_34;
    ns_2 = v_35;
    nr = v_38;
  } else {
    ck_4_2_0 = ck_4_2;
    if (ck_4_2_0) {
      v_33 = true;
      v_39 = true;
      v_36 = true;
      v_37 = true;
    } else {
      a_1_St_1_Wait = false;
      v_33 = a_1_St_1_Wait;
      nr_St_1_Wait = false;
      v_39 = nr_St_1_Wait;
      ns_St_1_Wait_1 = false;
      v_36 = ns_St_1_Wait_1;
      ns_St_1_Wait_2 = false;
      v_37 = ns_St_1_Wait_2;
      if (ns_St_1_Wait_1) {
        ns_St_1_Wait_2_1 = ns_St_1_Wait_2;
      } else {
        ns_St_1_Wait_2_0 = ns_St_1_Wait_2;
      };
    };
    a_1 = v_33;
    ns_1_3 = v_36;
    ns_2 = v_37;
    nr = v_39;
  };
  _out->a1 = a_1;
  if (ns_1_3) {
    ns_2_1 = ns_2;
  } else {
    ns_2_0 = ns_2;
  };
  if (ck_4_1) {
    if (ck_4_2_1) {
      if (ns_St_1_Active_1) {
        ns_St_1_Active_2_1 = ns_St_1_Active_2;
      } else {
        ns_St_1_Active_2_0 = ns_St_1_Active_2;
      };
    } else {
      if (ns_St_1_Idle_1) {
        ns_St_1_Idle_2_1 = ns_St_1_Idle_2;
      } else {
        ns_St_1_Idle_2_0 = ns_St_1_Idle_2;
      };
    };
  };
  if (s_1_3) {
    s_2_1 = s_2;
  } else {
    s_2_0 = s_2;
  };
  if (ck_3_1) {
    if (ck_3_2_1) {
      if (s_St_1_Active_1) {
        s_St_1_Active_2_1 = s_St_1_Active_2;
      } else {
        s_St_1_Active_2_0 = s_St_1_Active_2;
      };
    } else {
      if (s_St_1_Idle_1) {
        s_St_1_Idle_2_1 = s_St_1_Idle_2;
      } else {
        s_St_1_Idle_2_0 = s_St_1_Idle_2;
      };
    };
  };
  if (ck_1) {
    ck_2_3_1 = ck_2_3;
    if (ck_2_3_1) {
      if (e) {
        r_4_St_2_Active = true;
      } else {
        r_4_St_2_Active = self->pnr_1;
      };
      v_62 = r_4_St_2_Active;
      if (e) {
        s_1_St_2_Active_1 = true;
      } else {
        s_1_St_2_Active_1 = true;
      };
      v_58 = s_1_St_2_Active_1;
      if (e) {
        s_1_St_2_Active_2 = false;
      } else {
        s_1_St_2_Active_2 = true;
      };
      v_59 = s_1_St_2_Active_2;
    } else {
      v_7 = !(c);
      v_8 = (r&&v_7);
      if (v_8) {
        v_10 = true;
        v_9_1 = false;
        v_9_2 = false;
      } else {
        v_10 = self->pnr_1;
        v_9_1 = true;
        v_9_2 = false;
      };
      v_6 = (r&&c);
      if (v_6) {
        r_4_St_2_Idle = true;
        s_1_St_2_Idle_1 = true;
        s_1_St_2_Idle_2 = true;
      } else {
        r_4_St_2_Idle = v_10;
        s_1_St_2_Idle_1 = v_9_1;
        s_1_St_2_Idle_2 = v_9_2;
      };
      v_62 = r_4_St_2_Idle;
      v_58 = s_1_St_2_Idle_1;
      v_59 = s_1_St_2_Idle_2;
      if (v_9_1) {
        v_9_2_1 = v_9_2;
      } else {
        v_9_2_0 = v_9_2;
      };
    };
    s_1_1 = v_58;
    s_1_2 = v_59;
    r_4 = v_62;
  } else {
    ck_2_3_0 = ck_2_3;
    if (ck_2_3_0) {
      v_63 = true;
      v_60 = true;
      v_61 = true;
    } else {
      if (c) {
        r_4_St_2_Wait = true;
      } else {
        r_4_St_2_Wait = self->pnr_1;
      };
      v_63 = r_4_St_2_Wait;
      if (c) {
        s_1_St_2_Wait_1 = true;
      } else {
        s_1_St_2_Wait_1 = false;
      };
      v_60 = s_1_St_2_Wait_1;
      if (c) {
        s_1_St_2_Wait_2 = true;
      } else {
        s_1_St_2_Wait_2 = false;
      };
      v_61 = s_1_St_2_Wait_2;
      if (s_1_St_2_Wait_1) {
        s_1_St_2_Wait_2_1 = s_1_St_2_Wait_2;
      } else {
        s_1_St_2_Wait_2_0 = s_1_St_2_Wait_2;
      };
    };
    s_1_1 = v_60;
    s_1_2 = v_61;
    r_4 = v_63;
  };
  ck_2_1 = s_1_1;
  ck_2_2 = s_1_2;
  if (ck_2_1) {
    ck_2_2_1 = ck_2_2;
    if (ck_2_2_1) {
      a_St_2_Active = true;
      v_48 = a_St_2_Active;
      nr_1_St_2_Active = false;
      v_54 = nr_1_St_2_Active;
      ns_1_St_2_Active_1 = true;
      v_50 = ns_1_St_2_Active_1;
      ns_1_St_2_Active_2 = true;
      v_51 = ns_1_St_2_Active_2;
    } else {
      a_St_2_Idle = false;
      nr_1_St_2_Idle = false;
      ns_1_St_2_Idle_1 = true;
      ns_1_St_2_Idle_2 = false;
      v_48 = a_St_2_Idle;
      v_54 = nr_1_St_2_Idle;
      v_50 = ns_1_St_2_Idle_1;
      v_51 = ns_1_St_2_Idle_2;
    };
    a = v_48;
    ns_1_1 = v_50;
    ns_1_2 = v_51;
    nr_1 = v_54;
  } else {
    ck_2_2_0 = ck_2_2;
    if (ck_2_2_0) {
      v_49 = true;
      v_55 = true;
      v_52 = true;
      v_53 = true;
    } else {
      a_St_2_Wait = false;
      v_49 = a_St_2_Wait;
      nr_1_St_2_Wait = false;
      v_55 = nr_1_St_2_Wait;
      ns_1_St_2_Wait_1 = false;
      v_52 = ns_1_St_2_Wait_1;
      ns_1_St_2_Wait_2 = false;
      v_53 = ns_1_St_2_Wait_2;
      if (ns_1_St_2_Wait_1) {
        ns_1_St_2_Wait_2_1 = ns_1_St_2_Wait_2;
      } else {
        ns_1_St_2_Wait_2_0 = ns_1_St_2_Wait_2;
      };
    };
    a = v_49;
    ns_1_1 = v_52;
    ns_1_2 = v_53;
    nr_1 = v_55;
  };
  _out->a2 = a;
  v = (_out->a1&&_out->a2);
  v_5 = !(v);
  if (ns_1_1) {
    ns_1_2_1 = ns_1_2;
  } else {
    ns_1_2_0 = ns_1_2;
  };
  if (ck_2_1) {
    if (ck_2_2_1) {
      if (ns_1_St_2_Active_1) {
        ns_1_St_2_Active_2_1 = ns_1_St_2_Active_2;
      } else {
        ns_1_St_2_Active_2_0 = ns_1_St_2_Active_2;
      };
    } else {
      if (ns_1_St_2_Idle_1) {
        ns_1_St_2_Idle_2_1 = ns_1_St_2_Idle_2;
      } else {
        ns_1_St_2_Idle_2_0 = ns_1_St_2_Idle_2;
      };
    };
  };
  if (s_1_1) {
    s_1_2_1 = s_1_2;
  } else {
    s_1_2_0 = s_1_2;
  };
  if (ck_1) {
    if (ck_2_3_1) {
      if (s_1_St_2_Active_1) {
        s_1_St_2_Active_2_1 = s_1_St_2_Active_2;
      } else {
        s_1_St_2_Active_2_0 = s_1_St_2_Active_2;
      };
    } else {
      if (s_1_St_2_Idle_1) {
        s_1_St_2_Idle_2_1 = s_1_St_2_Idle_2;
      } else {
        s_1_St_2_Idle_2_0 = s_1_St_2_Idle_2;
      };
    };
  };
  self->pnr = nr;
  self->v_40 = ns_1_3;
  self->v_41 = ns_2;
  self->pnr_1 = nr_1;
  self->v_56 = ns_1_1;
  self->v_57 = ns_1_2;;
}

