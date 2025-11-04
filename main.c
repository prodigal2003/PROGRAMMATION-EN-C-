#include <stdio.h>// tout comme en c pour les input output 
#include <math.h> 

int main (void){ // point de dpart de tout Programme si il est absent le code ne compile pas je parle du main 
    printf ("Bonjour tout le monde ! :) \n");  // permet d'affiché quelque chose a l'ecran 
    int a = 2 ; 
    int b = 3  ; 
    printf("%u\n", a + b); /*print Formated (affiché le texte formaté a l'ecran ) le %d est le format bezeichener Format specifiers um dem Programm
    zu sagen wlche Type es ausgeben soll besipiel %d für int % i für ont signed  % f für float oder double %c für char 
    % für ziechen kette %U FÜR unsigned int */ 
    
    return 0; 
} /*pour la compilation il as fallut enlvé le masque d'extention sur windows parceque le Fichier main etait lu comme main.c.txt */