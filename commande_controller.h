//
//  commande_controller.h
//  PharmApp
//
//  Created by Salim Braksa on 12/22/15.
//  Copyright © 2015 Braksa Salim. All rights reserved.
//

#ifndef commande_controller_h
#define commande_controller_h

#include <stdio.h>
#include "medicament.h"
#include "commande.h"

/// Permet d'ajouter un médicament à une commande
void commande_ajouter_medicament(Commande* commande, Medicament* medicament);

/// Permet de sauvegarder la commande dans un fichie
void sauvegarder_Commande(char* filename, Commande* commande);

/// Permet de  charger  la commande d'un fichier
void Charger_commande(char* filename);


#endif /* commande_controller_h */
