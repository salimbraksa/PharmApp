//
//  main.c
//  PharmApp
//
//  Created by Braksa - Boutaib on 12/17/15.
//  Copyright © 2015 NSApps. All rights reserved.
//

#include <stdio.h>
#include "constants.h"
#include "medicament_controller.h"
#include "commande_controller.h"
#include "vente_controller.h"

int main(int argc, const char * argv[]) {
    
//    int fournis[3] = { 1, 3, 4 };
//    Medicament* medic = create_medicament("Lidocaïne", "2% à 4% (chlorhydrate).", 10.5, 15, 10, 2, 4, fournis);
//    save_medicament(MEDICAMENTS_FILENAME, medic);
    
//    Medicament* medic = get_medicament_from_id(MEDICAMENTS_FILENAME, 1);
//    printf("Medicament Quantité: %d\n", medic -> quantite);

//    int medics[2][2] = { { 1, 20 }, { 3, 9 } };
//    Vente* vente = create_vente(time(NULL), 2, medics);
//    save_vente(VENTES_FILENAME, vente);
    
    LinkedList* ventes = get_ventes_from_date(VENTES_FILENAME, "2016", Month | Day);
    Vente* vente = ventes -> data;
    printf("Vente Id %ld\n", vente -> vente_id);
    
    return 0;
}
