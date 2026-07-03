
#include <stdio.h>


void printl(int *start, int len ) {
    int i;
    for ( i = 0; i < len; i++ ) {
        printf("%d ", *(start + i) );
    }
    printf("\n");
}

void bubbleSort(int *start, int len) {
    int i,j,tmp;

    for ( j = 0; j < len -1; j++ ) {
        for ( i = 0; i < len -1; i++ ) {
            if ( *(start + i) > *(start + i + 1) ) {
                tmp = *(start + i);
                *(start + i) = *(start + i + 1 );
                *(start + i + 1) = tmp;
            }
        }
    }
}



int main() {

    int l[] = { 9, 2, 4, 6, 1, 8 };
    int l1[] = {9, 2, 4, 6, 1, 8};
    int l2[] = {1, 2, 3, 4, 5, 6};
    int l3[] = {5, 4, 3, 2, 1, 0};
    int l4[] = {3, 3, 1, 1, 2, 2};
    
    int *lists[] = {l, l1, l2, l3, l4};  // tableau de 4 pointeurs
    int listLen = sizeof(l) / sizeof(int);

    for ( int i = 0; i < 5; i++ ) {
        
        printf("liste %d:\n", i+1);
        printl(lists[i], listLen);
        bubbleSort(lists[i], listLen);
        printl(lists[i], listLen);

    }

    // printf("l:\n");
    // printl(l, listLen);
    //
    /* test */
    //
    // for ( int j = 0; j < listLen -1; j++ ) {
    //
    //     for ( int i = 0; i < listLen -1; i++ ) {
    //        if ( l[i] > l[i+1] ) {
    //             int tmp = l[i];
    //             l[i] = l[i+1];
    //             l[i+1] = tmp;
    //        }
    //     }
    //     
    // }
    //
    // printl(l, listLen);
    //


    


    return 0;
}
