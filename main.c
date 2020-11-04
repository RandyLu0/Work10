#include "nodes.h"
#include <stdio.h>

int i;
int main(){
    printf("creating list from [0,5)\n");
    struct node *h = new_node(0);
    for(i = 1; i<5; i++){
        h = insert_front(h,i);
    }
    print_list(h);
    printf("removing -1\n");
    h = remove_node(h,-1);
    print_list(h);
    printf("removing 3\n");
    h = remove_node(h,3);
    print_list(h);
    printf("removing 4\n");
    h = remove_node(h,4);
    print_list(h);
    printf("removing 0\n");
    h = remove_node(h,0);
    print_list(h);
    printf("freeing list\n");
    h = free_list(h);
    printf("freed list\n");
    print_list(h);
    
    return 0;
}