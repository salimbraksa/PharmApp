//
//  main.c
//  PharmApp
//
//  Created by Salim Braksa on 12/17/15.
//  Copyright © 2015 Braksa Salim. All rights reserved.
//

#include <stdio.h>
#include "fournisseur.h"
#include "client.h"

int main(int argc, const char * argv[]) {
    
    Client* client = creer_client("Salim", "0635294145", "BK313998");
    printf("CIN: %s\n", client->cin);
    
    return 0;
}
