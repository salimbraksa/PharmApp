//
//  fournisseurs_linked_list.c
//  PharmApp
//
//  Created by boutaib issam on 12/23/15.
//  Copyright © 2015 boutaib issam. All rights reserved.
//

#include "fournisseur_linked_list.h"

FournisseursLinkedList* linked_list_Fournisseurs_new(Fournisseur* fournisseur) {

    FournisseursLinkedList* liste = (FournisseursLinkedList*)malloc(sizeof(FournisseursLinkedList));
    liste -> fournisseur = fournisseur;
    liste -> next = NULL;
    return  liste;

}

void linked_list_Fournisseurs_add(FournisseursLinkedList** liste, Fournisseur* fournisseur) {

    // If *list is NULL, then just create a new one
    if (!(*liste)) {
        *liste = linked_list_Fournisseurs_new(fournisseur);
        return;
    }

    // Current node, and previous node
    FournisseursLinkedList* current_node = *liste;
    FournisseursLinkedList* previous_node = NULL;

    // Iterate through list
    while (current_node) {
        previous_node = current_node;
        current_node = current_node -> next;
    }

    // Create new node
    current_node = linked_list_Fournisseurs_new(fournisseur);
    previous_node->next = current_node;

}
