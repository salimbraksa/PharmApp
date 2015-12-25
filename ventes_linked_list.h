//
//  ventes_linked_list.h
//  PharmApp
//
//  Created by Braksa - Boutaib on 12/25/15.
//  Copyright © 2015 NSApps. All rights reserved.
//

#ifndef ventes_linked_list_h
#define ventes_linked_list_h

#include <stdio.h>
#include "vente.h"

/// Liste chainée de ventes
typedef struct _ventes_linked_list {
    
    Vente* vente;
    struct _ventes_linked_list* next;
    
} VentesLinkedList ;

/// Permet de créer un nouveau noeud qui contient une vente
VentesLinkedList* linked_list_ventes_new(Vente* vente);

/// Permet d'ajouter une vente à la liste chainée
void linked_list_ventes_add(VentesLinkedList** list, Vente* vente);

#endif /* ventes_linked_list_h */
