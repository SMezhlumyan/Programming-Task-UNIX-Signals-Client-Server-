
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <string.h>
#include <sys/types.h>

void Pars_To_BIT(int id, char ch) {
    for (int i = 7; i >= 0; i--) {
        if (ch & (1 << i)) {
            kill(id, SIGUSR2);
        } else {
            kill(id, SIGUSR1);
        }
        usleep(100);
    }
}


int main(int argc, char* argv[]){
    if (argc!=3)
    {
        printf("INVALID INPUT\n");
        return 0;
    }
    
    char* str=argv[1];
    
    int id=atoi(argv[2]);

    for(int i=0;str[i]!='\0';i++){
        Pars_To_BIT(id,str[i]);       
    }
    return 0;
}