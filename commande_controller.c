//
//  commande_controller.c
//  PharmApp
//
//  Created by Salim Braksa on 12/22/15.
//  Copyright © 2015 Braksa Salim. All rights reserved.
//

#include "commande_controller.h"

void sauvegarder_commande(char* filename, Commande* commande){
    
    // Ouvrir le fichier
    FILE* flot = fopen(filename, "ab");
    
    // Tester si flot ou commande ne sont pas NULL
    if (!commande || !flot) return;
    
    // Sauvegarder la commande
    fwrite(commande, sizeof(Commande), 1, flot);

    // Fermer le fichier
    fclose(flot);

}

CommandesLinkedList* get_commandes(char* filename) {
    
    // Ouvrir le fichier
    FILE* flot = fopen(filename, "rb");
    
    // Tester si flot n'est pas NULL
    if (!flot) return NULL;
    
    // Declarer un tableau de commandes
    CommandesLinkedList* commandes = NULL;
    
    // Lire les données du fichier
    do {
        Commande* commande = (Commande*)malloc(sizeof(Commande));
        if (!fread(commande, sizeof(Commande), 1, flot)) break;
        linked_list_commandes_add(&commandes, commande);
    } while (1);
    
    // Fermer le fichier
    fclose(flot);
    
    // Return
    return commandes;
    
}
