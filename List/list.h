#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#define MAX_STRING 20
#define MAX_LIST 10

typedef struct {
    int code; //product code
    char name[MAX_STRING]; //product name
    float value; //product value
    int qty; //available quantity
} Data;

typedef struct list_item{
    Data data;
    struct list_item *next; //adress of next item 
} item;


item* create_list();

void append(item *, Data);
void show_item(item *);
void show_list(item *);
item* destroy_list(item *);
item* lowest_item(item *);
float list_mean(item *);
void read_string(char txt[]);

#endif