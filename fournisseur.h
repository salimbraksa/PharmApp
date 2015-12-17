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

/// Modèle Fournisseur
typedef struct _fournisseur Fournisseur;

/// Permet de créer un nouveau Fournisseur
Fournisseur* creer_fournisseur(long int num, char* nom, char* email, char* telephone);

#endif /* fournisseur_h */
