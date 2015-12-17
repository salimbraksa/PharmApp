//
//  client.c
//  PharmApp
//
//  Created by Salim Braksa on 12/17/15.
//  Copyright © 2015 Braksa Salim. All rights reserved.
//

#include "client.h"

// Définition de la structure Client
struct _client {
    
    long int id;
    char* nom;
    char* telephone;
    char* cin;
    
};

// Implémentation  des fonctions
Client* creer_client(long int num, char* nom, char* telephone, char* cin) {
    
    // Alloc new Client
    Client* client = (Client*)malloc(sizeof(Client));
    
    // Set it's properties
    client -> id = num;
    strcpy(client -> nom, nom);
    strcpy(client -> telephone, telephone);
    strcpy(client -> cin, cin);
    
    // Return
    return client;
    
}