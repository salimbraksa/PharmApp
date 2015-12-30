//
//  main.c
//  PharmApp
//
//  Created by Braksa - Boutaib on 12/17/15.
//  Copyright © 2015 NSApps. All rights reserved.
//

#include <stdio.h>
#include "medicament_controller.h"
#include "commande_controller.h"

int main(int argc, const char * argv[]) {
    
    // Creer le medicament
    Medicament* medicament = get_last_medicament(MEDICAMENTS_FILENAME);
    
    // Creer commande
    long int ids2[0] = {};
    Commande* commande = creer_commande(time(NULL), 0, ids2);
    
    // Add med to comm
    medicament_add_to_commande(medicament, commande);
    
    // Save
    sauvegarder_commande(COMMANDES_FILENAME, commande);
    
    return 0;
}