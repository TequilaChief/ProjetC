
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ligne_founder (void)
{
    FILE* fic ;
    char ligne[100];
    char *ptr_chaine ; // pointeur pour balayer les sous-chaînes obtenues
    char *save;
    long num_ligne = 0 ;
    char data_chaine[100];
    char *delimiteur=L"\t";

    long location=-1;
    char word[50];
    char *reponse;

//----------------------- ouverture du fichier de données CSV ------------------------------
    fic = fopen( "Lexique382.csv", "rt") ;
    if (fic==NULL)
    {
        printf("Ouverture fichier impossible !");
        exit(0);
    }
//----------------------- lecture du fichier de données CSV ------------------------------
// on lit une ligne après l'autre jusqu'à la fin du fichier
    printf("Enter the target string : ");
    scanf("%s",word);



    while ( fgets( ligne, 100, fic) != NULL && location==-1)
    {

    //140251



        printf(" \n %s",ligne);


        ptr_chaine = strtok(ligne, delimiteur);

        sscanf(ptr_chaine,"%s", data_chaine);

        //printf("\n %d%s",num_ligne,data_chaine);

        if(strcmp(word,data_chaine)==0){
            location = num_ligne;

            reponse = &ligne;


        }
        num_ligne++ ;


    }

    printf("\n index :%d",location);
    fclose(fic);

    return reponse;




}


