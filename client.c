//
//  client.c
//  PharmApp
//
//  Created by Braksa - Boutaib on 12/17/15.
//  Copyright © 2015 NSApps. All rights reserved.
//

#include "client.h"

// Helpers Prototypes

void set_client_data(Client* client, char* nom, char* telephone, char* cin);

// Implémentation des fonctions

Client* creer_client(char* nom, char* telephone, char* cin) {
    
    // Alloc new Client
    Client* client = (Client*)malloc(sizeof(Client));
    
    // Alloc Properties
    client -> nom = (char*)malloc(sizeof(char) * strlen(nom));
    client -> telephone = (char*)malloc(sizeof(char) * strlen(telephone));
    client -> cin = (char*)malloc(sizeof(char) * strlen(cin));
    
    // Set properties
    set_client_data(client, nom, telephone, cin);
    
    // Return
    return client;
    
}

void modifier_client(Client* client, char* nom, char* telephone, char* cin) {
    set_client_data(client, nom, telephone, cin);
}

void free_client(Client* client) {
    
    // Free Pointers
    free(client -> nom);
    free(client -> cin);
    free(client -> telephone);
    
    // Free Client
    free(client);
    
}

// Helpers

void set_client_data(Client* client, char* nom, char* telephone, char* cin) {
    
    strcpy(client -> nom, nom);
    strcpy(client -> cin, cin);
    strcpy(client -> telephone, telephone);
    
}