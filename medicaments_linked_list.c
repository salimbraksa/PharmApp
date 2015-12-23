
//
//  medicaments_linked_list.c
//  PharmApp
//
//  Created by Boutaib issam on 12/23/15.
//  Copyright © 2015 Boutaib issam. All rights reserved.
//

#include "medicaments_linked_list.h"

MedicamentsLinkedList* linked_list_Medicaments_new(Medicament* medicament) {

    MedicamentsLinkedList* liste = (MedicamentsLinkedList*)malloc(sizeof(MedicamentsLinkedList));
    liste -> medicament = medicament;
    liste -> next = NULL;
    return  liste;

}

void linked_list_Medicaments_add(MedicamentsLinkedList** liste,Medicament* medicament) {

    // If *list is NULL, then just create a new one
    if (!(*liste)) {
        *liste = linked_list_Medicaments_new(medicament);
        return;
    }

    // Current node, and previous node
    MedicamentsLinkedList* current_node = *liste;
    MedicamentsLinkedList* previous_node = NULL;

    // Iterate through list
    while (current_node) {
        previous_node = current_node;
        current_node = current_node -> next;
    }

    // Create new node
    current_node = linked_list_Medicaments_new(medicament);
    previous_node->next = current_node;

}
