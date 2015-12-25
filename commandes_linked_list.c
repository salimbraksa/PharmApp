//
//  commandes_linked_list.c
//  PharmApp
//
//  Created by Salim Braksa on 12/23/15.
//  Copyright © 2015 Braksa Salim. All rights reserved.
//

#include "commandes_linked_list.h"

CommandesLinkedList* linked_list_commandes_new(Commande* commande) {

    CommandesLinkedList* list = (CommandesLinkedList*)malloc(sizeof(CommandesLinkedList));
    list -> commande = commande;
    list -> next = NULL;
    return  list;

}

void linked_list_commandes_add(CommandesLinkedList** list, Commande* commande) {

    // If *list is NULL, then just create a new one
    if (!(*list)) {
        *list = linked_list_commandes_new(commande);
        return;
    }

    // Current node, and previous node
    CommandesLinkedList* current_node = *list;
    CommandesLinkedList* previous_node = NULL;

    // Iterate through list
    while (current_node) {
        previous_node = current_node;
        current_node = current_node -> next;
    }

    // Create new node
    current_node = linked_list_commandes_new(commande);
    previous_node->next = current_node;

}
