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

/// Définition de la structure Commande
typedef struct {

    long int commande_id;
    time_t date_time;

    Array* medicaments_ids;

} Commande;

typedef struct ListeCommandes{
    Commande * commande ;
    struct ListeCommande * suivant ;
}ListeCommandes ;

/// Permet de créer une nouvelle Commande
Commande* creer_commande(time_t date_time,
                         Array* medicaments_ids);

/// Libérer l'espace alloué par la Commande
void free_commande(Commande* commande);

#endif /* commande_h */
