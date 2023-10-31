#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h> 
#include "safeinput.h"


// 1. STRUCT
// 2. Arrayer med tex ints
// 3. Arrayer med char - dvs "string"
// 4. Arrayer med structar
// 5. Dynamiska arrayer

typedef struct {
    int birthYear;
    int monthlySalary;
    char namn[100];
} Employee;


void changeSalary(Employee *employee){ //address -> 1000
    printf("Now %s has %d as montly salary\nEnter a new salary:",
        employee->namn, employee->monthlySalary);
    int temp;
    scanf(" %d",&temp);
    employee->monthlySalary = temp;
    //scanf(" %d",&employee.monthlySalary);
}

void changeInt(int *i){
    *i = 12;
}


void enterEmployee(Employee *employee){ //address -> 1000
    GetInput("Enter name:", employee->namn,100);
    GetInputInt("Enter salary:", &employee->monthlySalary);
    GetInputInt("Enter birthyear:", &employee->birthYear);
}



void structsDemo(){

    // int massaTal[3];
    // massaTal[0] = 12;
    // massaTal[1] = 1;
    // massaTal[2] = 33;
    char namn[100];
    namn[0] = 'H';
    namn[1] = 'e';
    namn[2] = 'j';
    namn[3] = 0;

    strcpy(namn, "Hej");
    printf("%d\n",namn);
    int i;
    Employee allaEmployees[3];

    Employee *empPointer = malloc(sizeof(Employee));
    enterEmployee(empPointer);

    free(empPointer);
    

    for(int i = 0;i < 3; i++){
        enterEmployee(&allaEmployees[i]);
        // Employee e;
        // enterEmployee(&e);
        // allaEmployees[i] = e;
    }

    // string s = "hej";
    // s += " hopp";

    // ArrayList a
    // a.add()

    Employee employee;
    employee.birthYear = 1972;
    employee.monthlySalary = 20000;
    //employee.namn = "Stefan";
    strcpy(employee.namn, "Stefan");
    changeSalary(&employee);
    printf("%s earns %d\n", employee.namn, employee.monthlySalary);

}


/*
stringcompare
strncmp
*/

int main() {
    structsDemo();
    char text[255];
    while(GetInput("Ange namn",text,sizeof(text)) != INPUT_RESULT_OK){
        printf("Ogiltig input...try again");
    }
    printf("Du heter %s\n",text);



//     unsigned  short int shoeSize = 123; // 0-65535
//     // int TAL 0-4miljarder
//     // char TAL 0-255
//     char test1 = 123;
//     test1 = test1 + 2;
//     printf("%d\n", test1);

//     test1 = 65;
//     printf("%c  %d\n", test1, test1);


//     char ch = 'A';
//     char ch = 65;
//     printf("%c %d\n", ch, ch);

//     ch = ch + 1;
//     char realShoeSize = 12;

//     ch = 255;
//     ch = ch + 1; // ch++
//     printf("%c %d\n", (int)ch, ch);

    
//     // int -> 4 bytes
//     //signed int shoeSize = 44; // -2miljader -> +2 miljarder
// //    int shoeSize = 44; // -2miljader -> +2 miljarder
// //    unsigned int showSize3 = 33; // 0 -> 4 miljarder

//     //shoeSize = -100;

//     // // short int -> 2 bytes
//     // short int shoeSize2 = 43; // -32768 -> 32787
//     // long int billGatesMoney = 23112312323312;

//     // shoeSize = 1233123;




//     float test = 123.123;
//     int year = 1972;
//     while( year <= 1980 ){
//         printf("%d\n", year);
//         year++;  
//     }

//     for(int year = 1972;year <= 1980;year++){
//         printf("%d\n", year);
//     }



//     int playMore;
//     do{
//         //SPELET
//         printf("Nu startar spelet\n");
//         printf("Nu slutar spelet\n");

//         printf("Vill du sluta skriv 0 annars 1:");
//         scanf(" %d", &playMore);
//     }while(playMore == 1);


//     while(true){
//         //SPELET
//         printf("Nu startar spelet\n");
//         printf("Nu slutar spelet\n");

//         printf("Vill du sluta skriv 0 annars 1:");
//         int playAgain;
//         scanf(" %d", &playAgain);
//         if(playAgain == 0){
//             break;
//         }
//     }

    
//     int playAgain = 1;
//     while( playAgain == 1){
//         //SPELET
//         printf("Nu startar spelet\n");
//         printf("Nu slutar spelet\n");

//         printf("Vill du sluta skriv 0 annars 1:");
//         scanf(" %d", &playAgain);
//     }



    
//     while(true){
//         printf("Hockey är kul\n");
//     }
//     while(1){
//         printf("Hockey är kul\n");
//     }
//     for(;;){
//         printf("Hockey är kul\n");
//     }





//     // INT på pc = 4 bytes
//     // INT arduino  = 2 bytes
//     // signed int

//     // signed    
//     // -2miljarder -> +2miljarder
//     //unsigned int birthYear = 1972;
//     // unsigned    
//     // 0 -> 4miljarder



//     // short int birthYear2 = 1972;

//     // //int shoeSize = 123123123;





//     // int x = 2;
//     // switch (x){
//     //     case 1: 
//     //         printf("1");
//     //         break;
//     //     case 2: 
//     //         printf("2");
//     //         break;
//     //     default: 
//     //         printf("Annat");
//     //         break;
//     // }


//     // int n = 2;
//     // if(n == 0){
//     //     printf("0");
//     // }
//     // else if(n == 1){
//     //     printf("1");
//     // }
//     // else if(n == 2){
//     //     printf("2");
//     // }
//     // else if(n == 3){
//     //     printf("3");
//     // }
//     // else if(n == 4){
//     //     printf("4");
//     // }
//     // else if(n == 5){
//     //     printf("5");
//     // }else{
//     //     printf("Nåt annat");
//     // }






//     // if(n != 0){
//     //     printf("N var sant");
//     // }else{
//     //     printf("N var falskt");
//     // }
//     // bool isCool = false;
//     // if(isCool){

//     // }
//     // // int i ;
//     // // short int;
//     // // long int;
//     // // long long int;
//     // // float f;
//     // // double d;
//     // // char ch;

//     // //String name;
//     // //int stefansSalary = 25000;
//     // char name[10];
//     // // assdsdadasasddasasds
//     // scanf(" %s", name);
//     // int year;
//     // scanf(" %d", &year);


//     // int birthYear = 13;
//     // birthYear = birthYear + 1;
//     // birthYear += 1;
//     // birthYear++;

//     // birthYear = 12;
//     // // mata in ett namn

//     // // skriva det

//     // int year;
//     // year = 1972; // this is the year
//     // float percent = 0.2f;
//     // printf("Hello you were born %d it seems and you have %.2f percent discount \n", 
//     //     year, percent);
    return 0;
}