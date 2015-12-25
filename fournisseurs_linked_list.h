
//
//  fournisseurs_linked_list.h
//  PharmApp
//
//  Created by boutaib issam on 12/23/15.
//  Copyright © 2015 boutaib issam. All rights reserved.
//

#ifndef Fournisseurs_linked_list_h
#define Fournisseurs_linked_list_h

#include "fournisseur.h"

/// Liste chainée des fournisseurs
typedef struct _fournisseurs_linked_list {

    Fournisseur* fournisseur ;
    struct _fournisseurs_linked_list* next;

} FournisseursLinkedList ;

/// Permet de crer un nouveau noeud qui contient un fournisseur
FournisseursLinkedList* linked_list_fournisseurs_new(Fournisseur* fournisseur);

/// Permet d'ajouter un fournisseur ˆ la liste chaine des fournisseurs
void linked_list_fournisseurs_add(FournisseursLinkedList** list, Fournisseur* fournisseur);

#endif /* Fournisseurs_linked_list_h */
