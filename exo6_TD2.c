/*
Algorithme Exo6_tab1D
Variable A : tableau entier[50] ;
	 B : tableau entier[50] ;
	 n , i , m , c , j : entier ;
début
	c<-0 ;
	faire
		si(c=3)
			afficher("Erreur! Programme fermé") ;
			fin ;
		finsi
		afficher("Entrez la taille N de tableau A(entre 1 et 50): ") ;
		lire(n) ;
		si(n<=0 OU n>50)
			afficherln("!!! La valeur de N doit etre compris entre 1 a 50") ;
		finsi
		c<-c+1 ;
	tantque (n<1 OU n>50) ;
	c<-0 ;
	faire
		si(c=3)
			afficher("Erreur! Programme fermé") ;
			fin ;
		finsi
		afficher("Entrez la taille M de tableau B(entre 1 et 50): ") ;
		lire(m) ;
		si(m<=0 OU m>50)
			afficherln("!!! La valeur de M doit etre compris entre 1 a 50") ;
		finsi
		c<-c+1 ;
	tantque (m<1 OU m>50) ;
	afficherln("Remplissage du tableau A") ;
	pour(i<-0 ; i<n ; i<-i+1)
		afficher("Entrez nombre",i+1,": ") ;
		lire(A[i]) ;
	finpour
	afficherln("Remplissage du tableau B") ;
	pour(i<-0 ; i<m ; i<-i+1)
		afficher("Entrez nombre",i+1,": ") ;
		lire(B[i]) ;
	finpour
	afficherln("Affichage des elements du tableau A suivi des elements du tableau B") ;
	pour(i<-0 ; i<n ; i<-i+1)
		afficherln("A[",i,"]=",A[i]) ;
	finpour
	j<-0 ;
	pour(i<-n ; i<(n+m) ; i<-i+1) ;
		afficherln("A[",i,"]=",B[j]) ;
		j<-j+1 ;
	finpour
fin
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int A[50] , n , i , m , c ;
    int B[50] , j ;
    c = 0 ;
    do
    {
       if (c==3)
       {
           printf("Erreur! Programme fermé") ;
           exit (0) ;
       }
       printf("Entrez la taille N de tableau A(entre 1 et 50) : ") ;
       scanf("%d",&n) ;
       if (n<=0 || n>50)
       {
            printf("!!! La valeur de N doit etre compris entre 1 a 50\n") ;
       }
       c++ ;
    }while (n<1 || n>50) ;
    c = 0 ;
     do
    {
       if (c==3)
       {
           printf("Erreur! Programme fermé") ;
           exit (0) ;
       }
       printf("Entrez la taille M de tableau B(entre 1 et 50) : ") ;
       scanf("%d",&m) ;
       if (m<=0 || m>50)
       {
            printf("!!! La valeur de M doit etre compris entre 1 a 50\n") ;
       }
       c++ ;
    }while (m<1 || m>50) ;
    printf("Remplissage du tableau A\n") ;
    for(i=0 ; i<n ; i++) 
    {
        printf("Entrez nombre %d: ",i+1) ;
        scanf("%d",&A[i]) ;
    }
    printf("Remplissage du tableau B\n") ;
    for(i=0 ; i<m ; i++)
    {
        printf("Entrez nombre %d: ",i+1) ;
        scanf("%d",&B[i]) ;
    }
    printf("Affichage des elements du tableau A suivi des elements du tableau B\n") ;
    for(i=0 ; i<n ; i++)
    {
        printf("A[%d]=%d\n",i,A[i]) ;
    }
    j=0 ;
    for(i=n ; i<(n+m) ; i++)
    {
        printf("A[%d]=%d\n",i,B[j]) ;
        j++ ;
    }
    return (0) ;
}
    