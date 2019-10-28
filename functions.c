#include "headers.h"

void print_list(struct node *p){
    printf("Linked List: [");
    while (p != NULL){
        printf("%d", p->i);
        p = p->next;
    }
    printf("]\n");
}

struct node * insert_front(struct node *front, int val){
    struct node *new;
    new = malloc(sizeof(struct node));
    new->i = val;
    new->next = front;
    return new;
}

struct node * free_list(struct node * node){
    struct node * p = node;
    while (node != NULL){
        p = p->next;
        free(node);
        node = p;
    }
    return node;
}

struct node * remove_node(struct node *front, int data){
    if (!front) return front;
    if (front->i == data){
        struct node *temp;
        temp = front->next;
        free(front);
        return temp;
    }
    front->next = remove_node(front->next, data);
    return front;
}
