//
//  client_controller.h
//  PharmApp
//
//  Created by Salim Braksa on 12/24/15.
//  Copyright © 2015 Braksa Salim. All rights reserved.
//

#ifndef client_controller_h
#define client_controller_h

#include <stdio.h>
#include "client.h"
#include "clients_linked_list.h"

/// Permet de sauvegarder le client dans un fichier
void sauvegarder_client(char* filename, Client* client);

/// Permet de retourner le dernier client qui peut être NULL
Client* get_last_client(char* filename);

/// Permet de charger tout les clients à partir d'un fichier
ClientsLinkedList* get_clients(char* filename);

#endif /* client_controller_h */
