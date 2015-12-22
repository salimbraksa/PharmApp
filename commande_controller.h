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
<<<<<<< HEAD
void sauvegarder_commande(const char * nomFichier ,Commande* commande);
=======
void sauvegarder_commande(char* filename, Commande* commande);
>>>>>>> e6dd1c523a8906b56113dbafa6715eaf272e0572


#endif /* commande_controller_h */
