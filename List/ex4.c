#include <stdio.h>
#include <stdlib.h>
#include "list.c"

int main(){
    item *list;
    Data d1={1234, "Lego", 12.5, 40}, d2={12345, "Batman", 12.3, 49}, d3={12345, "Batman", 12.9, 49};

    list = create_list();

    append(list, d1);
    append(list, d2);
    append(list, d3);

    printf("List:\n");
    show_list(list);
    
    printf("Mean:\n ");
    printf("%.2f", list_mean(list));

    destroy_list(list);
    return 0;
}
