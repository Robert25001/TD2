/*
Algorithme exo3_TD2
Variable T : tableau entier[50] ;
	 T1 : tableau entier[50] ;
         n , c , i , q :entier ;
Debut
    c<-1 ;
    Faire
        afficher("Entrez la valeur de n(entre 1 et 50): ") ;
        lire(n) ;
        si(c=3)
            afficher("Erreur! Programme fermé") ;
            fin ;
        finsi    
        Si (n<=0 OU n>50)
            afficherln("!!! La valeur de n doit etre entre 1 a 50") ;
        FinSi
        c<-c+1 ;
    Tantque (n<=0 OU n>50) ;
    q <- 0 ;
    Pour(i<-0 ; i<n ; i<-i+1)
        afficher("Entrez nombre ",i+1,": ") ;
        lire(T1[i]) ;
        si (T1[i]<>0)
            T[q]<-T1[i] ;
            q<-q+1 ;
        finsi
    FinPour
    Pour(i<-0 ; i<n ; i<-i+1)
        afficherln("T[",i,"]=",T[i]) ;
    FinPour
Fin
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int T[50] , T1[50] , n , i , c , q ;
    c = 1 ;
    do
    {
       printf("Entrez la valeur de n(entre 1 et 50) : ") ;
       scanf("%d",&n) ;
       if (c==3)
       {
           printf("Erreur! Programme fermé") ;
           exit (0) ;
       }
       if (n<=0 || n>50)
       {
            printf("!!! La valeur de n doit etre compris entre 1 a 50\n") ;
       }
       c++ ;
    }while (n<=0 || n>50) ;
    q=0 ;
    for(i=0; i<n ; i++)
    {
        printf("Entrez nombre %d: ",i+1) ;
        scanf("%d",&T1[i]) ;
        if(T1[i]!=0)
        {
            T[q]=T1[i] ;
            q++ ;
        }
    }
    for(i=0 ; i<q ; i++)
    {
        printf("T[%d]=%d\n",i,T[i]) ;
    }
    return (0) ;
}
    
