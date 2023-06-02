#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int elegirTamanio();

void cargarVectorAleatorio(int v[], int t);

void mostrarVector(int v[],int t);

int posMin(int v[],int t);

void sumarVecotres(int v[], int v2[], int resultado[], int t);
void restarVecotres(int v[], int v2[], int resultado[], int t);

int aleatorioEntre(int min, int max);

void cargarVectorConAle(int v[], int t, int min, int max);

int numeroExiste(int v[], int t, int numero);
void cargarVecorConAleSinRepetir(int v[], int t, int min, int max);

int encontrarMaximo(int v[],int t);


int main()
{

    srand(time(0));

    int tam = elegirTamanio();

    int v1[tam];
    cargarVectorAleatorio(v1,tam);
    mostrarVector(v1,tam);

    //printf("\n");

    /*int v2[tam];
    cargarVectorAleatorio(v2,tam);
    mostrarVector(v2,tam);

    printf("\n");

    int resultado[tam];*/

    //sumarVecotres(v1,v2,resultado,tam);

    //mostrarVector(resultado,tam);

    //restarVecotres(v1,v2,resultado,tam);
    //mostrarVector(resultado,tam);

    printf("\n");
    //posMin(v1,tam);

    /*aleatorioEntre(1,8);*/

/*
    cargarVectorConAle(v1,tam,3,20);
    mostrarVector(v1,tam);*/

    //cargarVecorConAleSinRepetir(v1,tam,11,29);
    //mostrarVector(v1,tam);

    encontrarMaximo(v1,tam);


    return 0;
}
int elegirTamanio(){

    int tam;

    printf("USUARIO ELIJA TAM: ");
    scanf("%d",&tam);

    while(tam < 0 || tam >= 170){
        printf("OTRO TONTOO!!");
        scanf("%d",&tam);
    }


    return tam;
};
void cargarVectorAleatorio(int v[], int t){

    for(int i=0; i<t; i++){
        do{
            v[i]=10+rand()%89;}
            while(v[i]%2==1);
    }


};
void mostrarVector(int v[],int t){

    for(int i=0; i<t; i++){
        printf("/ %d /",v[i]);
    }

};
int posMin(int v[],int t){


    int aux = 0;

    for(int i=0; i<t; i++){
        if(v[i] < v[aux]){
         aux = i;
        }
    }
    printf("LA POS MIN ESTA EN: %d ",aux);

  return aux;
};
void sumarVecotres(int v[], int v2[], int resultado[], int t){

    printf("\nLa suma de los vectores es: \n");
    for(int i=0; i<t; i++){
        resultado[i]=0;
        for(int j=0; j<t; j++){
            resultado[i]=v[i]+v2[i];
        }
    }
};
void restarVecotres(int v[], int v2[], int resultado[], int t){

    printf("\nLa resta de los vectores es: \n");
    for(int i=0; i<t; i++){
        resultado[i]=0;
        for(int j=0; j<t; j++){
            resultado[i]=v[i]-v2[i];
        }
    }
};
int aleatorioEntre(int min, int max){
    int ale;


    ale = min + rand()% max;

    printf("\n%d",ale);


    return ale;
};
void cargarVectorConAle(int v[], int t, int min, int max){

    printf("\n");
    for(int i=0; i<t; i++){
        v[i] = min + rand()% max;

    }
};





int numeroExiste(int v[], int t, int numero) {
    for (int i = 0; i < t; i++) {
        if (v[i] == numero) {
            return 1;
        }
    }
    return 0;
}

void cargarVecorConAleSinRepetir(int v[], int t, int min, int max){

    printf("\n");
    for (int i = 0; i < t; i++) {
        int numero;
        do {
            numero = min + rand()%(max-min+1);
        } while (numeroExiste(v, i, numero));

        v[i] = numero;
    }


};

int encontrarMaximo(int v[],int t){

    int maximo = -1;

    for(int i=0; i<t; i++){
        if (v[i] < 50 && v[i] > maximo) {
            maximo = v[i];
        }
    }
    if(maximo != -1){
        printf("\nEL MAXIMO MENOR DE 50 ES: %d\n",maximo);
    }else printf("NO HAY NINGUN NUMERO MENOR A 50");

    return maximo;
};







