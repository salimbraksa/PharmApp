//
//  medicament.h
//  PharmApp
//
//  Created by Braksa - Boutaib on 12/21/15.
//  Copyright © 2015 NSApps. All rights reserved.
//

#ifndef Medicament_h
#define Medicament_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "array.h"

#define MAXIMUM_FOURNISSEURS 10

/// Définition de la structure Medicament
typedef struct {
    
    long int medicament_id;
    char nom[80];
    char description[200];
    double prix;
    double seuil;
    
    int nombre_fournisseurs;
    int fournisseurs_ids[MAXIMUM_FOURNISSEURS];
    
} Medicament;

/// Permet de créer un nouveau Medicament
Medicament* creer_medicament(char* nom,
                             char* description,
                             double prix,
                             double seuil,
                             int nombre_fournisseurs,
                             int fournisseurs_ids[MAXIMUM_FOURNISSEURS]);

#endif /* Medicament_h */
