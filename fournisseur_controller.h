//
//  fournisseur_controller.h
//  PharmApp
//
//  Created by Salim Braksa on 12/25/15.
//  Copyright © 2015 Braksa Salim. All rights reserved.
//

#ifndef fournisseur_controller_h
#define fournisseur_controller_h

#include <stdio.h>
#include "fournisseurs_linked_list.h"
#include "fournisseur.h"
#include "sb_string.h"

/// Permet de sauvegarder la fournisseur dans un fichier
void sauvegarder_fournisseur(char* filename, Fournisseur* fournisseur);

/// Permet de retourner le dernier id d'une fournisseur qui peut être NULL
Fournisseur* get_last_fournisseur(char* filename);

/// Permet de charger tout les fournisseurs à partir d'un fichier
FournisseursLinkedList* get_fournisseurs(char* filename);

#endif /* fournisseur_controller_h */
