#ifndef LIST_H
#define LIST_H
#include "darknet.h"

list_d *make_list();
int list_find(list_d *l, void *val);

void list_insert(list_d *, void *);


void free_list_contents(list_d *l);

#endif
