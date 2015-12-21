//
//  medicament.h
//  PharmApp
//
//  Created by Salim Braksa on 12/21/15.
//  Copyright © 2015 Braksa Salim. All rights reserved.
//

#ifndef Medicament_h
#define Medicament_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "array.h"

/// Définition de la structure Client
typedef struct {
    
    long int medicament_id;
    char* nom;
    char* description;
    double prix;
    double seuil;
    
    Array* fournisseurs_ids;
    
} Medicament;

/// Permet de créer un nouveau medicament
Medicament* creer_medicament(char* nom,
                             char* description,
                             double prix,
                             double seuil,
                             Array* fournisseurs_ids);

#endif /* Medicament_h */
