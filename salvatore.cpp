/*
   Name:caricamento vettori
   copyright:colamonico-chiarulli
   author:Giuseppe Ferri
   Date:18/11/22 14:52
   description:Dichiarare un vettore di 10 elementi. Creare un ciclo for per il caricamento di 10 numeri interi nelle celle del vettore, chiedendo l'input all'utente (Es. Inserisci l'elemento 1). 
   Creare un secondo ciclo for che stampa tutti gli elementi del vettore(Es. L''elemento 1 è) .
*/
//1.includo le librerie
#include<iostream>
using namespace std;
//2.inizio il blocco main
int main() 
{
//3.dichiaro e iniziallizzo le variabili
int i=10;
int vettore[i];
//5.operazioni
for(i=0;i<10;i++) {
   cout<<"inserisci il numero della posizione"<<i<<" " ;
   cin>>vettore[i] ;
   
   
for(i=0;i<10;i++) {
   cout<<"il numero della posizione"<<i<<" e\' "<<vettore[i]<<end;

} 


//7.ritorno al sistema operativo
return 0;
//8.fine del programma
  }

