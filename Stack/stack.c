#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void create(Stack *s){
    s->top = -1;
}

int full(Stack s){
    return (s.top >= MAX_STACK-1);
}

int empty(Stack s){
    return (s.top <= -1);
}

int len(Stack s){
    return (s.top + 1);
}

int append(Stack *s, Data data){
    if(full(*s)) return -1;

    s->top++;
    s->stack[s->top] = data;
    return s->top;
}

int pop(Stack *s, Data *data){
    if (empty(*s)) return -1;

    *data = s->stack[s->top];
    s->top--;
    return s->top;
}

void show(Stack s){
    int i;

    for (i=0; i<s.top; i++){
        printf("%i", s.stack[i].value); // why didn't work with pointer?
    }
}
