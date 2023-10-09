#include "Parcours.h"

FIFO* creerFileVide(){
    FIFO *fifo= calloc(1,sizeof(FIFO*)); // Creation de la file vide
    fifo->sommet=NULL;
    fifo->next=NULL;
    return fifo;
}

void colorerTousSommetsEnBlanc(Graphe *graphe){
    for (int i=0;i<graphe->ordre;i++){
        graphe->pSommet[i]->couleur='B';
    }
}

void enfiler(FIFO **pFifo,pSommet sommet){
    FIFO *new= malloc(sizeof(FIFO));
    new->sommet=sommet;
    new->sommet->couleur='G';
    new->next=NULL;
    while(pFifo!=NULL){
        pFifo=&(*pFifo)->next;
    }
    *pFifo=new;
}

void defiler(FIFO **pFifo){
    (*pFifo)->sommet->couleur='N';
    //
}

void BSF(Graphe *graphe){
    colorerTousSommetsEnBlanc(graphe);
    FIFO *fifo=creerFileVide();
    // On enfile s0 qui devient gris
    enfiler(&fifo,graphe->pSommet[1]);
    enfiler(&fifo,graphe->pSommet[2]);
    enfiler(&fifo,graphe->pSommet[3]);
    for(int i=0;i<3;i++){
        printf("\nSommet %d : couleur %c",fifo->sommet->valeur,fifo->sommet->couleur);
        fifo=fifo->next;
    }
    /*for (int i=0;i<graphe->ordre;i++){
        printf("\n%d = %c",i,graphe->pSommet[i]->couleur);
    }
    int i=0;
    while(fifo!=NULL){

    }*/
}