
#include <stdio.h>
#include <stdlib.h>

#include "headers.h"

int main() {
    struct node * linked_list = NULL;
    printf("empty list: \n");
    print_list(linked_list);
    int i;
    for (i = 0; i < 9; i++) {
        linked_list = insert_front(linked_list, i);
        print_list(linked_list);
    }
    linked_list = remove_node(linked_list, 0);
    printf("Removing 0: \n");
    print_list(linked_list);
    linked_list = remove_node(linked_list, 1);
    printf("Removing 1: \n");
    print_list(linked_list);
    linked_list = remove_node(linked_list, 2);
    printf("Removing 2: \n");
    print_list(linked_list);
    linked_list = remove_node(linked_list, 3);
    printf("Removing 3: \n");
    print_list(linked_list);
    linked_list = remove_node(linked_list, 4);
    printf("Removing 4: \n");
    print_list(linked_list);
    linked_list = remove_node(linked_list, 5);
    printf("Removing 5: \n");
    print_list(linked_list);
    linked_list = remove_node(linked_list, 6);
    printf("Removing 6: \n");
    print_list(linked_list);
    linked_list = remove_node(linked_list, 7);
    printf("Removing 7: \n");
    print_list(linked_list);
    linked_list = remove_node(linked_list, 8);
    printf("Removing 8: \n");
    print_list(linked_list);

    printf("Freeing linked list: \n");
    linked_list = free_list(linked_list);
    printf("Freed linked list: %p\n", linked_list);
    return 0;
}
