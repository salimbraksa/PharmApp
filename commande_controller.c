//
//  commande_controller.c
//  PharmApp
//
//  Created by Salim Braksa on 12/22/15.
//  Copyright © 2015 Braksa Salim. All rights reserved.
//

#include "commande_controller.h"


void sauvegarder_commande(const char *nomFichier ,Commande* commande){
    FILE* flot ;
    ///si liste non vide
    if(commande!=NULL){
            ///ouvrir un fichier binaire en écriture : suffixe b
            if((flot=fopen(nomFichier,"wb"))!=NULL){
                    /// copier la commande dans le fichier passé en argument
                    fwrite(commande,sizeof(commande),1,flot);
                /// fermer le fichier
                fclose(flot);
                }
     }
}
