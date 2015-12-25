//
//  vente.h
//  PharmApp
//
//  Created by Salim Braksa on 12/25/15.
//  Copyright © 2015 Braksa Salim. All rights reserved.
//

#ifndef vente_h
#define vente_h

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define VENTE_MAX_MEDICAMENTS_IDS 10

/// Définition de la structure Vente
typedef struct {

    long int vente_id;
    time_t date_time;

    int nombre_medicaments;
    int medicaments_ids[VENTE_MAX_MEDICAMENTS_IDS];

} Vente;

typedef struct {

    int annee  ;
    Vente annual_sales ;

}annualSales ;

/// Permet de créer une nouvelle Vente
Vente* creer_vente(time_t date_time,
                         int nombre_medicamants,
                         int medicaments_ids[VENTE_MAX_MEDICAMENTS_IDS]);

/// permet de creer et renvoyer la liste des vents par annee
annualSales * Create_annualSales(Vente sales , int annee) ;

#endif /* vente_h */
