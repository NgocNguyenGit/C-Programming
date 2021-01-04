//
//  Function.h
//  Weekly Task 6
//
//  Created by Nguyen Le Khanh Ngoc on 15/11/2020.
//  Copyright © 2020 Nguyen Le Khanh Ngoc. All rights reserved.
//

#ifndef Function_h
#define Function_h

#include <stdio.h>
void setInt (int *number, char text[]);
void setText (char *str[255], char text[]);
void setDouble (double *array[255], char text[]);
/*1.
User is asked to give the amount of values.
Then a new array is created.
It is filled with randon numbers.
10 first are then printed*/
void arrayRandom (int number);
/*2.
Function converts the text to morse code characters.*/
void morse (char text[]);
/*3.
Function checks if the post code includes exactly 5 numbers*/
void checkPostcode (int number);
/*4.
Program checks if an email-address contains '@' character.*/
void checkEmail (char text[]);
/*5.
Program prints out the country code (top level domain name) of an url.*/
void countryCode (char text[]);
/*6.
Program prints out the protocol of an url.*/
void protocol (char text[]);
/*7.
Program tells if a string is a palindrome.*/
void palindrome (char text[]);
/*9.
String variable contains 5 measures separated by commas. Your program calculates the average
of those values. (E.g. "2, 3.5, 1, 5.8, 10") is given.)*/
void averageMeasure (char text[]);
/*10.
Your program checks if given ISBN is correct.*/
void isbnCheck (char text[]);
#endif /* Function_h */
