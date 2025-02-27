/*
Algorithme exo4_TD2
variable T : tableau entier[100] , n , i , c ;
	 TPOS : tableau entier[100] , j , k ;
	 TNEG : tableau entier[100] ;
début
	 c<-1 ;
	 faire
	 	afficher("Entrez la valeur de n(entre 1 et 100): ") ;
	 	lire(n) ;
	 	si(c=3)
	 		afficher("Erreur! Programme fermé") ;
	 		fin ;
	 	finsi
	 	si(n<=0 OU n>100)
	 		afficher("!!! La valeur de n doit etre compris entre 1 et 100") ;
	 	finsi
	 	c<-c+1 ;
	tantque(n<=0 OU n>100) ;
	j<-0 ;
	k<-0 ;
	pour(i<-0 ; i<n ; i<-i+1)
		afficher("Entrez nombre ",i+1," : ") ;
		lire(T[i]) ;
		si(T[i]>0)
			TPOS[j]<-T[i] ;
			j<-j+1 ;
		finsi
		si(T[i]<0)
			TNEG[k]<-T[i] ;
			k<-k+1 ;
		finsi
	finpour
	pour(i=0 ; i<j ; i<-i+1)
		afficherln("TPOS[",i,"]=",TPOS[i]) ;
	finpour
	afficher("\n") ;
	pour(i=0 ; i<k ; i<-i+1)
		afficherln("TNEG[",i,"]=",TNEG[i]) ;
	finpour
fin
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int T[100] , n , i , c ;
    int TPOS[100] , TNEG[100] , j , k ;
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
    j=0 ;
    k=0 ;
    for(i=0 ; i<n ; i++) 
    {
        printf("Entrez nombre %d: ",i+1) ;
        scanf("%d",&T[i]) ;
        if(T[i]>0)
        {
            TPOS[j] = T[i] ;
            j++ ;
        }
        if (T[i]<0)
        {
            TNEG[k]=T[i] ;
            k++ ;
        }
    }
    for(i=0 ; i<j ; i++)
    {
        printf("TPOS[%d]=%d\n",i,TPOS[i]) ;
    }
    printf("\n") ;
    for(i=0 ; i<k ; i++)
    {
        printf("TNEG[%d]=%d\n",i,TNEG[i]) ;
    }
    return (0) ;
}
    
