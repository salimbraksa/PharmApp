//
//  fournisseur.c
//  PharmApp
//
//  Created by Braksa - Boutaib on 12/17/15.
//  Copyright © 2015 NSApps. All rights reserved.
//

#include "fournisseur.h"

// Implémentation des fonctions

Fournisseur* creer_fournisseur(char* nom, char* email, char* telephone) {
    
    // Alloc new Fournisseur
    Fournisseur* fournisseur = (Fournisseur* )malloc(sizeof(Fournisseur));
    
    // Alloc properties
    fournisseur -> nom = (char*)malloc(sizeof(char) * strlen(nom));
    fournisseur -> email = (char*)malloc(sizeof(char) * strlen(email));
    fournisseur -> telephone = (char*)malloc(sizeof(char) * strlen(telephone));
    
    // Set it's properties
    strcpy(fournisseur -> nom, nom);
    strcpy(fournisseur -> email, email);
    strcpy(fournisseur -> telephone, telephone);
    
    // Return
    return fournisseur;
    
}

void free_fournisseur(Fournisseur* fournisseur) {
    
    // Free Pointers
    free(fournisseur -> nom);
    free(fournisseur -> telephone);
    free(fournisseur -> email);
    
    // Free Fournisseur
    free(fournisseur);
    
}