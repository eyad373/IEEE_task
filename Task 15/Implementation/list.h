#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

typedef struct Node{
    int data;
    struct Node *next;
}node;

typedef struct{
    node *head;
    int list_size;
}List;

void create_list(List *l);
void insert_at_end(List *l,int data);
void view_nodes(List *l);
int count_nodes(List *l);
void insert_at_beg(List* l,int data);
void insert_at_pos(List *l,int pos,int data);
void delete_first(List *l);
void delete_last(List *l);
void delete_at_pos(List *l, int pos);
void delete_list(List *l);
void reverse_list(List *l);

#endif // LIST_H_INCLUDED
