#include <iostream>
#include "lib.h"
using namespace std;

void inizializzazione(char a[10][20]){
    for(int i=0; i<10;i++){
        for(int j=0; j<20;j++){
            a[i][j]=0;
        }
    }
}
void inizializzazione2(char b[]){
    for(int i=0; i<20;i++){
        b[i]=0;
    }
}

void riempimento(char nomi[10][20]){
    for(int i=0; i<10;i++){
        cin>>nomi[i];
    }
}

int main(){
    char nomi[10][20];
    char nome[20];
    inizializzazione(nomi);
    inizializzazione2(nome);
    int posizione=0;
    cin>>nome;
    riempimento(nomi);
    if(funzione_nome(nomi, nome, posizione)){
        cout<<posizione;
    }else{
        cout<< "non presente";
    }
   return 0;
}
