/*Lorsqu'une compagnie d'assurance prend en charge des réparations, elle laisse une franchise à la charge de l'assuré. Celle-
ci est égale à 10% du montant des réparations, avec un minimum de 200e et un maximum de 800e.
Programme qui demande le montant total des réparations, puis affiche la franchise correspondante ainsi que la part prise en 
charge par l'assurance.*/

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[]){
        int m, f, p;

        printf("Entrez le montant des réparations : \n");
        scanf("%d", &m);        
        f = (m*10) /100;
        
        if (f <200) {
                if (m<=200){    
                        printf("L'assurance ne prend en charge, vous payerez la totalité soit %d euros \n", m);
                }

                if (m>200){
                        p = m - 200;
                        printf("La franchise est de 200 euros, l'assurance paye %d euros \n", p);
                }
        }

        if ( (f>=200) && (f<=800) ){
                        p = m-f;
                        printf("La franchise est de %d euros, vous payerez %d euros \n", f, p);
        }

        if (f>800){
                p=m-800;
                printf("La franchise est de 800 euros, la part assuré est de %d euros \n", p);
        } 
        return EXIT_SUCCESS;
}
