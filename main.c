//
//  main.c
//  PharmApp
//
//  Created by Braksa - Boutaib on 12/17/15.
//  Copyright © 2015 NSApps. All rights reserved.
//

#include <stdio.h>
#include <time.h>
#include "commande_controller.h"
#include "constants.h"

int main(int argc, const char * argv[]) {
    
    // Add Commande
    CommandesLinkedList* list = get_commandes(COMMANDES_FILENAME);
    
    return 0;
}