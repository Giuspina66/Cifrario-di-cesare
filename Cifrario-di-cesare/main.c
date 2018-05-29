#include <stdio.h>
#include <string.h>
int main(void){
    char alfabeto[] = "abcdefghijklmnopqrstuvwxyz"; //stringa contenente le lettere dell'alfabeto
    char parola_inserita[20];      //parola inserita dall'utente
    char parola_crittografata[20];  //parola crittografata
    int chiave = 3;                 //chiave di crittografia
    int i = 0;
    int j = 0;
    unsigned long len = 0;
    
    //***********************************************
    printf("\nInserisci la parola da crittografare");
    scanf("%s", parola_inserita);
    
    printf("\nInserisci la chiave");
    scanf("%d", &chiave);
    
    printf("\n\n");
    //***********************************************
    
    len = strlen(parola_inserita);
    
    while(i < len){
        //trovo l'indice
        for(j = 0; j < 26; j++){
            if(parola_inserita[i] == alfabeto[j])
                break;  //j contiene l'indice
        }
        
        
        if(j + chiave > 25)
            //metto la lettera dell'alfabeto con indice (j + chiave) - 26
            //in parola_crittografata all'indice i
            parola_crittografata[i] = alfabeto[(j + chiave) - 26];
        else
            //altrimenti metto la lettera dell'alfabeto con indice (j + chiave)
            //in parola_crittografata all'indice i
            parola_crittografata[i] = alfabeto[j + chiave];
        
        i++;
    }
    
    //metto \0 alla fine di parola_crittografata
    parola_crittografata[i] = '\0';
    //stampo parola_crittografata
    printf("\nla parola %s crittografata con chiave %d e' %s", parola_inserita, chiave, parola_crittografata);
    printf("\n\n");
}
