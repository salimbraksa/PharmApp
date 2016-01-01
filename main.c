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
#include "vente_controller.h"

int main(int argc, const char * argv[]) {
        
    Medicament* medic = get_medicament_from_id(MEDICAMENTS_FILENAME, 2);
    printf("QTE %d\n", medic -> quantite);
    
    return 0;
}
