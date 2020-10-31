#ifndef NODES_H
#define NODES_H

struct node{
    int id;
    struct node *next;
};

void print(struct node *n);

struct node * new_node(int data);

void purchase(struct node *n);

void print_list(struct node *n);

struct node * insert_front(struct node *n, int data);

struct node * free_list(struct node *n);

struct node * remove_node(struct node *front, int data);

#endif