/*
Algorithme Exo7_tab1D
Variable U : tableau entier[50] ;
    	 V : tableau entier[50] ;
    	 n , i , s , c , p : entier ;
début
	c<-0 ;
	faire
		si(c=3)
			afficher("Erreur! Programme fermé") ;
			fin ;
		finsi
		afficher("Entrez le nombre de dimension de vecteur U et V(entre 1 et 50) : ") ;
		lire(n) ;
		si (n<=0 OU n<50)
			afficherln("!!! La valeur de dimension doit etre compris entre 1 et 50") ;
		finsi
		c<-c+1 ;
	tantque (n<1 OU n>50) ;
	afficherln("Rempissage des deux vecteurs") ;
	afficherln("Vecteur U") ;
	pour (i<-0 ; i<n ; i<-i+1)
		afficher("Valeur",i+1,": ") ;
		lire(U[i]) ;
	finpour
	afficherln("Vecteur V") ;
	pour (i<-0 ; i<n ; i<-i+1)
		afficher("Valeur",i+1,": ") ;
		lire(V[i]) ;
	finpour
	afficherln("Calcul de produit scalaire de deux vecteurs") ;
	s<-0 ;
	pour (i=0 ; i<n ; i<-i+1)
		p<-U[i]*V[i] ;
		s<-s+p ;
	finpour
	afficher("U.V=",s) ;
fin
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int U[50] , n , i , s , c ;
    int V[50] , p ;
    c = 0 ;
    do
    {
       if (c==3)
       {
           printf("Erreur! Programme fermé") ;
           exit (0) ;
       }
       printf("Entrez le nombre de dimension de vecteur U et V(entre 1 et 50) : ") ;
       scanf("%d",&n) ;
       if (n<=0 || n>50)
       {
            printf("!!! La valeur de dimension doit etre compris entre 1 a 50\n") ;
       }
       c++ ;
    }while (n<1 || n>50) ;
    printf("Remplissage des deux vecteurs\nVecteur U\n") ;
    for(i=0 ; i<n ; i++) 
    {
        printf("Valeur %d: ",i+1) ;
        scanf("%d",&U[i]) ;
    }
    printf("Vecteur V\n") ;
    for(i=0 ; i<n ; i++)
    {
        printf("Valeur %d: ",i+1) ;
        scanf("%d",&V[i]) ;
    }
    printf("Calcul de produit scalaire de deux vecteurs\n") ;
    s=0 ;
    for(i=0 ; i<n ; i++)
    {
        p=U[i]*V[i] ;
        s=s+p ;
    }
    printf("U.V=%d", s) ;    
    return (0) ;
}
    