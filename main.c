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

int main(int argc, const char * argv[]) {
    
    // Add Client
    Client* client = creer_client("Chaymae", "0635294145", "BK319399");
//    sauvegarder_client(CLIENTS_FILENAME, client);
    
    ClientsLinkedList* clients = get_clients(CLIENTS_FILENAME);
    printf("ID %s \n", clients -> next -> next -> client -> nom);
    
    return 0;
}