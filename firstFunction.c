#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

char* selectRandomLine(char* path ){
    //paises
    FILE* file = fopen("paises.txt", "r");
    char currentLine[10];

    while ( fscanf( file, "%s", currentLine ) != EOF )
    {
        
        printf("line: %s\n", currentLine );

    }
    fclose(file);

    //Escoger random
    srand(time(NULL));
    int myRand = rand() %21;
    printf("random= %d\n", myRand);

    }

int main(){

}