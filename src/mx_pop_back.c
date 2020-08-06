#include "libmx.h"

void mx_pop_back(t_list **head) {  
   if ((*head) -> next == NULL) {
            free(head);
      }

    t_list *node = *head;
    while (node -> next -> next != NULL) {
        node = node -> next;
    }
    free(node -> next);
    node -> next = NULL;
}
