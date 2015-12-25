//
//  medicament_controller.c
//  PharmApp
//
//  Created by Salim Braksa on 12/25/15.
//  Copyright © 2015 Braksa Salim. All rights reserved.
//

#include "medicament_controller.h"

void sauvegarder_medicament(char* filename, Medicament* medicament) {
    
    // Ouvrir le fichier
    FILE* flot = fopen(filename, "ab");
    
    // Tester si flot ou commande ne sont pas NULL
    if (!medicament || !flot) return;
    
    // Set id
    long int new_id = get_last_medicament(filename) -> medicament_id + 1;
    medicament -> medicament_id = new_id;
    
    // Sauvegarder la commande
    fwrite(medicament, sizeof(Medicament), 1, flot);
    
    // Fermer le fichier
    fclose(flot);
    
}

Medicament* get_last_medicament(char* filename) {
    
    // Ouvrir le fichier
    FILE* flot = fopen(filename, "rb");
    
    // Tester si flot ne sont pas NULL
    if (!flot) return NULL;
    
    // Pointer sur le dernier medicament dans le fichier
    fseek(flot, -sizeof(Medicament), SEEK_END);
    
    // Lire la derniere commande
    Medicament* medicament = (Medicament*)malloc(sizeof(Medicament));
    fread(medicament, sizeof(Medicament), 1, flot);
    
    return medicament;
    
}

Medicament* get_medicament_from_id(char* filename, long int medicament_id) {
    
    // Ouvrir le fichier
    FILE* flot = fopen(filename, "rb");
    
    // Tester si flot n'est pas NULL
    if (!flot) return NULL;
    
    do {
        Medicament* medicament = (Medicament*)malloc(sizeof(Medicament));
        if (!fread(medicament, sizeof(Medicament), 1, flot)) break;
        if (medicament -> medicament_id == medicament_id) return medicament;
    } while (1);
    
    return NULL;
    
}

MedicamentsLinkedList* get_medicament_from_name(char* filename, char* name) {
    
    // Ouvrir le fichier
    FILE* flot = fopen(filename, "rb");
    
    // Tester si flot n'est pas NULL
    if (!flot) return NULL;
    
    // Declarer une liste chainées de medicaments
    MedicamentsLinkedList* medicaments = NULL;
    
    // Lower the name
    char* lower_name = lower_string(name);
    
    do {
        Medicament* medicament = (Medicament*)malloc(sizeof(Medicament));
        if (!fread(medicament, sizeof(Medicament), 1, flot)) break;
        if (strcmp(lower_string(medicament->nom), lower_name) == 0) linked_list_medicaments_add(&medicaments, medicament);
    } while (1);
    
    return medicaments;
    
}