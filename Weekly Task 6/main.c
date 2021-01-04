//
//  main.c
//  Weekly Task 6
//
//  Created by Nguyen Le Khanh Ngoc on 15/11/2020.
//  Copyright © 2020 Nguyen Le Khanh Ngoc. All rights reserved.
//
#include <stdio.h>
#include <string.h>
#include "Function.h"
#define task10 //*********************************** <<<<<<<<< INSERT TASK NUMBER TO CHECK HERE <<<<<<<<<
int main(int argc, const char * argv[]) {
#ifdef task1
    //initialise phase
    int valueInt;
    //function set
    setInt(&valueInt, "the amount of values");
    //task 1
    arrayRandom(valueInt);
#endif
    
#ifdef task2
    //initialise phase
    char valueText[255];
    //function set
    setText(&valueText, "text");
    //task 2
    morse(valueText);
#endif
    
#ifdef task3
    //initialise phase
    int valueInt;
    //function set
    setInt(&valueInt, "the postcode");
    //task 3
    checkPostcode(valueInt);
#endif
    
#ifdef task4
    //initialise phase
    char valueText[255];
    //function set
    setText(&valueText, "an email-address");
    //task 4
    checkEmail(valueText);
#endif
    
#ifdef task5
    //initialise phase
    char valueText[255];
    //function set
    setText(&valueText, "an url");
    //task 5
    countryCode(valueText);
#endif
    
#ifdef task6
    //initialise phase
    char valueText[255];
    //function set
    setText(&valueText, "an url");
    //task 6
    protocol(valueText);
#endif
    
#ifdef task7
    //initialise phase
    char valueText[255];
    //function set
    setText(&valueText, "a string");
    //task 7
    palindrome(valueText);
#endif
    
#ifdef task9
    //initialise phase
    char valueText[255];
    //function set
    setText(&valueText, "a string contains 5 integer measures separated by comma");
    //task 9
    averageMeasure(valueText);
#endif
    
#ifdef task10
    //initialise phase
    char valueText[255];
    //function set
    setText(&valueText, "ISBN number");
    //task10
    isbnCheck(valueText);
#endif
    return 0;
}
