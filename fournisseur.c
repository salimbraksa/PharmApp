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

// Implémentation des fonctions
Fournisseur* creer_fournisseur(long int num, char* nom, char* email, char* telephone) {
   
   // Alloc new Fournisseur
   Fournisseur* fournisseur = (Fournisseur* )malloc(sizeof(Fournisseur));
   
   // Set it's properties
   fournisseur -> id = num;
   strcpy(fournisseur -> nom, nom);
   strcpy(fournisseur -> email, email);
   strcpy(fournisseur -> telephone, telephone);
   
   // Return
   return fournisseur;
   
}