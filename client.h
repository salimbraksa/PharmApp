//
//  client.h
//  PharmApp
//
//  Created by Salim Braksa on 12/17/15.
//  Copyright © 2015 Braksa Salim. All rights reserved.
//

#ifndef client_h
#define client_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/// Modèle Client
typedef struct _client Client;

/// Permet de créer un nouveau client
Client* creer_client(long int num, char* nom, char* telephone, char* cin);

#endif /* client_h */
