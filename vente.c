//
//  vente.c
//  PharmApp
//
//  Created by Braksa - Boutaib on 12/25/15.
//  Copyright © 2015 NSApps. All rights reserved.
//

#include "vente.h"

// Implémentation des fonctions

Vente* creer_vente(time_t date_time, int nombre_medicaments, int medicaments_ids[VENTE_MAX_MEDICAMENTS_IDS]) {
    
    // Alloc new Commande
    Vente* vente = (Vente*)malloc(sizeof(Vente));
    
    // Set properties
    vente -> date_time = date_time;
    vente -> nombre_medicaments = nombre_medicaments;
    for (int i = 0; i < nombre_medicaments; i++) {
        vente -> medicaments_ids[i] = medicaments_ids[i];
    }
    
    // Return
    return vente;
    
}