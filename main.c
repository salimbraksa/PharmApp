//
//  main.c
//  PharmApp
//
//  Created by Braksa - Boutaib on 12/17/15.
//  Copyright © 2015 NSApps. All rights reserved.
//

#include <stdio.h>
#include "linked_list.h"
#include "client.h"

int main(int argc, const char * argv[]) {
    
    // Experementing Generic Linked List
    Client* client = creer_client("Salim", "0635294145", "BBK32452");
    Client* another = creer_client("Issam", "00", "BB");
    LinkedList* list = NULL;
    
    linked_list_append(&list, client);
    linked_list_append(&list, another);
    
    Client* tst_client = (Client*)list -> data;
    
    printf("Name %s\n", tst_client->telephone);
    
    return 0;
}