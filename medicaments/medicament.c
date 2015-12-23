//
//  medicament.c
//  PharmApp
//
//  Created by Braksa - Boutaib on 12/21/15.
//  Copyright © 2015 NSApps. All rights reserved.
//

#include "Medicament.h"

// Implémentation des fonctions

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

void free_medicament(Medicament* medicament) {
    
    // Free Pointers
    array_free(medicament -> fournisseurs_ids);
    free(medicament -> nom);
    free(medicament -> description);
    
    // Free Medicament
    free(medicament);
    
}