//
//  medicament_controller.h
//  PharmApp
//
//  Created by Salim Braksa on 12/25/15.
//  Copyright © 2015 Braksa Salim. All rights reserved.
//

#ifndef medicament_controller_h
#define medicament_controller_h

#include <stdio.h>
#include "medicament.h"
#include "medicaments_linked_list.h"
#include "sb_string.h"

/// Permet de sauvegarder le medicament dans un fichier
void sauvegarder_medicament(char* filename, Medicament* medicament);

/// Permet de retourner le dernier medicament qui peut être NULL
Medicament* get_last_medicament(char* filename);

/// Permet de retourner un medicament à partir son id
Medicament* get_medicament_from_id(char* filename, long int medicament_id);

/// Permet de retourner un medicament à partir son nom
MedicamentsLinkedList* get_medicament_from_name(char* filename, char* name);

#endif /* medicament_controller_h */
