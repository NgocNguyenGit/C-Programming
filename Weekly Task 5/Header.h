//
//  Header.h
//  Weekly Task 5
//
//  Created by Nguyen Le Khanh Ngoc on 03/11/2020.
//  Copyright © 2020 Nguyen Le Khanh Ngoc. All rights reserved.
//

#ifndef Header_h
#define Header_h
//functions get input from user
void getInt (int *num, char order[]);
void getFloat (float *num, char order[]);
//1. Calculates the sum of 2 integers and prints out the result.
void printSum (int num_1, int num_2);
//2. Returns the sum of 2 integers.
int sumInt (int num_1, int num_2);
//3. Returns the average of 2 integers
float average_2 (int sum);
//4. Returns the average of 4 floating point values.
float average_4 (float num_1, float num_2, float num_3, float num_4);
//6. Returns the factorial.
int factorial (int num);
//7. Returns the biggest of 2 integers.
int biggest_2 (int num_1, int num_2);
//8. Returns the biggest of 3 integers.
int biggest_3 (int num_1, int num_2, int num_3);
//10. Converts inches to centimeters.
float in_cm (float num);
//11. Returns the BMI.
float bmi(float weight, float height);
//12. Function returns the biggest of 5 integers.
int biggest_5 (int array[], int size);
//15. Program with functions calculates amount of combinations:
//n!/(k!*(n-k)!) whenever k <= n, and which is 0 when k>n
int combination (int n, int k);
//16. Function prints out a lotto row.
void lottoRow (int choice, int array[], int limit);
//17. Program with functions calculates the standard deviation.
float standard_deviation (float array[], int size);
//18. Functions calculate: - sum of an array
//                         - min and max
void sum_min_max (float array[], int size);
//19. Function searches for a value from an array.
void search (float array[], int size);
//20. Returns the sum of an array.
float sum_array (float array[], int size);
//21. Function multiplies every value in an array by 2.
void mult_array (float array[], int size, float number);
//22.
//A character is passed to a function: funtion returns True if character is a vowel, otherwise False (0).
//(Five of the 26 alphabet letters are vowels: A, E, I, O, and U. )
bool vowel (char text);
//23. A whole number and an array (size is 5, contains integers) are passed to
//a function that checks how many times passed value exists in that passed array
//and returns the amount.
int num_arr (int array[5], int number);
//24. Your program defines and fills an array of 10 integers with random numbers that are between 1-5.
//That array is passed to a method that counts the amounts of different values and prints then out.
void count (int array[10]);

#endif /* Header_h */
