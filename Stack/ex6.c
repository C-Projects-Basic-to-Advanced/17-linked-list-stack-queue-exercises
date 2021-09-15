#include <stdio.h>
#include <stdlib.h>
#include "stack.c"

int main(){
    int n=10;
    Data r={0, ""};
    Stack s; // why didn't work with pointer?

    create(&s);

    while (n > 1){
        r.value = n % 2;
        n = n / 2;
        append(&s, r);
    }

    r.value = n;
    append(&s, r);

    r.value = 0;
    while (s.top < 8){
        append(&s, r);
    }

    while (s.top > -1){
        pop(&s, &r);
        printf("%i", r.value);
    }
    show(s);

    return 0;
}