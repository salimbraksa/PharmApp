//
//  medicament.c
//  PharmApp
//
//  Created by Braksa - Boutaib on 12/21/15.
//  Copyright © 2015 NSApps. All rights reserved.
//

#include "Medicament.h"

// Implémentation des fonctions

Medicament* creer_medicament(char* nom, char* description, double prix, int seuil, int nombre_fournisseurs, int fournisseurs_ids[MAXIMUM_FOURNISSEURS]) {
    
    // Alloc new Medicament
    Medicament* medicament = (Medicament *)malloc(sizeof(Medicament));
    
    // Set properties
    strcpy(medicament->nom, nom);
    strcpy(medicament->description, description);
    medicament -> prix = prix;
    medicament -> seuil = seuil;
    medicament -> nombre_fournisseurs = nombre_fournisseurs;
    for (int i = 0; i < nombre_fournisseurs; i++) {
        (medicament -> fournisseurs_ids)[i] = fournisseurs_ids[i];
    }
    
    // Return
    return medicament;
    
}