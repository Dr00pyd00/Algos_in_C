

#include <stdio.h>


void printList(int *start, int length) {
    int i;
    for (i=0 ; i < length; i++ ) {
       printf("%d - ", *(start + i)); 
    }
    printf("\n");
}

void sortList(int *start, int length) {
    int i, j, min_index, tmp;


    for ( j = 0; j < length - 1; j++ ) {
        min_index = j;
        for ( i = j+1; i < length; i++ ) {
            if ( *(start + i) < *(start + min_index) ) {
                min_index = i;
            }
        }
             tmp = *(start + j);
            *(start + j) = *(start + min_index);
            *(start + min_index) = tmp;
    }
}


int main() {
    printf("First algo lesson!\n\n");

    int l1[] = {5, 3, 8, 1, 4};
    int l2[] = {1, 2, 3, 4, 5};   // déjà trié
    int l3[] = {5, 4, 3, 2, 1};   // trié à l'envers
    int l4[] = {3, 3, 1, 1, 2};   // doublons

    int listLen = sizeof(l1) / sizeof(int);

    printf("l1 au depart:\n");
    printList(l1, listLen);
    printf("l1 trier:\n");
    sortList(l1, listLen);
    printList(l1, listLen);
    printf("\n");

    printf("l2 au depart:\n");
    printList(l2, listLen);
    printf("l2 trier:\n");
    sortList(l2, listLen);
    printList(l2, listLen);
    printf("\n");


    printf("l3 au depart:\n");
    printList(l3, listLen);
    printf("l3 trier:\n");
    sortList(l3, listLen);
    printList(l3, listLen);
    printf("\n");

    printf("l4 au depart:\n");
    printList(l4, listLen);
    printf("l4 trier:\n");
    sortList(l4, listLen);
    printList(l4, listLen);


 


    return 0;
}
