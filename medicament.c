//
//  medicament.c
//  PharmApp
//
//  Created by Braksa - Boutaib on 12/21/15.
//  Copyright © 2015 NSApps. All rights reserved.
//

#include "Medicament.h"

void set_medicament_data(Medicament* medicament, char* nom, char* description, double prix, int seuil, int nombre_fournisseurs, int fournisseurs_ids[MAXIMUM_FOURNISSEURS]);

// Implémentation des fonctions

Medicament* creer_medicament(char* nom, char* description, double prix, int seuil, int nombre_fournisseurs, int fournisseurs_ids[MAXIMUM_FOURNISSEURS]) {
    
    // Alloc new Medicament
    Medicament* medicament = (Medicament *)malloc(sizeof(Medicament));
    
    // Set properties
    medicament -> medicament_id = -1;
    set_medicament_data(medicament, nom, description, prix, seuil, nombre_fournisseurs, fournisseurs_ids);
    
    // Return
    return medicament;
    
}

void modifier_medicament(Medicament* medicament, char* nom, char* description, double prix, int seuil, int nombre_fournisseurs, int fournisseurs_ids[MAXIMUM_FOURNISSEURS]) {
    
    // Set medicament data
    set_medicament_data(medicament, nom, description, prix, seuil, nombre_fournisseurs, fournisseurs_ids);
    
}

// Helpers

void set_medicament_data(Medicament* medicament, char* nom, char* description, double prix, int seuil, int nombre_fournisseurs, int fournisseurs_ids[MAXIMUM_FOURNISSEURS]) {
    
    // Copie nom & description
    char* copied_nom = (char*)malloc(sizeof(char) * strlen(nom));
    char* copied_description = (char*)malloc(sizeof(char) * strlen(description));
    strcpy(copied_nom, nom);
    strcpy(copied_description, description);
    
    // Set
    strcpy(medicament->nom, copied_nom);
    strcpy(medicament->description, copied_description);
    medicament -> prix = prix;
    medicament -> seuil = seuil;
    medicament -> nombre_fournisseurs = nombre_fournisseurs;
    for (int i = 0; i < nombre_fournisseurs; i++) {
        (medicament -> fournisseurs_ids)[i] = fournisseurs_ids[i];
    }
    
}