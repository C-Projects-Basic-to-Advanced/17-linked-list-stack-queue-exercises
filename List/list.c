#include <stdio.h>
#include <stdlib.h>
#include "list.h"

item* create_list(){
    item *n;
    n = (item*) malloc(sizeof(item));
    if( n == NULL ) {
        printf("Out of memory...");
        exit(EXIT_FAILURE);
    }
    n->next = NULL;
    return n;
}

void append(item *head, Data data){
    item *new, *pos = head;

    new = (item*) malloc(sizeof(item));
    if (new == NULL){
        printf("Out of memory...");
        exit(EXIT_FAILURE);
    }
    new->next = NULL;

    while (pos->next != NULL){
        pos = pos->next; 
    }
    pos->next = new;
    new->next = NULL;
    new->data = data;
}

void show_item(item *pos){
    printf("%i\t", pos->next->data.code);
    printf("%s\t", pos->next->data.name);
    printf("%.2f\t", pos->next->data.value);
    printf("%i\n", pos->next->data.qty);
}

void show_list(item *head){
    item *pos = head;

    while (pos->next != NULL){
        show_item(pos);

        pos = pos->next;
    }

    printf("\n");
}

item* destroy_list(item *head) {
  item *pos = head;
  while( pos->next != NULL ) {
    pos = pos->next;
    free(head);
    head = pos;
  }
  free(head);
  return NULL;
}

// functions for the exercises

item* lowest_item(item *head){
    item *pos = head, *low = head;
    low->data.value = 1e6;

    if (head->next == NULL){
        return NULL;
    }

    while (pos->next != NULL){
        if (pos->data.value < low->data.value){
            low->data = pos->data;
            low->next = pos->next; //would it be possible to point low to pos directly??
        }

        pos = pos->next;
    }

    if (pos->data.value < low->data.value){
            low->data = pos->data;
            low->next = pos->next; //would it be possible to point low to pos directly??
        }

    return low;
}

float list_mean(item *head){
    item *pos = head;
    float sum=0.0;
    int n=0;

    if (head->next == NULL){
        return -1;
    }

    pos = pos->next;
    while (pos->next != NULL){
        sum += pos->data.value;
        n++;
        pos = pos->next;
    }

    sum += pos->data.value;
    n++;

    return sum/n;
}

void read_string(char txt[]){
    fflush(stdin);
    fgets(txt, MAX_STRING, stdin);
    if (txt[strlen(txt)-1]=='\n')
        txt[strlen(txt)-1]='\0';
}