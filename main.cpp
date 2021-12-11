#include <iostream>
#include "lib.h"
using namespace std;

int main(){
    char nomi[10][20];
    char nome[20];
    for(int i=0; i<10;i++){
        for(int j=0; j<20;j++){
            nomi[i][j]=0;
        }
    }
    for(int i=0; i<20;i++){
        nome[i]=0;
    }
    int posizione=0;
    for(int i=0; i<10;i++){
        cin>>nomi[i];
    }
    for(int i=0; i<20 ;i++){
        cin>>nome[i];
    }
    if(funzione_nome(nomi, nome, posizione)){
        cout<<posizione;
    }else{
        cout<< "non presente";
    }
    return 0;
}
