#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <pthread.h>
#include <semaphore.h>
#include <time.h>
#include <stdbool.h>
#include <errno.h>

static int n;
static int c;

void *student(void *arg){

}

int main(int argc, char* argv[]){ // tutor N C

    if (argc != 3) {
        printf("bad # of arguments. try three! ./tutor N C\n");
        exit(1);
    }

    if ((n = atoi(argv[1])) < 1 || (c = atoi(argv[2])) < 1){ //assignments in conditionals - oh my!
        printf("bad args! N and C should both be ints\n");
        exit(1);
    }

    time_t start;

    time(&start);

    
}