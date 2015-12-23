
//
//  clients_linked_list.c
//  PharmApp
//
//  Created by Boutaib issam on 12/23/15.
//  Copyright © 2015 Boutaib issam. All rights reserved.
//

#include "client_linked_list.h"

ClientsLinkedList* linked_list_Clients_new(Client* client) {

    ClientsLinkedList* liste = (ClientsLinkedList*)malloc(sizeof(ClientsLinkedList));
    liste -> client = client;
    liste -> next = NULL;
    return  liste;

}

void linked_list_Clients_add(ClientsLinkedList** liste, Client* client) {

    // If *list is NULL, then just create a new one
    if (!(*liste)) {
        *liste = linked_list_Clients_new(client);
        return;
    }

    // Current node, and previous node
    ClientsLinkedList* current_node = *liste;
    ClientsLinkedList* previous_node = NULL;

    // Iterate through list
    while (current_node) {
        previous_node = current_node;
        current_node = current_node -> next;
    }

    // Create new node
    current_node = linked_list_Clients_new(client);
    previous_node->next = current_node;

}
