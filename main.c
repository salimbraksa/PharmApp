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
    MedicamentsLinkedList* medicaments = get_medicament_from_name(MEDICAMENTS_FILENAME, "SpaSfone");
    printf("NAME %s\n", medicaments -> medicament -> nom);
    
    return 0;
}