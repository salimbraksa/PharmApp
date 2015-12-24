//
//  client_controller.c
//  PharmApp
//
//  Created by Salim Braksa on 12/24/15.
//  Copyright © 2015 Braksa Salim. All rights reserved.
//

#include "client_controller.h"

void sauvegarder_client(char* filename, Client* client) {
    
    // Ouvrir le fichier
    FILE* flot = fopen(filename, "ab");
    
    // Tester si flot ou commande ne sont pas NULL
    if (!client || !flot) return;
    
    // Set id
    long int new_id = get_last_client(filename) -> client_id + 1;
    client -> client_id = new_id;
    
    // Sauvegarder la commande
    fwrite(client, sizeof(Client), 1, flot);
    
    // Fermer le fichier
    fclose(flot);
    
}

Client* get_last_client(char* filename) {
    
    // Ouvrir le fichier
    FILE* flot = fopen(filename, "rb");
    
    // Tester si flot ne sont pas NULL
    if (!flot) return NULL;
    
    // Pointer sur la derniere commande dans le fichier
    fseek(flot, -sizeof(Client), SEEK_END);
    
    // Lire la derniere commande
    Client* client = (Client*)malloc(sizeof(Client));
    fread(client, sizeof(Client), 1, flot);
    
    return client;
    
}

ClientsLinkedList* get_clients(char* filename) {
    
    // Ouvrir le fichier
    FILE* flot = fopen(filename, "rb");
    
    // Tester si flot n'est pas NULL
    if (!flot) return NULL;
    
    // Declarer un tableau de commandes
    ClientsLinkedList* clients = NULL;
    
    // Lire les données du fichier
    do {
        Client* client = (Client*)malloc(sizeof(Client));
        if (!fread(client, sizeof(Client), 1, flot)) break;
        linked_list_clients_add(&clients, client);
    } while (1);
    
    // Fermer le fichier
    fclose(flot);
    
    // Return
    return clients;
    
}