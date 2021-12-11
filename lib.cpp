#include "lib.h"
int funzione_nome(char a[10][20], char b[20], int & p) {
    int t=0;
    for(int i=0; i<10; i++) {
        t = 0;
        for (int j = 0; j < 20; j++) {
            if (a[i][j] == b[j]) {
                t++;
                if (t == 20) {
                    p = i;
                    return true;
                }
            }
        }
    }
    return false;
}
