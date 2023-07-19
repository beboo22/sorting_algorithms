#include "sort.h"
void insertion_sort_list(listint_t **list){
        listint_t *node,*temp;
        
        if(list == NULL || *list == NULL || (*list)->next == NULL)
                return NULL;
        node = *list;
        node = node->next;
        while (node)
        {
                while (node->prev)
                {
                        
                }
                
        }
        
}
