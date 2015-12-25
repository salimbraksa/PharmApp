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
    Fournisseur* fournisseur = get_fournisseur_from_id(FOURNISSEURS_FILENAME, 2);
    printf("Name: %s\n", fournisseur -> nom);
    
    return 0;
}