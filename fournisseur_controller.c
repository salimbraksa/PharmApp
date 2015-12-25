//
//  fournisseur_controller.c
//  PharmApp
//
//  Created by Salim Braksa on 12/25/15.
//  Copyright © 2015 Braksa Salim. All rights reserved.
//

#include "fournisseur_controller.h"

void sauvegarder_fournisseur(char* filename, Fournisseur* fournisseur) {
    
    // Ouvrir le fichier
    FILE* flot = fopen(filename, "ab");
    
    // Tester si flot ou fournisseur ne sont pas NULL
    if (!fournisseur || !flot) return;
    
    // Set id
    long int new_id = get_last_fournisseur(filename) -> fournisseur_id + 1;
    fournisseur -> fournisseur_id = new_id;
    
    // Sauvegarder la fournisseur
    fwrite(fournisseur, sizeof(Fournisseur), 1, flot);
    
    // Fermer le fichier
    fclose(flot);
    
}

Fournisseur* get_last_fournisseur(char* filename) {
    
    // Ouvrir le fichier
    FILE* flot = fopen(filename, "rb");
    
    // Tester si flot ne sont pas NULL
    if (!flot) return NULL;
    
    // Pointer sur le dernier fournisseur dans le fichier
    fseek(flot, -sizeof(Fournisseur), SEEK_END);
    
    // Lire la derniere fournisseur
    Fournisseur* fournisseur = (Fournisseur*)malloc(sizeof(Fournisseur));
    fread(fournisseur, sizeof(Fournisseur), 1, flot);
    
    return fournisseur;
    
}

FournisseursLinkedList* get_fournisseurs(char* filename) {
    
    // Ouvrir le fichier
    FILE* flot = fopen(filename, "rb");
    
    // Tester si flot n'est pas NULL
    if (!flot) return NULL;
    
    // Declarer une liste chainées de fournisseurs
    FournisseursLinkedList* fournisseurs = NULL;
    
    // Lire les données du fichier
    do {
        Fournisseur* fournisseur = (Fournisseur*)malloc(sizeof(Fournisseur));
        if (!fread(fournisseur, sizeof(Fournisseur), 1, flot)) break;
        linked_list_fournisseurs_add(&fournisseurs, fournisseur);
    } while (1);
    
    // Fermer le fichier
    fclose(flot);
    
    // Return
    return fournisseurs;
    
}

Fournisseur* get_fournisseur_from_id(char* filename, long int fournisseur_id) {
    
    // Ouvrir le fichier
    FILE* flot = fopen(filename, "rb");
    
    // Tester si flot n'est pas NULL
    if (!flot) return NULL;
    
    do {
        Fournisseur* fournisseur = (Fournisseur*)malloc(sizeof(Fournisseur));
        if (!fread(fournisseur, sizeof(Fournisseur), 1, flot)) break;
        if (fournisseur -> fournisseur_id == fournisseur_id) return fournisseur;
    } while (1);
    
    return NULL;
    
}