//
//  commande.c
//  PharmApp
//
//  Created by Braksa - Boutaib on 12/21/15.
//  Copyright © 2015 NSApps. All rights reserved.
//

#include "commande.h"

// Implémentation des fonctions

Commande* creer_commande(time_t date_time, int nombre_medicaments, int medicaments_ids[MAX_MEDICAMENTS_IDS]) {
    
    // Alloc new Commande
    Commande* commande = (Commande*)malloc(sizeof(Commande));
    
    // Set properties
    commande -> date_time = date_time;
    commande -> nombre_medicaments = nombre_medicaments;
    for (int i = 0; i < nombre_medicaments; i++) {
        commande -> medicaments_ids[i] = medicaments_ids[i];
    }
    
    // Return
    return commande;
    
}