//
//  fournisseur.h
//  PharmApp
//
//  Created by Salim Braksa on 12/17/15.
//  Copyright © 2015 Braksa Salim. All rights reserved.
//

#ifndef fournisseur_h
#define fournisseur_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/// Définition de la structure Fournisser
typedef struct _fournisseur {
    
    long int id;
    char* nom;
    char* email;
    char* telephone;
    
} Fournisseur;

/// Permet de créer un nouveau Fournisseur
Fournisseur* creer_fournisseur(char* nom, char* email, char* telephone);

#endif /* fournisseur_h */
