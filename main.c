#include "main.h"

  int main(int argc, char *argv[])
  { 
    if (def==0){
             strcpy(players[0].nick,"Giocatore1");
             }
 do{ 
     stampamenprinc();             //chiama la funzione stampamenprinc
     scanf("%d",&scelta);          //legge la scelta dell'utente
     getchar();
     
  switch (scelta){
         case 1:
              system("cls");
              visimpo(tipo,num_gio,lun_cod,elem_cod,tentativi,players);  //chiamo la funzione visimpo
              printf("\n\nAttendere, configurazione nuova partita in corso...");
              Sleep(3000);
              system("cls");
              printf("MASTERMIND --  NUOVA PARTITA\n\n");
              //Se Modalità Umano vs Umano
              if(tipo==1){
                          printf("\nAttendere, il PC sta sorteggiando il codificatore...\n\n");
                          Sleep(4000);
                          estratto=estrazionecod(players,num_gio);     //Estrazione Codificatore
                          strcpy(codificatore.nick,players[estratto].nick);    //Copia Nick Codificatore
                          for( j = estratto; j < num_gio-1; ++j )   //Rimuovi Codificatore dal Vettore Giocatori
                          players[j] = players[j+1];
                          printf("%s Inserisci il codice segreto:\n\n",codificatore.nick);
                          for(i=0;i<lun_cod;i++){         
                             do{
                                printf ("Digita un numero qualsiasi [0 - %d] nella %d posizione: ",elem_cod-1,i+1);
                                scanf ("%d",&cod[i]);
                                }                                   //Acquisizione del Codice Segreto
                             while (cod[i]<0 || cod[i]>elem_cod-1);}               //controlla se i valori inseriti nel vettore "cod" sono accettabili.
           printf ("\nL'iserimento del codice e' avvenuto con successo !!\n\n");
           printf ("Il codice inserito e' il seguente: ");
           for (i=0;i<lun_cod;i++){
                             printf ("%5d",cod[i]);                    //mostra a video il codice inserito
                             }
                             printf ("\n\n** Si consiglia di prendere nota del codice **\n\n");
                             system ("PAUSE");
                             system ("CLS");
                                   }
                                //Se modalità Umano vs PC   
                           else{
                                strcpy(codificatore.nick,"CPU");          //Assegnazione del Codificatore alla CPU
                          printf("\nAttendere, la CPU sar\205 il codificatore...\n\n");
                          Sleep(3000);
                          printf("\nAttendere, la CPU sta inserendo il codice segreto...\n\n");
                          Sleep(3000);
                          //Generazione Random del Codice Segreto dalla CPU
                          srand (time(NULL));
                                 for (i=0;i<lun_cod;i++){
                                 cod[i]=rand()%elem_cod;
                              }
                                                  
           printf ("\nL'iserimento del codice e' avvenuto con successo !!\n\n");
           printf ("Il codice inserito e' il seguente: ");
           for (i=0;i<lun_cod;i++){
                             printf ("\t*",cod[i]);   //mostra a video il codice inserito
                             }
                             printf ("\n\n** Si consiglia di prendere nota del codice **\n\n");
                             system ("PAUSE");
                             system ("CLS");
                             }
                             
   //Chiamata alla Funzione Partita
    partita(cod,dec,lun_cod,tentativi,elem_cod,num_gio,players,codificatore,giocatoriclass,gv,gc,&pass);
  //Chiamata alla Funzione Classifica
    classifica(giocatoriclass,pass);  
  //Chiamata alla Funzione Top Ten
    topten(giocatoriclass,pass);
    
    printf("\n");  
    initialize(&listPointer);          //Inizializza Lista
    //Chiamata alla Funzione Leggi da File per generazione e stampa della top ten
    LeggiDaFile(giocatoritop,&listPointer);             
    //Chiamata alla Funzione Rsest Impostazioni per resettare le impostazioni
    resetimpo(players,&num_gio,&tentativi,&lun_cod,&elem_cod,&tipo,&def);  
    
    main(argc,argv);           
            break;
              
         case 2:
    //Chiamata alla funzione Carica per caricare una partita salavata     
    carica(cod,dec,lun_cod,tentativi,elem_cod,num_gio,players,codificatore,giocatoriclass,gv,gc,giocatoritop,&tipo,&def); 
    initialize(&listPointer);          //Inizializza Lista
    LeggiDaFile(giocatoritop,&listPointer); 
    //Chiamata alla Funzione Rsest Impostazioni per resettare le impostazioni
    resetimpo(players,&num_gio,&tentativi,&lun_cod,&elem_cod,&tipo,&def);        
         break;
              
         case 3:
    //Chiamata alla Funzione Impostazioni per gestire le Impostazioni Modificabili dall'Utente       
    impostazioni(players,&num_gio,&tentativi,&lun_cod,&elem_cod,&tipo,&def);
              break;
              
         case 4:
              initialize(&listPointer);          //Inizializza Lista
              //Stampa a Video della Top Ten
              system("cls");
              LeggiDaFile(giocatoritop,&listPointer); 
              main(argc,argv);
              break;
              
         case 5:
              //Uscita
              system("cls");
              printf("#######     ##   ##   #######       ##     ##\n");
              printf("##    ##     ## ##    ##            ##      ##\n");
              printf("##    ##      ###     ##                     ##\n");
              printf("########      ##      ####                   ##\n");
              printf("##    ##     ##       ##                     ##\n");
              printf("##    ##    ##        ##            ##      ##\n");
              printf("#######    ##         #######       ##     ##\n");
              printf("\nIl Gioco \212 stato realizzato da:\n\n");
              printf("\t - Giuseppe Pace\n\n");
              printf("\t - Cosimo Bellini\n\n");
              system("PAUSE");	
              return 0;
              break;
              
         default://Controllo sulla Scelta del Menu Principale
               printf("Valore errato\n\nPremere Invio ed effettuare nuovamente la scelta.\n");
              }
              getchar();
              }while(0<scelta<5);    
         
  system("PAUSE");	
  return 0;
}

 
