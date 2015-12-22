//
//  main.c
//  PharmApp
//
//  Created by Braksa - Boutaib on 12/17/15.
//  Copyright © 2015 NSApps. All rights reserved.
//

#include <stdio.h>
#include <time.h>

int main(int argc, const char * argv[]) {
    
    time_t now = time(NULL);
    printf("Time is %s", ctime(&now));
    
    return 0;
}