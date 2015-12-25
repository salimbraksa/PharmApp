//
//  fournisseurs_linked_list.c
//  PharmApp
//
//  Created by boutaib issam on 12/23/15.
//  Copyright © 2015 boutaib issam. All rights reserved.
//

#include "fournisseurs_linked_list.h"

FournisseursLinkedList* linked_list_Fournisseurs_new(Fournisseur* fournisseur) {

    FournisseursLinkedList* liste = (FournisseursLinkedList*)malloc(sizeof(FournisseursLinkedList));
    liste -> fournisseur = fournisseur;
    liste -> next = NULL;
    return  liste;

}

void linked_list_fournisseurs_add(FournisseursLinkedList** list, Fournisseur* fournisseur) {

    // If *list is NULL, then just create a new one
    if (!(*list)) {
        *list = linked_list_Fournisseurs_new(fournisseur);
        return;
    }

    // Current node, and previous node
    FournisseursLinkedList* current_node = *list;
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
