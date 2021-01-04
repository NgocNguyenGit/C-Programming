//
//  main.c
//  Weekly Task 5
//
//  Created by Nguyen Le Khanh Ngoc on 26/10/2020.
//  Copyright © 2020 Nguyen Le Khanh Ngoc. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <windows.h>

//initialise function phase
#include "Header.h"

int main(int argc, const char * argv[]) {
    //1. Calculates the sum of 2 integers and prints out the result.
    puts("1. Calculates the sum of 2 integers and prints out the result.");
    int num_1, num_2;
    getInt(&num_1, " 1");
    getInt(&num_2, " 2");
    printSum(num_1, num_2);
    puts("");

    //2. Returns the sum of 2 integers.
    puts("2. Returns the sum of 2 integers.");
    getInt(&num_1, " 1");
    getInt(&num_2, " 2");
    int sum = sumInt(num_1, num_2);
    printf("Function returns the sum of %d and %d is %d.\n",num_1,num_2,sum);
    puts("");

    //3. Returns the average of 2 integers
    puts("3. Returns the average of 2 integers.");
    getInt(&num_1, " 1");
    getInt(&num_2, " 2");
    sum = sumInt(num_1, num_2);
    float avg_2 = average_2(sum);
    printf("Function returns the average of %d and %d is %.2f.\n",num_1,num_2,avg_2);
    puts("");

    //4. Returns the average of 4 floating point values.
    puts("4. Returns the average of 4 floating point values.");
    float float_1, float_2, float_3, float_4;
    getFloat(&float_1, " 1");
    getFloat(&float_2, " 2");
    getFloat(&float_3, " 3");
    getFloat(&float_4, " 4");
    float avg_4 = average_4(float_1, float_2, float_3, float_4);
    printf("Function returns the average of %.2f, %.2f, %.2f and %.2f is %.2f.\n",float_1,float_2,float_3,float_4,avg_4);
    puts("");
    
    //6. Returns the factorial.
    puts("6. Returns the factorial.");
    getInt(&num_1, "");
    //validate input and ask for enter again once
    if(num_1 < 0){
        printf("It's not a positive integer.\n");
        getInt(&num_1, "");
    }
    int factor = factorial(num_1);
    printf("Function returns the factorial of %d is %d.\n",num_1,factor);
    puts("");
    
    //7. Returns the biggest of 2 integers.
    puts("7. Returns the biggest of 2 integers.");
    getInt(&num_1, " 1");
    getInt(&num_2, " 2");
    int biggest = biggest_2(num_1, num_2);
    printf("Function returns the biggest of %d and %d is %d.\n",num_1,num_2,biggest);
    puts("");
    
    //8. Returns the biggest of 3 integers.
    puts("8. Returns the biggest of 3 integers.");
    getInt(&num_1, " 1");
    getInt(&num_2, " 2");
    int num_3;
    getInt(&num_3, " 3");
    biggest = biggest_3(num_1, num_2,num_3);
    printf("Function returns the biggest of %d, %d and %d is %d.\n",num_1,num_2,num_3,biggest);
    puts("");
    
    //10. Converts inches to centimeters.
    puts("10. Converts inches to centimeters.");
    getFloat(&float_1, "");
    float itoc = in_cm(float_1);
    printf("Function converts %.2f inches to %.2f centimeters.\n",float_1,itoc);
    puts("");
    
    //11. Returns the BMI.
    puts("11. Returns the BMI.");
    getFloat(&float_1, " of weight (in kilograms)");
    getFloat(&float_2, " of height (in meters)   ");
    float BMI = bmi(float_1, float_2);
    printf("Function returns the BMI: %.2f.\n",BMI);
    puts("");
    
    //12. Function returns the biggest of 5 integers.
    puts("12. Function returns the biggest of 5 integers.");
    int size = 5;
    int array[size];
    for (int i = 0; i < size; ++i){
        printf("Enter number %d: ",i+1);
        scanf("%d",&array[i]);
    }
    biggest = biggest_5(array,size);
    printf("Function returns the biggest of 5 integers is %d.\n",biggest);
    puts("");
    
    //15. Program with functions calculates amount of combinations:
    //n!/(k!*(n-k)!) whenever k <= n, and which is 0 when k>n
    puts("15. Program with functions calculates amount of combinations.");
    getInt(&num_1, " of n");
    getInt(&num_2, " of k");
    int nCk = combination(num_1, num_2);
    printf("Function calculates amount of combinations P(%d,%d) = %d.\n",num_1,num_2,nCk);
    puts("");
    
    //16. Function prints out a lotto row.
    puts("16. Function prints out a lotto row.");
    printf("LOTTO:\n1 -- Generate a lotto row.\n2 --  Exit\n");
    printf("Choose the action (1-2): ");
    scanf("%d", &num_1);
    puts("* * * * *");
    int limit = 7;
    int array_1[limit];
    lottoRow(num_1, array_1, limit);
    puts("");
    
    //17. Program with functions calculates the standard deviation.
    puts("17. Program with functions calculates the standard deviation.");
    getInt(&size, " of measurements");
    float array_2[size];
    for (int i = 0; i < size; ++i){
        printf("Measurement %d: ",i+1);
        scanf("%f",&array_2[i]);
    }
    float std_dev = standard_deviation (array_2, size);
    printf("Function calculates this standard deviation = %.2f.\n",std_dev);
    puts("");
    
    //18. Functions calculate: - sum of an array
    //                         - min and max
    puts("18. Functions calculate: - sum of an array - min and max.");
    getInt(&size, " of array's size");
    float array_3[size];
    for (int i = 0; i < size; ++i){
        printf("array[%d]: ",i);
        scanf("%f",&array_3[i]);
    }
    sum_min_max (array_3, size);
    puts("");
    
    //19. Function searches for a value from an array.
    puts("19. Function searches for a value from an array.");
    getInt(&size, " of array's size");
    float array_4[size];
    for (int i = 0; i < size; ++i){
       printf("array[%d]: ",i);
       scanf("%f",&array_4[i]);
    }
    search (array_4, size);
    puts("");
    puts("");
    
    //20. Returns the sum of an array.
    puts("20. Returns the sum of an array.");
    getInt(&size, " of array's size");
    float array_5[size];
    for (int i = 0; i < size; ++i){
       printf("array[%d]: ",i);
       scanf("%f",&array_5[i]);
    }
    float sum_float = sum_array (array_5, size);
    printf("Function returns the sum of an array = %.2f.\n",sum_float);
    puts("");
    
    //21. Function multiplies every value in an array by 2.
    puts("21. Function multiplies every value in an array by 2.");
    getInt(&size, " of array's size");
    for (int i = 0; i < size; ++i){
       printf("array[%d]: ",i);
       scanf("%f",&array_5[i]);
    }
    getFloat(&float_1, " by which array multiplies");
    mult_array (array_5, size, float_1);
    puts("");
    puts("");
    
    //22.
    //A character is passed to a function: funtion returns True if character is a vowel, otherwise False (0).
    //(Five of the 26 alphabet letters are vowels: A, E, I, O, and U. )
    puts("22. Funtion returns True if character is a vowel, otherwise False (0).");
    char text;
    printf("Enter character: ");
    scanf("%c",&text);
    vowel (text);
    puts("");
    
    //23. A whole number and an array (size is 5, contains integers) are passed to
    //a function that checks how many times passed value exists in that passed array
    //and returns the amount.
    puts("23. Funtion that checks how many times passed value exists in that passed array and returns the amount.");
    size = 5;
    int array_int[5];
    for (int i = 0; i < size; ++i){
       printf("array[%d]: ",i);
       scanf("%d",&array_int[i]);
    }
    getInt(&num_1, "");
    int result = num_arr (array_int, num_1);
    printf("Amount of existence: %d.\n",result);
    puts("");
    
    //24. Your program defines and fills an array of 10 integers with random numbers that are between 1-5.
    //That array is passed to a method that counts the amounts of different values and prints then out.
    puts("24. Funtion that checks how many times passed value exists in that passed array and returns the amount.");
    int array1_int[10];
    size = 10;
    for (int i = 0; i < size; ++i){
        array1_int[i] = (rand() % (5 - 1 + 1)) + 1;
        printf("%d  ",array1_int[i]);
    }
    puts("");
    count (array1_int);
    puts("");
    
    //25. Duration and frequency are passed to a function that plays then that sound (windows.h neeeded).
    int frequency;
    int duration;
    getInt(&frequency, " of frequency");
    getInt(&duration, " of duration");
    Beep(frequency, duration);
    
    return 0;
}

