#ifndef TP2_LABYRINTHE_PARCOURS_H
#define TP2_LABYRINTHE_PARCOURS_H

#include "Graphe.h"

typedef struct File{
    pSommet sommet;
    struct File* next;
}FIFO;

FIFO* creerFileVide();
void colorerTousSommetsEnBlanc(Graphe *graphe);
void enfiler(FIFO **pFifo,pSommet sommet);
void defiler(FIFO **pFifo);
void BSF(Graphe *graphe);
#endif //TP2_LABYRINTHE_PARCOURS_H
