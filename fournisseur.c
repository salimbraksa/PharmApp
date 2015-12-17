//
//  fournisseur.c
//  PharmApp
//
//  Created by Salim Braksa on 12/17/15.
//  Copyright © 2015 Braksa Salim. All rights reserved.
//

#include "fournisseur.h"

// Définition de la structure Fournisser
typedef struct _fournisseur {
   
   long int id;
   char* nom;
   char* email;
   char* telephone;
   
} Fournisseur;