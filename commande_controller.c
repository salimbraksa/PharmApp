//
//  commande_controller.c
//  PharmApp
//
//  Created by Braksa - Boutaib on 12/22/15.
//  Copyright © 2015 NSApps. All rights reserved.
//

#include "commande_controller.h"
#include "sb_file.h"

void sauvegarder_commande(char* filename, Commande* commande){
    
    // Avant tout, tester si commande n'est pas NULL
    if (!commande) return;
    
    // Créer le fichier s'il n'existe pas
    if (!file_exist(filename)) {
        create_file(filename);
    }
    
    // Cherche si le médicament existe
    // Si oui, il suffit de modifier le médicament
    // Existant, Sinon il crée un nouveau médicament
    // Dans la base de donnée
    FILE* file = fopen(filename, "r+b");
    
    // Sortir si le fichier ne peux pas s'ouvrir
    if (!file) return;
    
    // Itérer
    do {
        
        Commande* current_commande = (Commande*)malloc(sizeof(Commande));
        if (!fread(current_commande, sizeof(Commande), 1, file)) break;
        
        // Si le médicament est trouvé
        if (current_commande -> commande_id == commande -> commande_id) {
            
            // Modifier le médicament
            long int currPost = ftell(file);
            fseek(file, currPost - sizeof(Commande), SEEK_SET);
            fwrite(commande, sizeof(Commande), 1, file);
            
            // Sortir de la fonction
            fclose(file);
            return;
        }
        
    } while (1);
    
    // Set nouveau id
    long int new_id = get_last_commande(filename) -> commande_id + 1;
    commande -> commande_id = new_id;
    
    // Sauvegarder la commande
    fwrite(commande, sizeof(Commande), 1, file);
    
    // Fermer le fichier
    fclose(file);

}

Commande* get_last_commande(char* filename) {
    
    // Ouvrir le fichier
    FILE* flot = fopen(filename, "rb");
    
    // Tester si flot ne sont pas NULL
    if (!flot) return NULL;
    
    // Pointer sur la derniere commande dans le fichier
    fseek(flot, -sizeof(Commande), SEEK_END);
    
    // Lire la derniere commande
    Commande* commande = (Commande*)malloc(sizeof(Commande));
    fread(commande, sizeof(Commande), 1, flot);
    
    return commande;
    
}

LinkedList* get_commandes_from_date(char* filename, char* date) {
    
    // Ouvrir le fichier
    FILE* flot = fopen(filename, "rb");
    
    // Tester si flot n'est pas NULL
    if (!flot) return NULL;
    
    // Liste chainée de commandes
    LinkedList* commandes = NULL;
    
    do {
        
        Commande* commande = (Commande*)malloc(sizeof(Commande));
        if(!fread(commande, sizeof(Commande), 1, flot)) break;
        
        // Ajouter que les commandes dont la date égale à
        // La date donnée par l'utilisateur
        struct tm commande_time = *localtime(&(commande -> date_time));
        struct tm user_time;
        strptime(date, "%Y-%m-%d", &user_time);
        
        if (user_time.tm_year == commande_time.tm_year &&
            user_time.tm_mon == commande_time.tm_mon &&
            user_time.tm_mday == commande_time.tm_mday) {
            linked_list_append(&commandes, commande);
        }
        
    } while (1);

    // Return
    return commandes;

}

LinkedList* get_commandes(char* filename) {
    
    // Ouvrir le fichier
    FILE* flot = fopen(filename, "rb");
    
    // Tester si flot n'est pas NULL
    if (!flot) return NULL;
    
    // Declarer un tableau de commandes
    LinkedList* commandes = NULL;
    
    // Lire les données du fichier
    do {
        Commande* commande = (Commande*)malloc(sizeof(Commande));
        if (!fread(commande, sizeof(Commande), 1, flot)) break;
        linked_list_append(&commandes, commande);
    } while (1);
    
    // Fermer le fichier
    fclose(flot);
    
    // Return
    return commandes;
    
}
