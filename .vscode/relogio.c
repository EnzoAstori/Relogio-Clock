#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main(void){
    
    printf("Hora Local\n");
    
    while (1) {
        
     time_t Relogio=time(NULL);

     struct tm *localTime=localtime(&Relogio);

        printf("%02d:%02d:%02d\r",localTime->tm_hour, localTime->tm_min, localTime->tm_sec);

        sleep(1);
    }

}