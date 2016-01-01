//
//  main.c
//  PharmApp
//
//  Created by Braksa - Boutaib on 12/17/15.
//  Copyright © 2015 NSApps. All rights reserved.
//

#include <stdio.h>
#include "constants.h"
#include "medicament_controller.h"
#include "commande_controller.h"

int main(int argc, const char * argv[]) {
    
//    Medicament* medic = get_medicament_from_id(MEDICAMENTS_FILENAME, 1);
//    long int medics[1][2] = { {medic->medicament_id, medic->seuil} };
//    Commande* commande = create_commande(time(NULL), 1, medics);
//    save_commande(COMMANDES_FILENAME, commande);
    
    LinkedList* commandes = get_commandes_from_date(COMMANDES_FILENAME, "2016-01-01");
    Commande* commande = commandes -> next -> data;
    printf("QTE %ld\n", commande -> medicaments[0][1]);
    
    return 0;
}
