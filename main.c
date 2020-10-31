#include "nodes.h"
int i;
int main(){
    struct node *h = new_node(0);
    for(i = 1; i<9; i++){
        h = insert_front(h,i);
    }
    h = remove_node(h,-1);
    print_list(h);
    h = remove_node(h,5);
    print_list(h);
    h = free_list(h);
    print_list(h);
    return 0;
}