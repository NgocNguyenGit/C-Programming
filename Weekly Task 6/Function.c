//
//  Function.c
//  Weekly Task 6
//
//  Created by Nguyen Le Khanh Ngoc on 15/11/2020.
//  Copyright © 2020 Nguyen Le Khanh Ngoc. All rights reserved.
//

#include "Function.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void setInt (int *number, char text[]){
    printf("Enter %s: ",text);
    scanf("%d",number);
}

void setText (char *str[255], char text[]){
    printf("Enter %s: ",text);
    scanf("%s",str);
}
void setDouble (double *array[255], char text[]){
    printf("Enter %s: ",text);
    for (int i = 0; i < 5; ++i){
        scanf("%f",array);
    }
}
/*1.
User is asked to give the amount of values.
Then a new array is created.
It is filled with randon numbers.
10 first are then printed*/
void arrayRandom (int number){
    //Check limit validity
    if (number < 10) {
        printf("Please input the limit again.\n");
    } else {
        //Generate random numbers and print array
        int array[10];
        printf("Array contains %d values from 1-100.\n",number);
        puts("Print 10 first values:");
        for (int i = 0; i < 10; ++i){
            array[i] = rand() % 100 +1;
            printf("%d  ",array[i]);
        }
    }
}
/*2.
Function converts the text to morse code characters.*/
void morse (char text[]){
    int size = strlen(text);
    for (int i = 0; i < size; ++i){
        if (text[i] == 'a' || text[i] == 'A'){
            printf("• – ");
        } else if (text[i] == 'b' || text[i] == 'B'){
            printf("– • • • ");
        } else if (text[i] == 'c' || text[i] == 'C'){
            printf("– • – • ");
        } else if (text[i] == 'd' || text[i] == 'D'){
            printf("– • • ");
        } else if (text[i] == 'e' || text[i] == 'E'){
            printf("• ");
        } else if (text[i] == 'f' || text[i] == 'F'){
            printf("• • – • ");
        } else if (text[i] == 'g' || text[i] == 'G'){
            printf("– – • ");
        } else if (text[i] == 'h' || text[i] == 'H'){
            printf("• • • • ");
        } else if (text[i] == 'i' || text[i] == 'I'){
            printf("• • ");
        } else if (text[i] == 'j' || text[i] == 'J'){
            printf("• – – ");
        } else if (text[i] == 'k' || text[i] == 'K'){
            printf("– • – ");
        } else if (text[i] == 'l' || text[i] == 'L'){
            printf("• – • • ");
        } else if (text[i] == 'm' || text[i] == 'M'){
            printf("– – ");
        } else if (text[i] == 'n' || text[i] == 'N'){
            printf("– • ");
        } else if (text[i] == 'o' || text[i] == 'O'){
            printf("– – – ");
        } else if (text[i] == 'p' || text[i] == 'P'){
            printf("• – – • ");
        } else if (text[i] == 'q' || text[i] == 'Q'){
            printf("– – • – ");
        } else if (text[i] == 'r' || text[i] == 'R'){
            printf("• – • ");
        } else if (text[i] == 's' || text[i] == 'S'){
            printf("• • • ");
        } else if (text[i] == 't' || text[i] == 'T'){
            printf("– ");
        } else if (text[i] == 'u' || text[i] == 'U'){
            printf("• • – ");
        } else if (text[i] == 'v' || text[i] == 'V'){
            printf("• • • – ");
        } else if (text[i] == 'w' || text[i] == 'W'){
            printf("• – – ");
        } else if (text[i] == 'x' || text[i] == 'X'){
            printf("– • • – ");
        } else if (text[i] == 'y' || text[i] == 'Y'){
            printf("– • – – ");
        } else if (text[i] == 'z' || text[i] == 'Z'){
            printf("– – • • ");
        }
    }
    puts("");
}
/*3.
Function checks if the post code includes exactly 5 numbers*/
void checkPostcode (int number){
    int count = 0;
    if (number <= 0){
        printf("Postcode must be a positive number and greater than 0.\n");
    }
    
    while (number != 0){
        number = number / 10;
        ++count;
    }
    
    if (count == 5){
        printf("The post code includes exactly 5 numbers.\n");
    } else {
        printf("The post code doesn't include exactly 5 numbers.\n");
    }
}
//Program checks if an email-address contains '@' character.*/
void checkEmail (char text[]){
    unsigned long size = strlen(text);
    int check = 0;
    
    for (int i = 0; i < size; ++i){
        if (text[i] == '@'){
            ++check;
        }
    }
    
    if (check != 0){
        printf("This email-address contains '@' character.\n");
    } else {
        printf("This email-address doesn't contain '@' character.\n");
    }
}
/*5.
Program prints out the country code (top level domain name) of an url.*/
void countryCode (char text[]){
    char* lastToken = strrchr(text, '.');
    if (lastToken != NULL) {
        printf("Country code: %s\n", lastToken+1);
    }
}
/*6.
Program prints out the protocol of an url.*/
void protocol (char text[]){
    char* firstToken = strtok(text, ":");
    printf("The protocol of this url: %s\n", firstToken);
}
/*7.
Program tells if a string is a palindrome.*/
void palindrome (char text[]){
    unsigned long firstIndex = 0;
    unsigned long lastIndex = strlen(text) - 1;

    while (lastIndex > firstIndex) {
      if (text[firstIndex++] != text[lastIndex--]) {
          printf("%s isn't a palindrome.\n", text);
          break;
      } else {
          printf("%s is a palindrome.\n", text);
          break;
      }
    }
}
/*9.
String variable contains 5 measures separated by commas. Your program calculates the average
of those values. (E.g. "2, 3.5, 1, 5.8, 10") is given.)*/
void averageMeasure (char text[]){
    int count = 0;
    int sum = 0;
    double average;
    printf("Original string splits into numbers: ");
    char *pt;
    pt = strtok (text,",");
    while (pt != NULL) {
        int a = atoi(pt);
        printf("%d ", a);
        sum+=a;
        pt = strtok (NULL, ",");
        ++count;
    }
    average = sum / count;
    printf("\nSum: %d.\n",sum);
    printf("Average: %.2f.\n",average);
}
/*10.
Your program checks if given ISBN is correct.*/
void isbnCheck (char text[]){
    if(strlen(text)!=10)
    {   /*checking if the input number is 10-digit or not. */
      printf("It is not a 10-digit number.");
    }
    int x = atoi(text);// converting string to int
    
    int k = 10,s = 0;
    while(x > 0)
    {   //extracting digits
      int b = x % 10;
      x = x/10;
      s = s + b * k;
      k--;
    }
    if(s%11 == 0) // checking validity.
    {
      printf("It is a valid ISBN!\n");
    }
    else
    {
      printf("It is invalid ISBN!\n");
    }
}
