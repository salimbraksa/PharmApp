//
//  commande_controller.c
//  PharmApp
//
//  Created by Salim Braksa on 12/22/15.
//  Copyright © 2015 Braksa Salim. All rights reserved.
//

#include "commande_controller.h"


void sauvegarder_commande(Commande* commande){
    FILE* flot;

    ///si liste non vide
    if(commande!=NULL){

            ///ouvrir un fichier binaire en écriture : suffixe b
            if((flot=fopen("Commandes","wb"))!=NULL){

                /// parcourir la liste jusque fin
                if(commande!=NULL){

                    fwrite(commande,sizeof(commande),1,flot); // copier chaque maillon
                }
                /// fermer le fichier
                fclose(flot);
            }
            else
            printf("Erreur création fichier\n");
     }
     else
        printf("Pas de sauvegarde pour d'une command vide !\n");// optionel
}
