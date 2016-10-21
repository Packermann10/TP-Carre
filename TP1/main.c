#include <stdio.h>
#include <stdlib.h>
/*//BUT : faire un algorithme affichant un carré d’étoiles modulable rempli avec le caractère +
//ENTREE : la longueur et la largeur du carré
//SORTIE : le carré avec les valeurs entrées

Var : i,j, long, larg : ENTIER

DEBUT
	ECRIRE « Entrez la valeur de la longueur »
	LIRE  long
	ECRIRE « Entrez la largeur »
	LIRE larg
	POUR i de 1 à (larg-1) FAIRE
		POUR j de 1 à long FAIRE
			DEBUT
				SI j=larg-1 ALORS
					long <- « * »
				SINON SI ( (i=0 ET j<>larg-1) OU (j=0 ET i= long-1) ALORS
					larg <- « * »
				SINON
					larg <- « + »
				FINSI
			FIN
	FIN */

int main()
{
int i=0;
int j=0;
int longueur=0;
int largeur=0;

printf("Veuillez entrer la longueur\n");
scanf("%d",&longueur);
printf("Veuillez entrer la largeur\n");
scanf("%d",&largeur);

for(i=0;i<longueur;i++){
    for(j=0;j<largeur;j++){
        if(j==largeur-1){
            printf("*\n");
        }else if(((i==0) && (j!=largeur-1)) || (j==0) || (i==longueur-1)){
            printf("*");
        }else{
            printf("+");
        }
    }
}
    return 0;
}
