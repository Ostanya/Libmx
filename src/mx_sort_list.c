#include "libmx.h"
t_list *mx_sort_list(t_list *lst, bool (*cmp)(void *a, void *b)) {
    t_list *list1;
    t_list *list2;
    void *tmp;

    if (lst != NULL) {
        for (list1 = lst; list1 != NULL; list1 = list1->next) {
            for (list2 = list1->next; list2 != NULL; list2 = list2->next) {
                if (cmp(list1->data, list2->data) == true)
                    tmp = list1 -> data;
                    list1 ->data = list2 ->data;
                    list2 ->data = tmp;
            }
        }
    }
    return lst;
}
