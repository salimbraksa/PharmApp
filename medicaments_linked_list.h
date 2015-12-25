
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
MedicamentsLinkedList* linked_list_medicaments_new(Medicament* medicament);

/// Permet d'ajouter un medicament ˆ la liste chainŽe des medicaments
void linked_list_medicaments_add(MedicamentsLinkedList ** list, Medicament* medicament);

#endif /* Medicaments_linked_list_h */
