#include <stdio.h>
#include <stdlib.h>

void triangle (int hauteur){ /*utilise void car ne renvoie pas de valeur*/
	int i,j;
     for(i= 0; i<=hauteur; i++){
       for(j=0; j<i; j++){ //j représente la ligne d'en dessous et i la ligne d'au dessus, donc on rajoute une étoile à chaque fois.
            printf("*");           
       }
       printf("\n");
    }
}

void carre (int hauteur){ 
	int i,j,k;   
    for (i=0; i<hauteur; i++){
        printf("* ");
    }
    printf("\n");
       
    for (j=0; j<hauteur -2; j++){
        printf("\n");
        printf("*");

        for(k=0;k<hauteur-2; k++){
       		printf("  ");
        }
        printf(" *");
        printf("\n");                     
    }
    printf("\n");
    for (i=0; i<hauteur; i++){
        printf("* ");
    }
	
}


int menu (int choix){ /*utilise int car renvoie une valeur*/

	int hauteur,result; 

	while (choix != 3){
		printf("\n");
		printf("1) Triangle \n 2) Carré \n q) Quitter \n");
		result = scanf("%d", &choix);

		if (result == 3) {
    		printf("Au revoir ! \n");
    		return EXIT_FAILURE;
		}

		if (choix == 1){
    		printf("hauteur ? \n");
    		scanf("%d", &hauteur);   
    		triangle(hauteur); /*appel de la fonction triangle*/
		}
		if (choix == 2){
    		printf("hauteur ?\n");
    		scanf("%d", &hauteur);
    		carre (hauteur); /*appel de la fonction carré*/
 		}
 	}
 	return EXIT_SUCCESS;
}


int main(int argc, char const *argv[]){

	int choix = 0, result;
	result = menu (choix);

return result; /*retourne le résultat, soit la valeur, savoir si on relance le programme ou pas*/
}
