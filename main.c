//
//  main.c
//  PharmApp
//
//  Created by Braksa - Boutaib on 12/17/15.
//  Copyright © 2015 NSApps. All rights reserved.
//

#include <stdio.h>
#include "constants.h"

#include "commande_controller.h"

int main(int argc, const char * argv[]) {
    
    // Get commande
    LinkedList* commandes = get_commandes_from_date(COMMANDES_FILENAME, "2015-12-30");
    Commande* commande = commandes -> data;
    printf("ID %ld\n", commande -> commande_id);
    
    return 0;
}