
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

/// Permet de créer un nouveau noeud qui contient un fournisseur
FournisseursLinkedList* linked_list_Fournisseurs_new(Fournisseur* fournisseur);

/// Permet d'ajouter un fournisseur  à la liste chainée des fournisseurs

/*
do not use the terme  "list" because it is use by c++ so use ' liste' */

void linked_list_Fournisseurs_add(FournisseursLinkedList ** liste, Fournisseur* fournisseur);

#endif /* Fournisseurs_linked_list_h */
