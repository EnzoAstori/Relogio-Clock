#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main(void){
    while(1){

        time_t Relogio;
        struct tm *info;
        time(&Relogio);
        info=localtime(&Relogio);

        printf("Hora local:%02d:%02d:%02d\r",info->tm_hour, info->tm_min, info->tm_sec);

        fflush(stdout); 

        sleep(1);
    }
}
