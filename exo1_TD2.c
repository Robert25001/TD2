/*
Algorithme exo1_TD2
Variable T : tableau entier[50] ;
         i , n , s : long entier ;
début
    afficher("Saisir la taille de tableau (50 maximum): ") ;
    lire(n) ;
    tantque(n<0 OU n>50)
        afficherln("!!! verifier bien votre choix(entre 1 et 50)") ;
        afficher("Resaisir la taille de tableau: ") ;
        lire(n) ; 
    fintantque
    afficherln("Remplir le tableau par des nombres entiers") ;
    pour(i<-1 ; i<=n ; i<-i+1)
        afficher("nombre ",i," : ") ;
        lire(T[i]) ;
    finpour
    afficherln("Affichage du tableau") ;
    pour(i<-1 ; i<=n ; i<-i+1)
        afficherln("T[",i-1,"] = ",T[i]) ;
    finpour
    s<-0 ;
    pour(i<-1 ; i<=i ; i++)
        s<-s+T[i] ;
    finpour
    afficherln("La somme des éléments du tableau vaut",s) ;
fin
*/
#include<stdio.h>
int main()
{
    int T[50] , i , n ;
    long int s ;
    printf("Saisir la taille de tableau (50 maximum): ") ;
    scanf("%d",&n) ;
    while(n<0 || n>50)
    {
        printf("!!! verifier bien votre choix(entre 1 et 50)\n") ;
        printf("Resaisir la taille de tableau: ") ;
        scanf("%d",&n) ;
    }
    printf("Remplir le tableau par des nombres entiers\n") ;
    for(i=1 ; i<=n; i++)
    {
        printf("nombre %d: ",i) ;
        scanf("%d",&T[i]) ;
    }
    printf("Affichage du tableau\n") ;
    for(i=1 ; i<=n ; i++)
    {
        printf("T[%d] = %d\n",i-1,T[i]) ;
    }
    s=0 ;
    for(i=1 ; i<=n ; i++)
    {
        s=s+T[i] ;
    }
    printf("La somme des éléments du tableau vaut %ld\n",s) ;
    return (0) ;
}
    
