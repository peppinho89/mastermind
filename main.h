#ifndef MAIN_H_         //compilazione condizionata, #ifndef testa la condizione. 
                        //Se risulta verificata, viene incluso per la compilazione il codice dalla riga successiva alla direttiva,
                        // fino ad incontrare  #endif
#define MAIN_H_
#include "funzioni.h"

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include <malloc.h>

#define dim 100
//Variabili Globali
  listOfElem listPointer;
  int elem_cod=10; 
  int tipo=2; 
  int lun_cod=4; 
  int tentativi=10; 
  int num_gio=2;
  int scelta;
  int estratto;   
  giocatore players[dim];
  giocatore codificatore;
  giocatore giocatoriclass[dim];
  giocatore* giocatoritop;
  int def=0;
  int tentativo[dim];
  char nickname[dim];
  int z;
  int cod[dim];
  int dec[dim];
  int i,j,indovinato;
  int aco[dim],ade[dim],c,d,cgpg=0,contaps=0,tur=0;
  int gc=0;
  int gv=0;
  int pass=0;
  
  
  #endif
