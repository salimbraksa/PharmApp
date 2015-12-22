//
//  client.c
//  PharmApp
//
//  Created by Braksa - Boutaib on 12/17/15.
//  Copyright © 2015 NSApps. All rights reserved.
//

#include "client.h"

// Implémentation des fonctions

Client* creer_client(char* nom, char* telephone, char* cin) {
    
    // Alloc new Client
    Client* client = (Client*)malloc(sizeof(Client));
    
    // Alloc Properties
    client -> nom = (char*)malloc(sizeof(char) * strlen(nom));
    client -> telephone = (char*)malloc(sizeof(char) * strlen(telephone));
    client -> cin = (char*)malloc(sizeof(char) * strlen(cin));
    
    // Set properties
    strcpy(client -> nom, nom);
    strcpy(client -> telephone, telephone);
    strcpy(client -> cin, cin);
    
    // Return
    return client;
    
}

void free_client(Client* client) {
    
    // Free Pointers
    free(client -> nom);
    free(client -> cin);
    free(client -> telephone);
    
    // Free Client
    free(client);
    
}