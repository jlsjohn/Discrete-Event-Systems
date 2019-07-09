#include <sys/types.h>
#ifndef _WIN32
#include <sys/select.h>
#include <sys/socket.h>
#else
#include <winsock2.h>
#endif
#include <string.h>
#include <microhttpd.h>
#include <stdio.h>
#include <stdlib.h>
#include "_main.h"

#define PORT 8082
#define n 18

Projeto__supervisor_mem mem;

int glob_cnt = 0;

struct item
{
    const char *key;
    const char *value;
};

struct item dict[n];

int save_items (void *cls, enum MHD_ValueKind kind, 
                   const char *key, const char *value)
{
  dict[glob_cnt].key = key; 
  dict[glob_cnt].value = value;
  glob_cnt += 1;
  return MHD_YES;
}

static int
answer_to_connection (void *cls, struct MHD_Connection *connection,
                      const char *url, const char *method,
                      const char *version, const char *upload_data,
                      size_t *upload_data_size, void **con_cls)
{
  char *json = malloc( 10000 );
  struct MHD_Response *response;
  int ret;
  MHD_get_connection_values(connection, MHD_GET_ARGUMENT_KIND, &save_items, NULL);
  printf("Counter:%d \n", glob_cnt);
  glob_cnt = 0;
  
  int step_c;
  int step_max;
  int botaoGeral = 0;
  int liga_lp1 = 0;
  int liga_lp2 = 0;
  int liga_lp3 = 0;
  int pres_usuario1 = 0;
  int pres_usuario2 = 0;
  int pres_usuario3 = 0;
  int liga_PC1 = 0;
  int desliga_PC1 = 0;
  int liga_PC2 = 0;
  int desliga_PC2 = 0;
  int liga_PC3 = 0;
  int desliga_PC3 = 0;
  int liga_desliga_ac = 0;
  int alarme_sinal = 0;
  int alarme_final = 0;

  Projeto__supervisor_out _res;

  step_c;
  step_max;

  int i;
  for(i= 0; i < n; i++)
  {
    if (strcmp(dict[i].key, "botaoGeral") == 0)
    {
      botaoGeral = atoi(dict[i].value);
    } 
    else if (strcmp(dict[i].key, "liga_lp1") == 0)
    {
      liga_lp1 = atoi(dict[i].value);
    } 
    else if (strcmp(dict[i].key, "liga_lp2") == 0)
    {
      liga_lp2 = atoi(dict[i].value);
    } 
    else if (strcmp(dict[i].key, "liga_lp3") == 0)
    {
      liga_lp3 = atoi(dict[i].value);
    } 
    else if (strcmp(dict[i].key, "pres_usuario1") == 0)
    {
      pres_usuario1 = atoi(dict[i].value);
    }
    else if (strcmp(dict[i].key, "pres_usuario2") == 0)
    {
      pres_usuario2 = atoi(dict[i].value);
    }
    else if (strcmp(dict[i].key, "pres_usuario3") == 0)
    {
      pres_usuario3 = atoi(dict[i].value);
    }
    else if (strcmp(dict[i].key, "liga_PC1") == 0)
    {
      liga_PC1 = atoi(dict[i].value);
    }
    else if (strcmp(dict[i].key, "desliga_PC1") == 0)
    {
      desliga_PC1 = atoi(dict[i].value);
    } 
    else if (strcmp(dict[i].key, "liga_PC2") == 0)
    {
      liga_PC2 = atoi(dict[i].value);
    } 
    else if (strcmp(dict[i].key, "desliga_PC2") == 0)
    {
      desliga_PC2 = atoi(dict[i].value);
    } 
    else if (strcmp(dict[i].key, "liga_PC3") == 0)
    {
      liga_PC3 = atoi(dict[i].value);
    }
    else if (strcmp(dict[i].key, "desliga_PC3") == 0)
    {
      desliga_PC3 = atoi(dict[i].value);
    }
    else if (strcmp(dict[i].key, "liga_desliga_ac") == 0)
    {
      liga_desliga_ac = atoi(dict[i].value);
    }
    else if (strcmp(dict[i].key, "alarme_sinal") == 0)
    {
      alarme_sinal = atoi(dict[i].value);
    }
    else if (strcmp(dict[i].key, "alarme_final") == 0)
    {
      alarme_final = atoi(dict[i].value);
    }
    else
    {
      printf("Not implemented %s\n", dict[i].key);
    }
  }
  
  for(i= 0; i < n; i++)
  {
    printf("%s, %s\n",dict[i].key, dict[i].value);
  }  
  
  Projeto__supervisor_step(botaoGeral, liga_lp1, liga_lp2, liga_lp3, pres_usuario1, pres_usuario2, pres_usuario3, liga_PC1, desliga_PC1, liga_PC2, desliga_PC2, liga_PC3, desliga_PC3, liga_desliga_ac, alarme_sinal, alarme_final, &_res, &mem);

  char aux[2];
  
  strcat(json, "{");

  strcat(json, "\'estado_lp1\':");
  sprintf(aux, "%d", _res.estado_lp1);
  strcat(json, aux);
  
  strcat(json, ",\'estado_lp2\':");
  sprintf(aux, "%d", _res.estado_lp2);
  strcat(json, aux);

  strcat(json, ",\'estado_lp3\':");
  sprintf(aux, "%d", _res.estado_lp3);
  strcat(json, aux);

  strcat(json, ",\'estado_PC1\':");
  sprintf(aux, "%d", _res.estado_PC1);
  strcat(json, aux);
  
  strcat(json, ",\'estado_PC2\':");
  sprintf(aux, "%d", _res.estado_PC2);
  strcat(json, aux);

  strcat(json, ",\'estado_PC3\':");
  sprintf(aux, "%d", _res.estado_PC3);
  strcat(json, aux);

  strcat(json, ",\'estado_ac\':");
  sprintf(aux, "%d", _res.estado_ac);
  strcat(json, aux);

  strcat(json, ",\'estado_al\':");
  sprintf(aux, "%d", _res.estado_al);
  strcat(json, aux);

  strcat(json, ",\'tem_usuario1\':");
  sprintf(aux, "%d", _res.tem_usuario1);
  strcat(json, aux);
  
  strcat(json, ",\'tem_usuario2\':");
  sprintf(aux, "%d", _res.tem_usuario2);
  strcat(json, aux);

  strcat(json, ",\'tem_usuario3\':");
  sprintf(aux, "%d", _res.tem_usuario3);
  strcat(json, aux);

  strcat(json, "}");
  
  printf("%s\n",json);
  
  response =
  MHD_create_response_from_buffer (strlen (json), (void *) json, 
				     MHD_RESPMEM_PERSISTENT);
  ret = MHD_queue_response (connection, MHD_HTTP_OK, response);
  MHD_destroy_response (response);

  return ret;
}

int main(int argc, char** argv) {
  
  struct MHD_Daemon *daemon;
  
  Projeto__supervisor_reset(&mem);
  
  int i;
  for(i= 0; i < n; i++)
  {
    dict[i].key = "";
    dict[i].value = "";
  }

  daemon = MHD_start_daemon (MHD_USE_SELECT_INTERNALLY, PORT, NULL, NULL,
                             &answer_to_connection, NULL, MHD_OPTION_END);
  if (NULL == daemon)
    return 1;

  (void) getchar ();

  MHD_stop_daemon (daemon);
  return 0;
}

