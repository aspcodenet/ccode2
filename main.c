#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h> 
#include <ctype.h>
#include "safeinput.h"


/*

1. Strängar (smärta)

2. Efter lunch
Labbar Strängar + 

Alla som inte har fått till GCC:
https://github.com/brechtsanders/winlibs_mingw/releases/download/13.2.0mcf-16.0.6-11.0.1-ucrt-r2/winlibs-x86_64-mcf-seh-gcc-13.2.0-mingw-w64ucrt-11.0.1-r2.zip
*/


int strCompareCaseInsensitive(char *str1, const char *str2){
    //loopar igenom str1 -> uppercase på alla 
    for(int i = 0; i < strlen(str1);i++){
        str1[i] = toupper(str1[i]);
    }
    // strcmp
    return strcmp(str1,str2);
}

typedef struct{
    char namn[255];
    int jerseyNumber;
    char team[255];
} PLAYER;

// CSV

// 1. strtok

// 2. arrayer/structar malloc/realloc
//       REGISTER "lista" med hockeyspelare, skapa ny/ändra/ta bort

// 3. genomgång/start inlämningsuppgift


void test(){
    int a = 12;
    PLAYER *p1 = (PLAYER *) malloc(sizeof(PLAYER));
    // later
    free(p1);
}

int main(){
    test();
    //SAKER SOM HAR MALLOKERATS/REALLOKERATS
    // MÅSTE frigöras med free()
    // ha en List<PLAYER> 
    // listan.add
    int count = 0;
    PLAYER *lista;
    while(1){
        printf("1. Skapa ny spelare\n");
        printf("2. Change spelare\n");
        printf("3. Lista alla\n");
        printf("8. Exit\n");
        int sel;
        GetInputInt("Ange val:",&sel);
        if(sel == 1){
            if(count == 0){
                lista = (PLAYER *)malloc(sizeof(PLAYER));
                count++;
            }else{
                //
                count++;
                lista = (PLAYER *)realloc(lista, sizeof(PLAYER) * count);
            }
            char namn[256];
            GetInput("Ange namn",namn,256);
            strcpy(lista[count-1].namn,namn);
            //GetInput("Ange namn",lista[count-1].namn,256);
        }else if(sel == 3){
            for(int i = 0; i < count;i++){
                printf("%s\n", lista[i].namn);
            }
        }else if(sel == 2){
            printf("Change player\n");
            for(int i = 0; i < count;i++){
                printf("%d. %s\n", i+1, lista[i].namn);
            }
            int playerSelection;
            GetInputInt("Select player number:",&playerSelection);
            printf("You wanna change name:%s", lista[playerSelection-1].namn);
            GetInput("Nytt namn:",lista[playerSelection-1].namn,256);
        }


    }
    char stringen[255];
    strcpy(stringen, "Stefan,Holmberg,51,Nacka");


    char *token = strtok(stringen, ",");
    while( token != NULL ) {
        printf( " %s\n", token );
        token = strtok(NULL, ",");
    }


    char email[30];
    strcpy(email, "hejsan@hoppsan.se");
    // '@'finns det ett sånt tecken
    // @hejsan.se, hejsan.aaaaaa.se@

    char *substring = strchr(email, '@'); // 6
    printf("%s", substring);

    int position = substring - email;
    printf("Positionen var %d\n", position);

//     char exit[30];
//     while(1){
//         printf("The game\n");
//         //fråga vill du spela igen Ja
//         GetInput("Vill du spela igen",exit,30);
//         if(strcmp(exit, "Ja") == 0){
//             continue;
//         }
//         break;
//         // if(!strcmp(exit, "Ja")){
//         //     continue;
//         // }

//         // annars inte spela igen
//         if(strCompareCaseInsensitive(exit, "JA")){
//             break;
//         }
//         // int compareValue = strcmp(exit, "Ja");
//         // if(compareValue != 0){
//         //     break;
//         // }

//         // int compareValue = strcmp(exit, "Ja");
//         // if(compareValue != 0){
//         //     break;
//         // }

//     }

//     // while(1){
//     //     printf("The game\n");
//     //     //fråga vill du spela igen Ja
//     //     GetInput("Vill du spela igen",exit,30);
//     //     // annars inte spela igen
//     //     if(exit == "Ja"){
//     //         break;
//     //     }

//     // }



//     //Vad är en sträng
//     // vi tilldelar en sträng - buffer och pekare 
//     char namn[30];
//     int i = 12;
//     // int ages[12];
//     // ages[0] = 12;
//     // ages[1] = 12;
// //    namn = "Stefan";
//     // namn[0] = 'S';
//     // namn[1] = 't';
//     // namn[2] = 'e';
//     // namn[3] = 'f';
//     // namn[4] = 'a';
//     // namn[5] = 'n';
//     // namn[6] = 0;
//     strcpy(namn, "Stefan Holmberg"); //Kopierar in till  början
//     printf("%s\n", namn);
//     //namn = "Stefan";
//     int i = 12;
//     char *team = "Sweden";
//     printf("%s\n", team);

//     //namn = namn + team;
//     //vi slår ihop två strängar
//     strcat(namn,","); // kopierar in allt till slutet
//     strcat(namn,team); // kopierar in allt till slutet
//     printf("%s\n", namn);
//     //printf("%s,%s\n", namn,team);

//     // vi loopar igenom och räknar hur många 'a'
//     // loopa igenom en string = tills den tar slut (\0)
//     int length = strlen(namn); // inte hur mycket som är paxat utan hur LÅNG den är
//     int antalA = 0;
//     for(int i = 0; i < length; i++){
//         char thisChar = namn[i];
//         if(thisChar == 'a'){
//             antalA++;
//         }
//         //printf("%c", thisChar);
//     }
//     printf("Det var %d antal 'a':nn", antalA );


//     int antalA = 0;
//     for(int i = 0; i < strlen(namn); i++){
//         char thisChar = namn[i];
//         if(thisChar == 'a'){
//             antalA++;
//         }
//         //printf("%c", thisChar);
//     }

//     int antalStora = 0;
//     for(int i = 0; i <strlen(namn);i++){
//         if(isupper(namn[i])){
//              antalStora++;
//         }
//         // bool isUpperCase = isupper(namn[i]);
//         // if(isUpperCase == true){
//         //     antalStora++;
//         // }
//     }





//     //vi loopar igenom och räknar stora bokstäver
//     // vi jämför strängar om playAgain == "Yes" ?? 
//     //vi ändrar en sträng
//     //vi ändrar en sträng så det blir uppercase/lowercase
//     //vi letar efter ett tecken i en sträng
//     //vi letar efter en substräng i en sträng
//     //TISDAG:  vi splittar en sträng hej;hopp;whatever

    return 0;
}