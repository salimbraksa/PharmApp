//
//  commandes_linked_list.h
//  PharmApp
//
//  Created by Salim Braksa on 12/23/15.
//  Copyright © 2015 Braksa Salim. All rights reserved.
//

#ifndef commandes_linked_list_h
#define commandes_linked_list_h

#include <stdio.h>
#include "commande.h"

/// Liste chainée de commandes
typedef struct _commandes_linked_list {
    
    Commande* commande;
    struct _commandes_linked_list* next;
    
} CommandesLinkedList ;

/// Permet de créer un nouveau noeud qui contient une commande
CommandesLinkedList* linked_list_commandes_new(Commande* commande);

/// Permet d'ajouter une commande à la liste chainée
void linked_list_commandes_add(CommandesLinkedList** list, Commande* commande);

#endif /* commandes_linked_list_h */
