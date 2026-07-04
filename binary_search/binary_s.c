/* 
   A chaque passage on voit si la cible es plus grande ou plus petit que le milieu de la liste,
   ca va retrecir le tableau par deux a chaque fois jusqua trouver l'index de la target 
   */

#include <stdio.h>


int binSort(int *start, int len, int target) {

    int debut, fin, milieu;
    debut = 0;
    fin = len -1;
    
    while ( debut <= fin ) {
        
        milieu = ( debut + fin) /2;
        
        if ( *(start + milieu) < target ) {
            debut = milieu + 1;
            continue;
        }
        else if ( *(start + milieu) > target ) {
            fin = milieu -1;
            continue;
        }
        else if ( *(start + milieu) == target ) {
            return milieu;
        }
    }
    return -1;

}


int main() {

    //
    // int debut;
    // int fin;
    // int milieu;

    int l[] = {1, 2, 3, 4, 6, 8, 9, 15, 23, 55};
    int ls = sizeof(l) / sizeof(int);
    int cible = 15;

    int res = binSort(l, ls, cible);
    if ( res == -1) printf("pas trouver\n");
    else {
        printf("la cible est a l'index %d\n", res);
    }


    // 
    // debut = 0;
    // fin = ls - 1;
    //
    // while ( debut <= fin ) {
    //     milieu = ( debut  + fin ) / 2;
    //     if ( l[milieu] < cible ) {
    //         debut = milieu + 1;
    //         continue;
    //     }
    //     else if ( l[milieu] > cible ) {
    //         fin = milieu - 1;
    //         continue;
    //     }
    //     else if ( l[milieu] == cible ) {
    //         printf("TROUVE a l'index %d\n", milieu);
    //         break;
    //     }
    // }
    // printf("Pas trouver...\n");

    return 0;
}

