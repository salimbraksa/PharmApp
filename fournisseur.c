//
//  fournisseur.c
//  PharmApp
//
//  Created by Braksa - Boutaib on 12/17/15.
//  Copyright © 2015 NSApps. All rights reserved.
//

#include "fournisseur.h"

// Helpers Prototypes

void set_fournisseur_data(Fournisseur* fournisseur, char* nom, char* email, char* telephone);

// Implémentation des fonctions

Fournisseur* creer_fournisseur(char* nom, char* email, char* telephone) {
    
    // Alloc new Fournisseur
    Fournisseur* fournisseur = (Fournisseur* )malloc(sizeof(Fournisseur));
    
    // Set it's properties
    set_fournisseur_data(fournisseur, nom, email, telephone);
    
    // Return
    return fournisseur;
    
}

void modifier_fournisseur(Fournisseur* fournisseur, char* nom, char* email, char* telephone) {
    set_fournisseur_data(fournisseur, nom, email, telephone);
}

// Helpers

void set_fournisseur_data(Fournisseur* fournisseur, char* nom, char* email, char* telephone) {
    
    strcpy(fournisseur -> nom, nom);
    strcpy(fournisseur -> email, email);
    strcpy(fournisseur -> telephone, telephone);
    
}