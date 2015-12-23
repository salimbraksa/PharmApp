//
//  commande.h
//  PharmApp
//
//  Created by Braksa - Boutaib on 12/21/15.
//  Copyright © 2015 NSApps. All rights reserved.
//

#ifndef commande_h
#define commande_h

#include <stdio.h>
#include <time.h>
#include "array.h"

#define MAX_MEDICAMENTS_IDS 50

/// Définition de la structure Commande
typedef struct {

    long int commande_id;
    time_t date_time;
    
    int nombre_medicaments;
    int medicaments_ids[MAX_MEDICAMENTS_IDS];

} Commande;

/// Permet de créer une nouvelle Commande
Commande* creer_commande(time_t date_time,
                         int nombre_medicamants,
                         int medicaments_ids[MAX_MEDICAMENTS_IDS]);

/// Libérer l'espace alloué par la Commande
void free_commande(Commande* commande);

#endif /* commande_h */
