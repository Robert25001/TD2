/*
Algorithme Exo8_tab1D
Variable A : tableau entier[50] ;
	     i , max , n , c , d , min , e : entier ;
début
	afficher("saisir le taille de tableau (50 maximum): ") ;
	lire(n) ;
	c<-1 ;
	tantque (n<=0 OU n>50)
		if(c=3)
			afficher("!!!Erreur,Programme fermé") ;
			fin ;
		finsi
		afficherln("!!! verifier bien votre choix(entre 1 et 50)") ;
		afficher("Resaisir la taille de tableau: ") ;
		lire(n) ;
		c<-c+1 ;
	fintantque
	afficherln("Remplir le tableau par des nombres entiers") ;
	pour (i<-0 ; i<n ; i<-i+1)
		afficher("nombre ",i+1,": ") ;
		lire(A[i]) ;
	finpour
	afficherln("Affichage du tableau") ;
	max<-A[0] ;
	min<-A[0] ;
	pour (i<-1 ; i<=n ; i<-i+1)
		si (A[i-1]>max)
			max<-A[i-1] ;
			d<-i ;
		finsi
		si (A[i-1]>min)
			min<-A[i-1] ;
			e<-i ;
		finsi
		afficherln("A[",i-1,"]=",A[i-1]) ;
	finpour
	si (min=A[0])
		e<-1 ;
	finsi
	si (max=A[0])
		d<-1 ;
	finsi
	afficherln("La valeur de l'élément maximun est ",max," ,sa position est ligne ",d) ;
	afficher("La valeur de l'élément minimum est ",min," ,sa position est ligne ",e) ;
fin
*/
#include<stdio.h>
int main()
{
    int A[50] , i , max , n , c , d , min , e ;
    printf("Saisir la taille de tableau (50 maximum): ") ;
    scanf("%d",&n) ;
    c=1 ;
    while(n<=0 || n>50)
    {
        if(c==3)
        {
            printf("!!!Erreur,Programme fermé") ;
            exit (0) ;
        }
        printf("!!! verifier bien votre choix(entre 1 et 50)\n") ;
        printf("Resaisir la taille de tableau: ") ;
        scanf("%d",&n) ;
        c++ ;
    }
    printf("Remplir le tableau par des nombres entiers\n") ;
    for(i=0 ; i<n; i++)
    {
        printf("nombre %d: ",i+1) ;
        scanf("%d",&A[i]) ;
    }
    printf("Affichage du tableau\n") ;
    max=A[0];
    min=A[0] ;
    for(i=1 ; i<=n ; i++)
    {
        if (A[i-1]>max)
        {
            max=A[i-1] ;
            d = i ;
        }
        if (A[i-1]<min)
        {
            min=A[i-1] ;
            e = i ;
        }
        printf("A[%d]=%d\n",i-1 ,A[i-1]);
    } 
    if(min==A[0])
    {
        e=1 ;
    }
    if(max==A[0])
    {
        d=1 ;
    }
    printf("La valeur de l'élément maximum est %d , sa position est ligne %d.\n") ;
    printf("La valeur de l'élément minimum est %d , sa position est ligne %d\n",max,d,min,e) ;
    return (0) ;
}
    
    
    
