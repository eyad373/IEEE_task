#include <stdlib.h>
#include <stdio.h>
#include "list.h"

void create_list(List *l)
{
    l->head=(void*)0;
    l->list_size=0;
}

void insert_at_end(List *l,int data)
{
    node *temp,*ptr;
    temp=(node*)malloc(sizeof(node));
    if (temp == (void*)0)
    {
        return;
    }
    temp->data=data;
    temp->next=(void*)0;
    if((l->head == (void*)0))
    {
        l->head=temp;
    }
    else
    {
        ptr=l->head;
        while(ptr->next)
        {
            ptr=ptr->next;
        }
        ptr->next=temp;
    }
    l->list_size++;
}

void view_nodes(List *l)
{
    node *current=l->head;
    if(current==(void*)0)
        printf("List is empty\n");
    else
    {
        int i=1;
        while(current)
        {
            printf("%d) %d\n",i,current->data);
            current=current->next;
            i++;
        }
    }
    printf("\n");
}

int count_nodes(List* l)
{
    return (l->list_size);
}

void insert_at_beg(List* l,int data)
{
    node* temp=(node*)malloc(sizeof(node));
    if (temp == (void*)0)
    {
        return;
    }
    temp->data=data;
    temp->next=l->head;
    l->head=temp;
    l->list_size++;
}

void insert_at_pos(List *l,int pos,int data) //start position is 1
{
    if(pos<1)
    {
        return;
    }
    node *temp, *ptr;
    temp=(node*)malloc(sizeof(node));
    if (temp == (void*)0)
    {
        return;
    }
    temp->data=data;
    temp->next=(void*)0;
    if((pos==1) || (l->head == (void*)0))    //first node
    {
        temp->next=l->head;
        l->head=temp;
    }
    else
    {
        int i=1;
        ptr=l->head;
        while((i<pos-1) && (ptr->next != (void*)0) )
        {
            ptr=ptr->next;
            i++;
        }
        temp->next=ptr->next;
        ptr->next=temp;
    }
    l->list_size++;
}

void delete_first(List *l)
{
    node* temp=l->head;
    if(temp==(void*)0)
    {
        printf("List is empty\n");
    }
    else
    {
        l->head=l->head->next;
        free(temp);
        temp=(void*)0;
        l->list_size--;
    }
}

void delete_last(List *l)
{
    node* temp=l->head;
    if(temp==(void*)0)
    {
        printf("List is empty\n");
    }
    else if( temp->next==(void*)0)
    {
        free(temp);
        temp=(void*)0;
        l->head=(void*)0;
        l->list_size--;
    }
    else
    {
        //node* temp2=l->head;
        while(temp->next->next)
        {
            //temp2=temp;
            temp=temp->next;
        }
        //temp2->next=(void*)0;
        //free(temp);
        //temp=(void*)0;
        free(temp->next);
        temp->next=(void*)0;
        l->list_size--;
    }
}

void delete_at_pos(List *l, int pos)
{
    node *current=l->head;
    if(current==(void*)0)
    {
        printf("List is empty");
    }
    else if(pos==1)
    {
        l->head=l->head->next;
        free(current);
        current=(void*)0;
        l->list_size--;
    }
    else
    {
        int i=1;
        node* ptr=l->head;
        current=l->head;
        while(i<pos && (current->next != (void*)0))
        {
            ptr=current;
            current=current->next;
            i++;
        }
        ptr->next=current->next;
        free(current);
        current=(void*)0;
        l->list_size--;
    }
}

void delete_list(List *l)
{
    node *temp=l->head;
    while(temp)
    {
        temp=temp->next;
        free(l->head);
        l->head=temp;
    }
    l->list_size=0;
}

void reverse_list(List *l)
{
    node *prev=(void*)0;
    node *next=(void*)0;
    while(l->head)
    {
        next=l->head->next;
        l->head->next=prev;
        prev=l->head;
        l->head=next;
    }
    l->head=prev;

}
