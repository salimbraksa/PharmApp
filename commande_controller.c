//
//  commande_controller.c
//  PharmApp
//
//  Created by Salim Braksa on 12/22/15.
//  Copyright © 2015 Braksa Salim. All rights reserved.
//

#include "commande_controller.h"

void sauvegarder_commande(char* filename, Commande* commande){

    // Declaration du fichier
    FILE* flot = fopen(filename, "ab");

    // Tester si flot et commande ne sont pas NULL
    if (!commande || !flot) return;

    // Sauvegarder la commande
    fwrite(commande,sizeof(commande),1,flot);

    // Fermer le fichier
    fclose(flot);


}
