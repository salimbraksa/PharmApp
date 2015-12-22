//
//  commande.c
//  PharmApp
//
//  Created by Braksa - Boutaib on 12/21/15.
//  Copyright © 2015 NSApps. All rights reserved.
//

#include "commande.h"

// Implémentation des fonctions

Commande* creer_commande(time_t date_time, Array* medicaments_ids) {
    
    // Alloc new Commande
    Commande* commande = (Commande*)malloc(sizeof(Commande));
    
    // Set properties
    commande -> date_time = date_time;
    commande -> medicaments_ids = medicaments_ids;
    
    // Return
    return commande;
    
}

void free_commande(Commande* commande) {
    
    // Free Array
    array_free(commande -> medicaments_ids);
    
    // Free la Commande
    free(commande);
    
}