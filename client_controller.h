//
//  client_controller.h
//  PharmApp
//
//  Created by Braksa - Boutaib on 12/24/15.
//  Copyright © 2015 NSApps. All rights reserved.
//

#ifndef client_controller_h
#define client_controller_h

#include <stdio.h>
#include "client.h"
#include "clients_linked_list.h"
#include "sb_string.h"

typedef enum {
    NAME,
    ID
} ClientSearchType;

/// Permet de sauvegarder le client dans un fichier
void sauvegarder_client(char* filename, Client* client);

/// Permet de retourner le dernier client qui peut être NULL
Client* get_last_client(char* filename);

/// Permet de retourner un client à partir son id
Client* get_client_from_id(char* filename, long int client_id);

/// Permet de retourner un client à partir son nom
ClientsLinkedList* get_client_from_name(char* filename, char* name);

/// Permet de charger tout les clients à partir d'un fichier
ClientsLinkedList* get_clients(char* filename);

#endif /* client_controller_h */
