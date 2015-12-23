
//
//  clients_linked_list.h
//  PharmApp
//
//  Created by Boutaib issam on 12/23/15.
//  Copyright © 2015 Boutaib issam. All rights reserved.
//

#ifndef Clients_linked_list_h
#define Clients_linked_list_h

#include "client.h"

/// Liste chaine des clients
typedef struct _clients_linked_list {

    Client* client ;
    struct _clients_linked_list* next;

} ClientsLinkedList ;

/// Permet de crer un nouveau noeud qui contient un client
ClientsLinkedList* linked_list_clients_new(Client* client);

/// Permet d'ajouter un client  à la liste chainée des clients
void linked_list_clients_add(ClientsLinkedList ** list, Client* client);

#endif /* Clients_linked_list_h */
