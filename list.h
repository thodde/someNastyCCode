#ifndef LIST
#define LIST
#include "my_globals.h"

typedef struct {
    PCB* data;
    struct Node* next;
} Node, *LinkedList;

LinkedList create_list();
int add_to_list( LinkedList, PCB*);
PCB* remove_from_list(LinkedList, INT32);
int get_length(LinkedList l);
Node* search_for_pid(LinkedList l, INT32 pid);
Node* search_for_name(LinkedList l, char* name);

#endif
