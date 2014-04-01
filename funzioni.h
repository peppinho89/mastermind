#ifndef FUNZIONI_H_
#define FUNZIONI_H_
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <time.h>
#include <math.h>


typedef struct{
        char nick[20];
        int tentativo;
        }giocatore;             //creo una struct chiamata giocatore
        
struct EL {
	int n;
	char nk[20];
	struct EL *next;
};

typedef struct EL elemList;
typedef elemList *listOfElem;          //struttura dati dinamica - Lista
                                
            
//Funzione Stampa Menu Principale        
void stampamenprinc();     

//Funzione di Inserimento Giocatori con doppio puntatore   
void inserimentogioc(giocatore players[],int **num_gio);

//Funzione di Estrazione Random del Codificatore
int estrazionecod(giocatore players[],int num_gio);

//Funzione Stampa Menu Impostazioni
void stampaimpo();

//Funzione Impostazioni
void impostazioni(giocatore players[],int *num_gio,int *tentativi,int *lun_cod,int *elem_cod,int *tipo,int *def);

//Funzione Partita
void partita(int cod[], int dec[], int lun_cod, int tentativi,int elem_cod, int num_gio, giocatore players[], giocatore codificatore, giocatore giocatoriclass[],int gv,int gc,int *pass);
        
//Funzione Classifica Partita Corrente
void classifica(giocatore giocatoriclass[],int pass);

//Funzione Visualizza Impostazioni Correnti
void visimpo(int tipo,int num_gio,int lun_cod,int elem_cod,int tentativi,giocatore players[]);

//Funzione Reset Impostazioni di Default
void resetimpo(giocatore players[],int *num_gio,int *tentativi,int *lun_cod,int *elem_cod,int *tipo,int *def);

//Funzione di Creazione File per Top Ten 
void topten(giocatore giocatoriclass[],int pass);

//Funzione di Generazione e Stampa a Video della Top Ten
int LeggiDaFile(giocatore* giocatoritop,listOfElem *list);

//Funzione di Salvataggio Partita in Corso
void salva (int cod[], int dec[],int lun_cod, int tentativi,int elem_cod, int num_gio, giocatore players[], giocatore codificatore, giocatore giocatoriclass[],int gv,int gc);

//Funzione di Caricamento da Salvataggio 
void carica (int cod[], int dec[],int lun_cod, int tentativi,int elem_cod, int num_gio, giocatore players[], giocatore codificatore, giocatore giocatoriclass[],int gv,int gc, giocatore giocatoritop[], int *tipo, int *def);

void initialize(listOfElem *list);
void insertInHead(listOfElem *list, int elem);

#endif
