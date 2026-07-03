
#include <stdio.h>


void printList(int *start, int length) {
    int i;
    for (i=0 ; i < length; i++ ) {
       printf("%d - ", *(start + i)); 
    }
    printf("\n");
}


int main() {
    printf("First algo lesson!\n\n");

    int list[] = { 5, 3, 8, 1, 4 };
    int listLen = sizeof(list) / sizeof(int);
    printf("listLen = %d\n", listLen);

    printf("list au depart:\n");
    printList(list, listLen);

    int i, j;
    int min = list[0];
    int min_index;
    int tmp;
    for ( j = 0; j < listLen -1; j++ ) {
        min_index = j;

        for ( i = j+1; i < listLen; i++ ) {
            if ( list[i] < list[min_index] ) {
                min_index = i;
            }
        }
        tmp = list[j];
        list[j] = list[min_index];
        list[min_index] = tmp;

    }

    printf("\ntrier:\n");


    printList(list, listLen);


    return 0;
}
