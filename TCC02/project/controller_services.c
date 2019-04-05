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
#define n 12

Project__supervisor_mem mem;
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

  int presence = 0;
  int turn_on_l1 = 0;
  int turn_on_l2 = 0;
  int turn_on_l3 = 0;
  int turn_on_rl = 0;
  int turn_on_l = 0;
  int turn_on_rac = 0;
  int turn_on_lac = 0;
  int turn_on_tv = 0;
  int turn_on_wm = 0;
  int do_open = 0;
  Project__supervisor_out _res;
  step_c;
  step_max;

  int i;
  for(i= 0; i < n; i++)
  {
    if (strcmp(dict[i].key, "presence") == 0)
    {
      presence = atoi(dict[i].value);
    } 
    else if (strcmp(dict[i].key, "turn_on_l1") == 0)
    {
      turn_on_l1 = atoi(dict[i].value);
    }
    else if (strcmp(dict[i].key, "turn_on_l2") == 0)
    {
      turn_on_l2 = atoi(dict[i].value);
    }
    else if (strcmp(dict[i].key, "turn_on_l3") == 0)
    {
      turn_on_l3 = atoi(dict[i].value);
    }
    else if (strcmp(dict[i].key, "turn_on_rl") == 0)
    {
      turn_on_rl = atoi(dict[i].value);
    }
    else if (strcmp(dict[i].key, "turn_on_l") == 0)
    {
      turn_on_l = atoi(dict[i].value);
    }
    else if (strcmp(dict[i].key, "turn_on_rac") == 0)
    {
      turn_on_rac = atoi(dict[i].value);
    }
    else if (strcmp(dict[i].key, "turn_on_lac") == 0)
    {
      turn_on_lac = atoi(dict[i].value);
    }
    else if (strcmp(dict[i].key, "turn_on_tv") == 0)
    {
      turn_on_tv = atoi(dict[i].value);
    }
    else if (strcmp(dict[i].key, "do_open") == 0)
    {
      do_open = atoi(dict[i].value);
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
  
  Project__supervisor_step(presence, turn_on_l1, turn_on_l2, turn_on_l3, turn_on_rl, turn_on_l, turn_on_rac, turn_on_lac, turn_on_tv, do_open, &_res, &mem);

  char aux[2];
  
  strcat(json, "{");
  strcat(json, "\'has_presence\':");
  sprintf(aux, "%d", _res.has_presence);
  strcat(json, aux);
  
  strcat(json, ",\'is_on_l1\':");
  sprintf(aux, "%d", _res.is_on_l1);
  strcat(json, aux);
  
  strcat(json, ",\'is_on_l2\':");
  sprintf(aux, "%d", _res.is_on_l2);
  strcat(json, aux);

  strcat(json, ",\'is_on_l3\':");
  sprintf(aux, "%d", _res.is_on_l3);
  strcat(json, aux);
  
  strcat(json, ",\'is_on_rl\':");
  sprintf(aux, "%d", _res.is_on_rl);
  strcat(json, aux);

  strcat(json, ",\'is_on_l\':");
  sprintf(aux, "%d", _res.is_on_l);
  strcat(json, aux);
  
  strcat(json, ",\'is_tv_on\':");
  sprintf(aux, "%d", _res.is_tv_on);
  strcat(json, aux);
 
  strcat(json, ",\'is_w_opened\':");
  sprintf(aux, "%d", _res.is_w_opened);
  strcat(json, aux);

  strcat(json, ",\'working_state_rac\':");
  sprintf(aux, "%d", _res.working_state_rac);
  strcat(json, aux);
  
  strcat(json, ",\'working_state_lac\':");
  sprintf(aux, "%d", _res.working_state_lac);
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
  
  Project__supervisor_reset(&mem);
  
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

