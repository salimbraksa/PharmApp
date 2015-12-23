
//
//  medicaments_linked_list.h
//  PharmApp
//
//  Created by Boutaib issam on 12/23/15.
//  Copyright © 2015 Boutaib issam. All rights reserved.
//

#ifndef Medicaments_linked_list_h
#define Medicaments_linked_list_h

#include "medicament.h"

/// Liste chainée de medicaments
typedef struct _medicaments_linked_list {

    Medicament* medicament ;
    struct _medicaments_linked_list* next;

} MedicamentsLinkedList ;

/// Permet de créer un nouveau noeud qui contient un medicament
MedicamentsLinkedList* linked_list_Medicaments_new(Medicament* medicament);

/// Permet d'ajouter un medicament  à la liste chainée des medicaments

/*
do not use the terme  "list" because it is use by c++ so use ' liste' */

void linked_list_Medicaments_add(MedicamentsLinkedList ** liste, Medicament* medicament);

#endif /* Medicaments_linked_list_h */
