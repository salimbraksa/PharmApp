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
//    int ids[2] = {1, 2};
    Medicament* medicament = get_medicament_from_id(MEDICAMENTS_FILENAME, 6);
    printf("Medic Name %s\n", medicament -> nom);
    
    return 0;
}