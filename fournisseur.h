//
//  fournisseur.h
//  PharmApp
//
//  Created by Braksa - Boutaib on 12/17/15.
//  Copyright © 2015 NSApps. All rights reserved.
//

#ifndef fournisseur_h
#define fournisseur_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/// Définition de la structure Fournisser
typedef struct {
    
    long int fournisseur_id;
    char* nom;
    char* email;
    char* telephone;
    
} Fournisseur;

/// Permet de créer un nouveau Fournisseur
Fournisseur* creer_fournisseur(char* nom,
                               char* email,
                               char* telephone);

/// Libérer l'espace alloué par le Fournisseur
void free_fournisseur(Fournisseur* fournisseur);

#endif /* fournisseur_h */
