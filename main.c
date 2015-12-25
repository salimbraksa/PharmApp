//
//  main.c
//  PharmApp
//
//  Created by Braksa - Boutaib on 12/17/15.
//  Copyright © 2015 NSApps. All rights reserved.
//

#include <stdio.h>
#include "constants.h"
#include "fournisseur_controller.h"

int main(int argc, const char * argv[]) {
    
    // Add Medicament
    Fournisseur* fournisseur = get_last_fournisseur(FOURNISSEURS_FILENAME);
    printf("ID %ld\n", fournisseur -> fournisseur_id);
    
    return 0;
}