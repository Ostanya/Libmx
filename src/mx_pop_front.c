#include "libmx.h"

void mx_pop_front(t_list **list) {  
    t_list *next_node = NULL;

    if (list && *list) {
        next_node = (*list)->next;
        free(*list);
        *list = next_node;
    }
}
