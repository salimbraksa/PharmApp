//
//  main.c
//  PharmApp
//
//  Created by Braksa - Boutaib on 12/17/15.
//  Copyright © 2015 NSApps. All rights reserved.
//

#include <stdio.h>
#include "constants.h"
#include "client_controller.h"
#include "sb_string.h"

int main(int argc, const char * argv[]) {
    
    // Add Client
    ClientsLinkedList* clients = get_client_from_name(CLIENTS_FILENAME, "chaYmae");
    
    printf("Name: %s\n", clients -> client -> nom);
    
    return 0;
}