#include "funzioni.h"
#define dim 100

//Funzione Stampa Menu Principale 
void stampamenprinc(){
     system("cls");
     printf("  ##   ## ##        #### ####### ###### #######  ##   ## ## ##    ## ##### \n");
     printf("  ####### ####     ###    ####   ##     ##   ##  ####### ## ####  ## ##  ## \n");
     printf("  ## # ## ## ##     ###    ##    ####   ##   ##  ## # ## ## ## ## ## ##  ## \n");
     printf("  ##   ## ######     ###   ##    ##     #####    ##   ## ## ##  #### ##  ## \n");
     printf("  ##   ## ##   ##   ###    ##    ##     ##   ##  ##   ## ## ##   ### ##  ## \n");
     printf("  ##   ## ##   ## ####     ##    ###### ##    ## ##   ## ## ##    ## ##### \n\n"); 
     printf("      --------- V 1.00 --------- GRUPPO 3 --- PACE - BELLINI -------\n\n\n");    
    
    printf("M E N U - P R I N C I P A L E\n\n\n");
  printf("1 - Nuova Partita\n\n");
  printf("2 - Carica Partita\n\n");
  printf("3 - Impostazioni\n\n");
  printf("4 - Top Ten\n\n");
  printf("5 - Esci\n\n");
  printf("\n Scelta: ");
     }


//Funzione di Inserimento Giocatori (Numero e Nickname) con doppio puntatore 
void inserimentogioc(giocatore players[],int **num_gio){
     int i;
     for(i=0;i<**num_gio;i++){
                            printf("\nInserisci nickname Giocatore %d: ",i+1);
                            fflush(stdin);
                             scanf("%s",&players[i].nick); 
                            } 
                          }
   
                            
 //Funzione di Estrazione Random del Codificatore                        
int estrazionecod(giocatore players[],int num_gio){
     int estratto,j;
     srand (time(NULL));
     estratto=rand()%num_gio;                                        //genera numero casuale.
     printf("%s sarai il codificatore\n\n",players[estratto].nick); //assegna alla variabile "estratto" il numero casuale creato in precedenza.
     return estratto;                                               //stampa a video chi sarà il codificatore.
     }
     
     
 //Funzione Stampa Menu Impostazioni
 void stampaimpo(){
     system("cls");
     printf("## ##   ## ##### ######  ### ###### ####    ###### ## ###### ##   ## ##\n");
     printf("## ####### ##  # ##  ## ##     ##   ## ##      ##  ## ##  ## ###  ## ##\n");
     printf("## ## # ## ##### ##  ##  ##    ##   ######    ##   ## ##  ## ## #### ##\n");
     printf("## ##   ## ##    ##  ##   ##   ##   ##   ##  ##    ## ##  ## ##  ### ##\n");
     printf("## ##   ## ##    ###### ####   ##   ##   ## ###### ## ###### ##   ## ##\n\n\n");   
 
  printf("1 - Seleziona Modalit\205 di Gioco\n\n");
  printf("2 - Numero Giocatori\n\n");
  printf("3 - Lunghezza Codice\n\n");
  printf("4 - Numero Elementi Codice\n\n");
  printf("5 - Numero Tentativi\n\n");
  printf("6 - Torna al Menu Principale\n\n");
  printf("\nScelta: ");
     }
 
 
 //Funzione Impostazioni    
  void impostazioni(giocatore players[],int *num_gio,int *tentativi,int *lun_cod,int *elem_cod,int *tipo,int *def){
       int scelta2=0;
       int i;
            do{ stampaimpo();
                scanf("%d",&scelta2);
                getchar();  
                       switch(scelta2){
                          
                          case 1:   
                          system("cls");
                          printf("I M P O S T A Z  I O N I \n\n");
                          do{
                          printf(" - Seleziona Modalit\205 di Gioco:\n\n");
                          printf("1 - Umano vs Umano\n\n");
                          printf("2 - Umano vs PC\n\n");
                          scanf("%d",tipo); 
                          }while(*tipo<1 || *tipo>2);  //controlla se la variabile "tipo" è contenuta nell'intervallo 1 - 2
                                                       //nel caso contrario ripete il ciclo finché l'utente
                                                       //non inserisce un valore esatto.
                          printf("\n\n");
                          system("pause");
                          break;
                          
                          case 2:
                          system("cls");
                          printf("I M P O S T A Z  I O N I \n\n");
                          do{
                          printf(" - Inserisci il Numero dei Giocatori [Minimo 1]:\n\n");
                          scanf("%d",num_gio);
                          inserimentogioc(players,&num_gio);   //chiama la funzione "inserimentogioc"
                          *def=1;
                          }while(*num_gio<1);                   //controlla se la variabile "num_gio" è uguale o maggiore ad 1
                                                                //nel caso contrario ripete il ciclo finché l'utente
                                                                //non inserisce un valore esatto.
                          printf("\n\n");
                          system("pause");
                          break;
                          
                         case 3:
                          system("cls");
                          printf("I M P O S T A Z  I O N I \n\n");
                          do{
                          printf(" - Inserisci la lunghezza del codice [Minimo 1]:\n\n");
                          scanf("%d",lun_cod);
                          } while (*lun_cod<1);      //controlla se la variabile "lun_cod" è uguale o maggiore ad 1
                                                     //nel caso contrario ripete il ciclo finché l'utente
                                                     //non inserisce un valore esatto.
                          printf("\n\n");
                          system("pause");
                          break;
                          
                          case 4:
                          system("cls");
                          printf("I M P O S T A Z  I O N I \n\n");
                          do{
                          printf(" - Inserisci il numero degli elementi con i quali comporre il codice [2 - 10]:\n\n");
                          scanf("%d",elem_cod);
                          }while(*elem_cod<2 || *elem_cod>10);   //controlla se la variabile "elem_cod" è 
                                                                 //compresa nell'intervallo che va da 2 a 10
                                                                 //nel caso contrario ripete il ciclo finché l'utente
                                                                 //non inserisce un valore esatto.
                          printf("\n\n");
                          system("pause");
                          break;
                          
                          case 5:
                          system("cls");
                          printf("I M P O S T A Z  I O N I \n\n");
                          do{
                          printf(" - Inserisci il numero dei tentativi a disposizione [Minimo 1]:\n\n");
                          scanf("%d",tentativi);
                          }while(*tentativi<1);    //controlla se la variabile "tentativi" è uguale o maggiore ad 1
                                                   //nel caso contrario ripete il ciclo finché l'utente
                                                   //non inserisce un valore esatto.
                          printf("\n\n");
                          system("pause");
                          break;
                          
                          case 6:
                               main();
                               break;
                          
                           default:
               printf("Valore errato\n\nPremere Invio ed effettuare nuovamente la scelta.\n"); //se viene inserito un valore errato per la scelta delle impostazione viene stampato questo messaggio.
              }
              getchar();
              }while(0<scelta2<6);    
                     }
                     
                     
 //Funzione Visualizza Impostazioni Correnti
 void visimpo(int tipo,int num_gio,int lun_cod,int elem_cod,int tentativi,giocatore players[]){
      int i;
              printf("IMPOSTAZIONI CORRENTI:\n\n\n");
              printf("Modalit\205 di Gioco= %d\n",tipo);
              printf("\nNumero Giocatori = %d\n",num_gio);
              printf("\nLunghezza Codice = %d\n",lun_cod);
              printf("\nNumero Elementi Codice = %d\n",elem_cod);
              printf("\nNumero Tentativi = %d\n",tentativi);
              printf("\nGiocatori:\n\n");
              for(i=0;i<num_gio;i++){
                            printf("\t%s\n\n",players[i].nick);}
              printf("\n");              
              system("pause");              
                          }                       //vengono visualizzate le impostazioni correnti prima di inziare la partita,
                                                 // cioè con i valori che l'utente ha scelto nelle impostazioni.
                          
                          
                          
//Funzione Reset Impostazioni di Default
 void resetimpo(giocatore players[],int *num_gio,int *tentativi,int *lun_cod,int *elem_cod,int *tipo,int *def){
      int i;
      *elem_cod=10; 
      *tipo=2; 
      *lun_cod=4; 
      *tentativi=10; 
      *num_gio=2;
      *def=0;
      
      for(i=0;i<*num_gio;i++){
                            players[i].tentativo=0;
                            strcpy(players[i].nick," ");}  //pulisce il vettore "players"
                            
      strcpy(players[0].nick,"Giocatore1");                       
      }                                                    //vengono ripristinate le impostazioni con i valori di default.
                   
                     
  //Funzione Partita                   
 void partita(int cod[], int dec[], int lun_cod, int tentativi, int elem_cod, int num_gio, giocatore players[], giocatore codificatore, giocatore giocatoriclass[],int gv,int gc,int *pass){
      int cgpg,contaps,tur;
      int i,j,c,d,k;
      int aco[lun_cod];
      int ade[lun_cod];
     
      int save=0;
       do{ 
         cgpg=0;
         contaps=0;
         tur=0;                     
        do{ 
         //system("cls");                    
         printf ("\nTentativo - %d/%d\n\n",tur+1,tentativi);       //viene mostrato a video il numero dei tentativi correnti 
                                                                    //e quelli rimanenti. 
         printf("%s Tocca a te. Inserisci il codice da indovinare\n\n",players[gc].nick); //viene mostrato a video chi sarà il decodificatore
         for(j=0;j<lun_cod;j++){
                             do{
                                printf("Inserisci elemento [0 - %d] in posizione %d: ",elem_cod-1,j+1);
                                                   scanf("%d",&dec[j]);   //riempie il vettore "dec" con gli elementi scelti dall'utente
                                }
                            while (dec[j]<0 || dec[j]>elem_cod-1);}       //controlla se i valori inseriti nel vettore "dec" sono accettabili.
                                                                       
printf ("\nIl codice di decodifica e': ");
for (i=0;i<lun_cod;i++){
printf ("%5d",dec[i]);}
printf ("\n\n");
system ("PAUSE");
//system ("CLS");
     for (i=0;i<lun_cod;i++){
         c=cod[i];           //viene assegnato alla variabile temporane "c" il contenuto del vettore "cod" nella posizione "i"
         aco[i]=c;           //si riempie il vettore "aco" con il contenuto della variabile "c". 
                            //Quindi viene effettuata una copia del vettore "cod"
         d=dec[i];          //viene assegnato alla variabile temporane "d" il contenuto del vettore "dec" nella posizione "i"
         ade[i]=d;}         //si riempie il vettore "ade" con il contenuto della variabile "d". 
                            //Quindi viene effettuata una copia del vettore "dec"
     for (i=0;i<lun_cod;i++)
      for (j=0;j<lun_cod;j++){
                       if (cod[i]==dec[j] && i==j){             //vegono controllati gli elementi dei 2 vettori "cod" e "dec" e i loro indici.
                                                 cgpg=cgpg+1;;  //se entambi sono uguali, si incrementa la variabile "cgpg (codice giusto posto giusto)"
                                                 aco[i]=10;
                                                 
                                                 ade[j]=13;}
                                                 
                       else {}
             }
             for (i=0;i<lun_cod;i++)
             for (j=0;j<lun_cod;j++){
                             if (aco[i]==ade[j] && i!=j){
                             contaps=contaps+1;;
                             ade[j]=11;
                             aco[i]=12;}
                             else {}
                             }
printf ("\n\t\t\tTabella Risultato\n\n\n");
     printf ("\nCodice Segreto del Codificatore:");
     for(i=0;i<lun_cod;i++){
                            printf("\t*");}
                            
     printf("\n\nCodice del Decodificatore: \t ");
     for (i=0;i<lun_cod;i++){
          printf("%8d",dec[i]);}
printf ("\n\n[%d] cifre giuste al posto giusto !!\n",cgpg);
printf ("\n[%d] cifre giuste al posto sbagliato !!\n\n",contaps);
if (cgpg==lun_cod){
                   system("cls");
            printf ("\n\n%s  Congratulazioni!!!\n\n",players[gc].nick);
            players[gc].tentativo=tur+1; 
            
            giocatoriclass[gv].tentativo=players[gc].tentativo;
            strcpy(giocatoriclass[gv].nick,players[gc].nick);
            gv=gv+1;
            *pass=gv;
            printf ("Hai indovinato il codice segreto in %d tentativi.\n\n", tur+1);
            printf ("\n\n\t\t\t~~~ HAI VINTO !! ~~~\n\n");
            tur=tentativi;}
else {
     tur=tur+1;
     cgpg=0;
     contaps=0;
      system ("PAUSE");
      //system ("CLS");
      }
}while (tur<tentativi);
                            
       if (cgpg<lun_cod){
   system("cls");                      
printf ("\n\nIl codificatore ha vinto la partita !!!\n\n");
printf ("\n\n%s  Congratulazioni!!!\n\n",codificatore.nick);}
gc=gc+1;

if(gc<num_gio-1){
printf("Vuoi Salvare la Partita Corrente? 1.Si - 2.No: ");
scanf("%d",&save);
if(save==1){
salva (cod,dec,lun_cod,tentativi,elem_cod,num_gio,players,codificatore,
giocatoriclass,gv,gc); //viene chiamata la funzione salva
printf("\nLa Partita e stata Salvata con Successo!!!\n"); 
}
system("pause");
}


}while(gc<num_gio-1);

                   printf ("\n\nLa partita e terminata!!!\n\n");
                   printf ("\n\nIl Codice Segreto era:\t");
                   for (i=0;i<lun_cod;i++){
                   printf("%8d",cod[i]);}
                   printf("\n\n");
                   system("pause");
                   system("cls");
                   printf("FINE PARTITA\n");           
                    }
      
      
//Funzione Classifica Partita Corrente
void classifica(giocatore giocatoriclass[],int gv){
     int i,j,tmp;
     char tmpnick[20];
     
     //Bubble Sort - ordinamento vettore giocatori in base al numero dei tentativi 
	for(i = gv; i > 1; i--) {
		for(j = 0; j < i - 1; j++) {
			if (giocatoriclass[j].tentativo>giocatoriclass[j+1].tentativo) 
           { 
             tmp = giocatoriclass[j].tentativo; //viene spostato l'elemento contentenuto nel vettore "giocatoriclass.tentativo" 
                                                //nella posizione "j", nella variabile "tmp"
                                                
             strcpy(tmpnick,giocatoriclass[j].nick); //viene copiata la stringa del vettore "giocatoriclass.nick" in "tmpnick"
             
             giocatoriclass[j].tentativo = giocatoriclass[j+1].tentativo; //viene incrementato l'indice "j" del vettore "giocatoriclass.tentativo"
                                                                          //e viene copiato il tentativo successivo nel vettore "giocatoriclass.tentativo"
             strcpy(giocatoriclass[j].nick,giocatoriclass[j+1].nick);    //viene incrementato l'indice "j" del vettore "giocatoriclass.nick" 
                                                                         //e viene copiato il nick successivo nel vettore "giocatoricass.nick
             
             giocatoriclass[j+1].tentativo = tmp;     //viene riportato il valore contenuto nella variabile "tmp" 
                                                      //nel vettore "giocatoriclass.tentativo" con indice "j+1"
             strcpy(giocatoriclass[j+1].nick,tmpnick); //viene riportato il valore contenuto nella variabile "tmpnick"
                                                        //nel vettore "giocatoriclass.nick" con indice "j+1"
			}
		}
	}
                   	printf("\nGioc Vincenti: %d\n",gv);
                     printf("\n\nClassifica:\n\n");
                     for(i=0;i<gv;i++){
                            printf("%d - Giocatore:\t%s",i+1,giocatoriclass[i].nick);
                            printf("\tTentativi:\t%d",giocatoriclass[i].tentativo);
                            printf("\n\n");
                             } 
                   system("pause");
                   system("cls");
                     }
      
         
//Funzione di Creazione File per Top Ten 
 void topten(giocatore giocatoriclass[],int gv){
      int i;
 FILE *fp;
 
  fp = fopen ("topten.txt" , "a");  //viene aperto il file "topten.txt"
  for(i=0;i<gv;i++){
  fprintf ( fp, "%s\n", giocatoriclass[i].nick);
  fprintf ( fp, "%d\n", giocatoriclass[i].tentativo);
  }                                             //viene scandito il vettore "giocatoriclass.nick" 
                                                //e quindi viene scritto sul file il nick del giocatore
  fclose ( fp );                                //viene chiuso il file
  
            
                       
}
 
 
 //Funzione di Generazione e Stampa a Video della Top Ten Utilizzando la Struttura Lista
 int LeggiDaFile(giocatore *giocatoritop,listOfElem *list)
{ 
int i=0;
int j;
char tmpnick[20];
int temp;
int ch;
int linee=0;

elemList *punt;                         //Puntatore usato per caricare la lista
elemList *cursore;                     //Puntatore usato per stampare la lista
elemList *puntcorr, *puntnext;  //Puntatori che useremo per ordinare la lista

  FILE        *fp;
  
      /*for(i=0;i<10;i++){
                        strcpy(giocatoritop[i].nick, " ");  
                        giocatoritop[i].tentativo=0;      //pulisce il vettore giocatoritop
                        }*/
  
  
  fp=fopen("topten.txt","r");                  //Conto le linee del file, le divido per 2 e ho il tot dei giocatori vincenti
   while((ch=getc(fp))!=EOF){
                            if(ch=='\n')
                            linee++;
                            }
   linee=linee/2;
   
   giocatoritop=malloc(linee*sizeof(giocatore));  //Alloco la memoria dinamicamente in base al numero dei giocatori nel file
   
    i=0;
    fp=fopen("topten.txt","r");                       //viene aperto il file topten in modalità lettura
         if(fp!=NULL)  {                                  
           while (!feof(fp)){
      fscanf(fp,"%s",&giocatoritop[i].nick);
      fscanf(fp, "%d",&giocatoritop[i].tentativo);           
      i=i+1;                                       
                           }
      fclose(fp);                                   //chiudo il file
                              
     printf("\nNumero Totale dei Vincitori: %d\n",i-1);
                            
//Caricamento della Lista
     for(j=0;j<i;j++){
    punt         = (elemList *)malloc(sizeof(elemList));
	punt -> n    = giocatoritop[j].tentativo;
	strcpy(punt -> nk,giocatoritop[j].nick);
	punt -> next = *list;
	*list        = punt;}	
	
	//Ordinamento Lista 
	if(*list != NULL) {
		puntcorr = *list;
		puntnext = puntcorr -> next;
		
		while(puntcorr != NULL && puntcorr -> next != NULL) {
			do {
				if(puntcorr -> n > puntnext -> n) {				
					temp             = puntcorr -> n;
					strcpy(tmpnick,puntcorr -> nk);
					
					puntcorr -> n = puntnext -> n;
					strcpy(puntcorr -> nk,puntnext -> nk);
					
					puntnext -> n = temp;
                    strcpy(puntnext -> nk,tmpnick);				
	            }
				puntnext = puntnext -> next;
	        } while(puntnext != NULL);
			
			puntcorr = puntcorr -> next;
			puntnext = puntcorr -> next;
	    }
	}
	
	//Stampa dei 10 elementi della Lista per Top Ten
	i=0;
	if(list != NULL) {
		cursore = *list;
		printf("\n");
		printf("\nT O P  -  T E N \n\n\n");
		cursore = cursore -> next;
		while((cursore != NULL)&&(i<10)) {
			printf("%d - Nickname: %s",i+1,cursore -> nk);
			printf("\n\tTentativi: %d",cursore -> n);
			printf("\n\n");
			i=i+1;
			cursore = cursore -> next;
		}
	
	} else {
		printf("\nLa lista e' vuota.");
	}

	system("pause");
}
else
{
    printf("La Top Ten e' Vuota!!!\n\n");
    system("pause");
    }
    free(giocatoritop);
}


//Funzione di Salvataggio Partita in Corso
void salva (int cod[], int dec[],int lun_cod, int tentativi,int elem_cod, int num_gio, giocatore players[], giocatore codificatore, giocatore giocatoriclass[],int gv,int gc) {
     FILE *fb;
     int i;

      fb=fopen("salvataggio.dat", "wb");     //apro il file "salvataggio.dat" in modalità scrittura binario

      fwrite(&elem_cod, sizeof(int),1,fb);   //scrivo sul file elem_cod
     
      fwrite(&lun_cod, sizeof(int),1,fb);    //scrivo sul file lun_cod
      fwrite(&tentativi, sizeof(int),1,fb);  //scrivo sul file tentativi 
      fwrite(&num_gio, sizeof(int),1,fb);    //scrivo sul file num_gio
     
      fwrite(&gc, sizeof(int),1,fb);         //scrivo sul file gc 
      fwrite(&gv, sizeof(int),1,fb);         //scrivo sul file gv
   
      fwrite(&codificatore, sizeof(giocatore), 1, fb);           //scrivo sul file codificatore
     
      for(i=0;i<num_gio-1;i++){                
     fwrite(&players[i].nick, sizeof(giocatore), 100, fb);
     }                                                             //scrivo sul file il vettore players.nick
    
     
     for(i=0;i<num_gio-1;i++){
     fwrite(&players[i].tentativo, sizeof(giocatore), 100, fb);
     }                                                             //scrivo sul file il vettore players.tentativo
     
     for(i=0;i<lun_cod;i++){                        
     fwrite(&cod[i], sizeof(int),100, fb);
     }                                                             //scrivo sul file il vettore cod
     
     for(i=0;i<gv;i++){                        
     fwrite(&giocatoriclass[i].nick, sizeof(giocatore),100, fb);
     fwrite(&giocatoriclass[i].tentativo, sizeof(giocatore),100, fb);
     }                                                              //scrivo sul file il vettore giocatoriclass.nick e giocatoriclass.tentativo
    
     fclose(fb);                                                     //chiudo il file fb
}


//Funzione di Caricamento da Salvataggio 
 void carica (int cod[], int dec[],int lun_cod, int tentativi,int elem_cod, int num_gio, giocatore players[], giocatore codificatore, giocatore giocatoriclass[],int gv,int gc, giocatore giocatoritop[], int *tipo, int *def)
{        
          FILE *fd;
            int i,pass;
            
     system("cls");
    printf("  ##    ###### ##      #####  ## ##   ## #####\n");
    printf("  ##    ##  ## ####    ##  ## ## #### ## ##\n");
    printf("  ##    ##  ## ## ##   ##  ## ## ## #### ## ###\n");
    printf("  ##    ##  ## ######  ##  ## ## ##  ### ## ##\n");
    printf("  ##### ###### ##   ## #####  ## ##   ## #####  ##\n");
    sleep (800);
    system("cls");
    printf("  ##    ###### ##      #####  ## ##   ## #####\n");
    printf("  ##    ##  ## ####    ##  ## ## #### ## ##\n");
    printf("  ##    ##  ## ## ##   ##  ## ## ## #### ## ###\n");
    printf("  ##    ##  ## ######  ##  ## ## ##  ### ## ##\n");
    printf("  ##### ###### ##   ## #####  ## ##   ## #####  ## ##\n");
    sleep(800);
    system("cls");
    printf("  ##    ###### ##      #####  ## ##   ## #####\n");
    printf("  ##    ##  ## ####    ##  ## ## #### ## ##\n");
    printf("  ##    ##  ## ## ##   ##  ## ## ## #### ## ###\n");
    printf("  ##    ##  ## ######  ##  ## ## ##  ### ## ##\n");
    printf("  ##### ###### ##   ## #####  ## ##   ## #####  ## ## ##\n\n");
    sleep(400);
    
    fd=fopen("salvataggio.dat", "rb");
    if (fd!= NULL){
    fread(&elem_cod, sizeof(int), 1, fd);      //leggo da file elem_cod
    fread(&lun_cod, sizeof(int),1,fd);         //leggo da file lun_cod
    fread(&tentativi, sizeof(int),1,fd);       //leggo da file tentativi
    fread(&num_gio, sizeof(int),1,fd);         //leggo da file num_gio
    fread(&gc, sizeof(int),1,fd);              //leggo da file gc
    fread(&gv, sizeof(int),1,fd);              //leggo da file gv
    fread(&codificatore, sizeof(giocatore), 1, fd); //leggo da file codificatore
  
     for(i=0;i<num_gio-1;i++){
     fread(&players[i].nick, sizeof(giocatore), 100, fd);
     }                                          //leggo da file vettore players.nick
     
     for(i=0;i<num_gio-1;i++){
     fread(&players[i].tentativo, sizeof(giocatore), 100, fd);
     }                                         //leggo da file players.tentativo
     
     for(i=0;i<lun_cod;i++){                        
     fread(&cod[i], sizeof(int),100, fd);
     }                                         //leggo da fle vettore cod
     
     for(i=0;i<gv;i++){                        
     fread(&giocatoriclass[i].nick, sizeof(giocatore),100, fd);
     fread(&giocatoriclass[i].tentativo, sizeof(giocatore),100, fd);
     }                                         //leggo da file vettore giocatoriclass.nick e giocatoriclass.tentativo
     }
     else{ 
     printf("File inesistente, mi spiace :( \n");
     
     sleep(2000);
     main ();     }
     
  
     fclose(fd); 
     system("cls");                           //chiudo file
     partita(cod,dec,lun_cod,tentativi,elem_cod,num_gio,players,codificatore,giocatoriclass,gv,gc,&pass);   //chiamo la funzione partita
   
     classifica(giocatoriclass,pass);                                  //chiamo la funzione classifica                                               
    
     topten(giocatoriclass,pass);                                      //chiamo la funzione topten
   
     printf("\n"); 
     }
     
 //Funzione Inizializza lista   
void initialize(listOfElem *list)
{
	*list = NULL;
}


      
