#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#define MAX_STRING 20
#define MAX_STACK 10

typedef struct {
    int value;
    char name[MAX_STRING];
} Data;

typedef struct {
    Data stack[MAX_STACK];
    int top;
} Stack;

void create(Stack *s);

// Returns -1 if unsucessful
// Returns s.top if sucessful
int append(Stack *s, Data data);

// Returns the last element of the stack
int pop(Stack *s, Data *data);

// Returns 1 if empty and -1 if not
int empty(Stack s);

// Returns 1 if full and -1 if not
int full(Stack s);

// Returns the lenght of the stack
int len(Stack s);

void show(Stack s);

#endif