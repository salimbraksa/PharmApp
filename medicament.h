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

/// Définition de la structure Medicament
typedef struct {
    
    long int medicament_id;
    char* nom;
    char* description;
    double prix;
    double seuil;
    
    Array* fournisseurs_ids;
    
} Medicament;

/// Permet de créer un nouveau Medicament
Medicament* creer_medicament(char* nom,
                             char* description,
                             double prix,
                             double seuil,
                             Array* fournisseurs_ids);

/// Libérer l'espace alloué par le Médicament
void free_medicament(Medicament* medicament);

#endif /* Medicament_h */
