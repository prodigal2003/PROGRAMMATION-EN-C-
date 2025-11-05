# include <stdio.h>
#include <math.h> /*NB la Memoire (RAM) est liberé automatiquement apres de l'execution d'un programme car en declarant simplement les Variables sont enre
gitré dans le stack mais un utilisé new oder malloc pour alouer la Memoire manuelle mais on dois la liberé a la fin avec delete  */ 
int main (void) // sagt explizit dass, die Main Fonction keine Argument nimmt das ist das gleich wie (int argc, char* argv []])
{
    int dreieckflache = 0 ; // 04 Byte ou deux byte 
    char letter =  'A ';  // 1 Byte 
    char value = '65 ';  // de mm 1 Byte 
    float number = 124.45 ; 
    int real = (int)number; // on peut aussi faire int real = (int )124,45 
    int *b = &real   ; 
    /*pour afficher un programmme en c on doit utilisé un flag  exemple 
    %d : Nmombre entier (int )
    %f : nombre Flottant ( float )
    %C : caractere (char )
    chaine de carctere ( texte )*/
    printf ( " le nombre est : %d \n  ou %C \n  " , real, value  ); 
    printf ("l'adresse de number dans la Ram est : %p\n", &number); 
    printf ("l'adresse de number dans la Ram est : %d \n", *b ); 
    printf ("la valeur du Float est de  : %f \n", number );  // float m'affiche une Valeur avec Beaucoup de chiffre apres la Virgule 
    printf ("la valeur du Float est de  : %.2f \n", number ); 
     return 0 ; 
}   