//
//  ventes_linked_list.c
//  PharmApp
//
//  Created by Braksa - Boutaib on 12/25/15.
//  Copyright © 2015 NSApps. All rights reserved.
//

#include "ventes_linked_list.h"

VentesLinkedList* linked_list_ventes_new(Vente* vente) {
    
    VentesLinkedList* list = (VentesLinkedList*)malloc(sizeof(VentesLinkedList));
    list -> vente = vente;
    list -> next = NULL;
    return  list;
    
}

void linked_list_ventes_add(VentesLinkedList** list, Vente* vente) {
    
    // If *list is NULL, then just create a new one
    if (!(*list)) {
        *list = linked_list_ventes_new(vente);
        return;
    }
    
    // Current node, and previous node
    VentesLinkedList* current_node = *list;
    VentesLinkedList* previous_node = NULL;
    
    // Iterate through list
    while (current_node) {
        previous_node = current_node;
        current_node = current_node -> next;
    }
    
    // Create new node
    current_node = linked_list_ventes_new(vente);
    previous_node->next = current_node;
    
}