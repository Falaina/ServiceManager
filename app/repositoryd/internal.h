#ifndef __INTERNAL_H_
#define __INTERNAL_H_

#include "s16.h"

typedef struct subscriber_s
{
    int port;
} subscriber_t;

ListGenForNameType (subscriber, subscriber_t);

typedef struct repositoryd_s
{
    svc_list services;
    subscriber_list subscribers;
} repositoryd_t;

extern repositoryd_t RD;

svc_id_t insert_svc (char const * name);
svc_id_t install_svc (svc_t * svc);
int delete_svc (svc_id_t id);
int count_svcs ();
svc_list retrieve_all_svcs ();
int set_svc_property_int (svc_id_t id, char const * name, long value);
int set_svc_property_string (svc_id_t id, char const * name,
                             char const * value);

#endif
