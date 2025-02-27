/*
Algorithme exo5_TD2
Variable T : tableau entier[100] ;
	 n , i , c : entier ;
début
	c<-1 ;
	faire
		afficher("Entrez la valeur de n(entre 1 et 100) : ") ;
		lire(n) ;
		si(c=3)
			afficher("Erreur! Programme fermé") ;
			fin ;
		finsi
		si(n<=0 OU n>100) 
			afficherln("!!! La valeur de n doit etre compris entre 1 a 100") ;
		finsi
		c<-c+1 ;
	tantque(n<=0 OU n>100) ;
	pour(i<-0 ; i<n ; i<-i+1)
		afficher("Entrez nombre ",i+1,": ") ;
		lire(T[i]) ;
	finpour
	pour(i<-n-1 ; i>=0 ; i<-i-1)
		afficherln("T[",i,"]=",T[i]) ;
	finpour
fin
*/
#include<stdio.h>
int main()
{
    int T[100] , n , i , c ;
    c = 1 ;
    do
    {
       printf("Entrez la valeur de n(entre 1 et 100) : ") ;
       scanf("%d",&n) ;
       if (c==3)
       {
           printf("Erreur! Programme fermé") ;
           exit (0) ;
       }
       if (n<=0 || n>100)
       {
            printf("!!! La valeur de n doit etre compris entre 1 a 100\n") ;
       }
       c++ ;
    }while (n<=0 || n>100) ;
    for(i=0; i<n ; i++)
    {
        printf("Entrez nombre %d: ",i+1) ;
        scanf("%d",&T[i]) ;
    }
    for(i=n-1 ; i>=0 ; i--)
    {
        printf("T[%d]=%d\n",i,T[i]) ;
    }
    return (0) ;
}
    
