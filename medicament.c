//
//  medicament.c
//  PharmApp
//
//  Created by Salim Braksa on 12/21/15.
//  Copyright © 2015 Braksa Salim. All rights reserved.
//

#include "Medicament.h"

Medicament* creer_medicament(char* nom, char* description, double prix, double seuil, Array* fournisseurs_ids) {
    
    // Alloc new Medicament
    Medicament* medicament = (Medicament *)malloc(sizeof(Medicament));
    
    // Alloc properties
    medicament -> nom = (char*)malloc(sizeof(char) * strlen(nom));
    medicament -> description = (char*)malloc(sizeof(char) * strlen(description));
    medicament -> fournisseurs_ids = NULL;
    
    // Set properties
    strcpy(medicament->nom, nom);
    strcpy(medicament->description, description);
    medicament -> prix = prix;
    medicament -> seuil = seuil;
    medicament -> fournisseurs_ids = fournisseurs_ids;
    
    // Return
    return medicament;
    
}