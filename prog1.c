#include <stdio.h>

#include "mythreads.h"

int balance = 0;

void* worker(void* arg) {
    balance++; 
    return NULL;
}

int main(int argc, char *argv[]) {
    pthread_t p;
    Pthread_create(&p, NULL, worker, NULL);
    balance++; 
    Pthread_join(p, NULL);
    return 0;
}
