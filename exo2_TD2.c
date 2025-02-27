/*
Algorithme exo2_TD2
Variable T : tableau entier[50] ;
         i , n , max , d : entier ;
debut
    afficher("Saisir la taille de tableau (50 maximum): ") ;
    lire(n) ;
    tantque(n<=0 OU n>50)
        afficherln("!!! verifier bien votre choix(entre 1 et 50)") ;
        afficher("Resaisir la taille de tableau: ") ;
        lire(n) ; 
    fintantque
    afficherln("Remplir le tableau par des nombres entiers") ;
    pour(i<-0 ; i<n ; i<-i+1)
        afficher("nombre ",i," : ") ;
        lire(T[i]) ;
    finpour
    afficherln("Affichage du tableau") ;
    max<-T[0] ;
    pour(i<-0 ; i<n ; i<-i+1)
    	si (T[i]>=max)
    	    max<-T[i] ;
    	    d<-i+1 ;
    	 finsi
        afficherln("T[",i,"] = ",T[i]) ;
    finpour
    afficherln("L'element maximum est ",max," et sa position est ligne ",d) ;
fin
*/
#include<stdio.h>
int main()
{
    int T[50] , i , max , n , d ;
    printf("Saisir la taille de tableau (50 maximum): ") ;
    scanf("%d",&n) ;
    while(n<=0 || n>50)
    {
        printf("!!! verifier bien votre choix(entre 1 et 50)\n") ;
        printf("Resaisir la taille de tableau: ") ;
        scanf("%d",&n) ;
    }
    printf("Remplir le tableau par des nombres entiers\n") ;
    for(i=0 ; i<n; i++)
    {
        printf("nombre %d: ",i+1) ;
        scanf("%d",&T[i]) ;
    }
    printf("Affichage du tableau\n") ;
    max=T[0];
    for(i=0 ; i<n ; i++)
    {
        if (T[i]>=max)
        {
            max=T[i] ;
            d = i+1 ;
        }
        printf("T[%d]=%d\n",i ,T[i]);
    } 
    printf("L'element maximum est %d et sa position est ligne %d\n",max,d) ;
    return (0) ;
}
    
    
