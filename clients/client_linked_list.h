
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

/// Liste chainée des clients
typedef struct _clients_linked_list {

    Client* client ;
    struct _clients_linked_list* next;

} ClientsLinkedList ;

/// Permet de créer un nouveau noeud qui contient un client
ClientsLinkedList* linked_list_Clients_new(Client* client);

/// Permet d'ajouter un client  à la liste chainée des clients

/*
do not use the terme  "list" because it is use by c++ so use ' liste' */

void linked_list_Clients_add(ClientsLinkedList ** liste, Client* client);

#endif /* Clients_linked_list_h */
