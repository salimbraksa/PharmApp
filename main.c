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

int main(int argc, const char * argv[]) {
    
    // Add Medicament
    FournisseursLinkedList* fournisseurs = get_fournisseurs_from_medicament(MEDICAMENTS_FILENAME, 1);
        
    return 0;
}