#include "nodes.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct node * new_node(int data){
    struct node *nf;
    nf = malloc(sizeof(struct node));
    nf->id = data;
    nf->next = NULL;
    return nf;
}

void print(struct node *n){
    printf("%d ",n->id);
}

void print_list(struct node *n){
    while(n){
        print(n);
        n = n->next;
    }
    printf("\n");
}

struct node * insert_front(struct node *n, int data){
    struct node *h = new_node(data);
    h->next = n;
    return h;
}

struct node * free_list(struct node *n){
    struct node *h;
    while(h){
        printf("freeing: %d\n",n->id);
        h = n->next;
        free(n);
        n = h;
    }
    return h;
}

struct node * remove_node(struct node *front, int data){
    struct node *h = front;
    if(front->id == data){
        h = front->next;
        return h;
    }
    while(front->next){
        if(front->next->id == data){
            front->next = front->next->next;
            return h;
        }
        front = front->next;
    }
    return h;
}