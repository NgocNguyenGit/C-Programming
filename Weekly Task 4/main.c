//
//  main.c
//  Weekly Task 4
//
//  Created by Nguyen Le Khanh Ngoc on 14/10/2020.
//  Copyright © 2020 Nguyen Le Khanh Ngoc. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define task9
int main(int argc, const char * argv[]) {
#ifdef task1
    /*Create a program that
    a) fills an array with random numbers
    b) prints an array
    c) calculates the sum
    d) calculates the average
    e) finds the max and min
    f) finds a specific values
    g) tells how many times some value exists in an array*/
    puts("Fill an array with random numbers.");
    int limit;
    int a, b; //range of random numbers
    printf("Input limit of array: ");
    scanf("%d",&limit);
    printf("Input minimum number a of the range: ");
    scanf("%d",&a);
    printf("Input maximum number b of the range: ");
    scanf("%d",&b);
    //Check range validity
    if (a >= b){
        printf("Please input other numbers.\n");
    }
    //Check limit validity
    if (limit <= 0) {
        printf("Please input the limit again.\n");
    }
    //Generate random numbers and print array
    int array[limit];
    int sum = 0;
    puts("\nPrint an array.");
    for (int i = 0; i < limit; ++i){
        array[i] = (rand() % (b - a + 1)) + a;
        printf("%d  ",array[i]);
        sum += array[i]; //Calculate the sum
    }
    puts("\n\nCalculate the sum.");
    printf("Sum = %d.\n",sum);
    //Calculates the average
    float average = (float)sum/limit;
    puts("\nCalculates the average.");
    printf("Average = %.2f\n",average);
    //Find the min, max
    int max = array[0];
    int min = array[0];
    for (int i = 0; i < limit; ++i){
        if(max < array[i]){
            max = array[i];
        }
        if(min > array[i]){
            min = array[i];
        }
    }
    puts("\nFind the max and min.");
    printf("Max number = %d\n",max);
    printf("Min number = %d\n",min);
    //finds a specific values
    puts("\nFind a specific value.");
    int value;
    int count = 0;
    printf("Input a specific value: ");
    scanf("%d", &value);
    for (int i = 0; i < limit; ++i){
        if (value == array[i]){
            value = i;
            count = 1;
            break;
        }
    }
    if (count == 1){
        printf("Its location in array is %d.\n",value);
    } else {
        printf("Cannot be found.\n");
    }
    //tells how many times some value exists in an array
    puts("\nTell how many times some value exists in an array.");
    int value_1;
    count = 0;
    printf("Input a value: ");
    scanf("%d", &value_1);
    for (int i = 0; i < limit; ++i){
        if (value_1 == array[i]){
            count++;
        }
    }
    printf("%d exists %d times in an array.\n",value_1, count);
#endif
#ifdef task2
    /*Create a program that multiplies array values with given value.*/
    int limit;
    printf("Input the limit of the array: ");
    scanf("%d",&limit);
    float array[limit];
    for (int i = 0; i < limit; ++i){
        printf("Number %d: ",i+1);
        scanf("%f",&array[i]);
    }
    puts("Original array: ");
    for(int i = 0; i < limit; ++i){
        printf("%.2f  ",array[i]);
    }
    float number;
    printf("\n\nInput the number to be multiplied with the array: ");
    scanf("%f",&number);
    puts("Multiplied array: ");
    for(int i = 0; i < limit; ++i){
        printf("%.2f  ",array[i]*number);
    }
#endif
#ifdef task3
    /*Create a program that
    calculates the sum of 2 array values ​​to the 3rd array.*/
    puts("Create a program that calculates the sum of 2 array values ​​to the 3rd array.");
    int limit;
    printf("Input limit for 3 arrays: ");
    scanf("%d",&limit);
    //Initilise arrays
    float array_1[limit];
    float array_2[limit];
    float array_3[limit];
    //Input value for array 1
    puts("Array 1: ");
    for (int i = 0; i < limit; ++i){
        printf("Number %d: ",i+1);
        scanf("%f",&array_1[i]);
    }
    //Print array 1
    for(int i = 0; i < limit; ++i){
        printf("%.2f  ",array_1[i]);
    }
    //Input value for array 2
    puts("\n\nArray 2: ");
    for (int i = 0; i < limit; ++i){
        printf("Number %d: ",i+1);
        scanf("%f",&array_2[i]);
    }
    //Print array 2
    for(int i = 0; i < limit; ++i){
        printf("%.2f  ",array_2[i]);
    }
    //Sum to array 3
    for (int i = 0; i <limit; i++){
        array_3[i] = array_1[i] + array_2[i];
    }
    //Print array 3
    puts("\n\nArray 3: ");
    for(int i = 0; i < limit; ++i){
        printf("%.2f  ",array_3[i]);
    }
    printf("\n");
#endif
#ifdef task4
    /*Create a program that fills and prints a 3x4 array,*/
    puts("Create a program that fills and prints a 3x4 array.");
    //Initialise variables
    int row = 3;
    int column = 4;
    float array[row][column];
    //Fill the 3x4 array
    for (int i = 0; i < row; ++i){
        for (int j = 0; j < column; ++j){
            printf("Value in [%d][%d] = ",i,j);
            scanf("%f",&array[i][j]);
        }
    }
    //Print the array
    int step = 0;
    puts("\nYour array is: ");
    for (int i = 0; i <row; ++i){
        for (int j = 0; j <column; ++j){
            printf("%.2f    ",array[i][j]);
        }
        step++;
        //New line
        if (step % 3){
            printf("\n");
            step = 0;
        }
    }
#endif
#ifdef task5
    /*Create a program that contains an array that has this structure
    1. column contains a year
    2. column contains the population of the world
    Put there some 5 rows.
    Print it.
    Search the population of some year.*/
    //Data input phase
    int row = 5;
    int column = 2;
    long array[5][2] = {
        {2020, 7794798739},
        {2019, 7713468100},
        {2018, 7631091040},
        {2017, 7547858925},
        {2016, 7464022049}
    };
    //Print array
    int step = 0;
    puts("Array is: ");
    puts("YEAR  WORLD PPOPULATION");
    for (int i = 0; i < row; ++i){
        for (int j = 0; j < column; ++j){
            printf("%ld  ",array[i][j]);
        }
        step++;
        if (step % 2){
            printf("\n");
            step = 0;
        }
    }
    //Search population by year
    int value;

    printf("Enter YEAR to search: ");
    scanf("%d",&value);
    //CHECK ACTION
    long population = 0;
    if (value != 1){
        //SEARCH
        int check = 0;
        for (int i = 0; i < row; ++i){
            for (int j = 0; j < column; ++j){
                if (value == array[i][0]){
                    population = array[i][1];
                    check = 1;
                }
            }
        }
        
        if (check == 1){
            printf("The population of %d is %ld.\n",value,population);
        } else {
            printf("Year cannot be found.\n");
        }
    }
#endif
#ifdef task6
    /*Create a program that contains an array that has this structure
    1. row contains the population of some country
    2. row contains the area of ​​that country
    3. row is empty
    Calculate the population density to 3. row.*/
    puts("Country:  VIETNAM\n");
    long array[3] = {
        97590413,
        310070
    };
    
    array[2] = array[0] / array[1];
    
    for(int i = 0; i < 3; ++i){
        printf("%ld\n",array[i]);
    }
    printf("The population density in Vietnam is %ld per Km2.\n",array[2]);
#endif
#ifdef task7
    /*Create a program that contains an array that has this structure ans values.
    1 5 6 6 7 7
    2 4 6 8 8 8
    3 5 5 8 6 8
    4 9 6 8 5 8
    5 7 6 7 8 10

    1. column is the order of measurement set
    Columns 2-6 contain measurement values
    Search for the biggest average of those measurement sets*/
    int array[5][6] = {
        {1,5,6,6,7,7},
        {2,4,6,8,8,8},
        {3,5,5,8,6,8},
        {4,9,6,8,5,8},
        {5,7,6,7,8,10}
    };
    //Print array
    int step = 0;
    for (int i = 0; i < 5; ++i){
        for (int j = 0; j < 6; ++j){
            printf("%d  ",array[i][j]);
        }
        step++;
        if (step % 5){
            printf("\n");
            step = 0;
        }
    }
    float average[5];
    int sum = 0;
    //Set 1
    for (int i = 0; i < 1; ++i){
        for (int j = 1; j < 6; ++j){
            sum += array[i][j];
        }
    }
    average[0] = sum/5.00;
    sum = 0;
    //Set 2
    for (int i = 1; i < 2; ++i){
        for (int j = 1; j < 6; ++j){
            sum += array[i][j];
        }
    }
    average[1] = sum/5.00;
    sum = 0;
    //Set 3
    for (int i = 2; i < 3; ++i){
        for (int j = 1; j < 6; ++j){
            sum += array[i][j];
        }
    }
    average[2] = sum/5.00;
    sum = 0;
    //Set 4
    for (int i = 3; i < 4; ++i){
        for (int j = 1; j < 6; ++j){
            sum += array[i][j];
        }
    }
    average[3] = sum/5.00;
    sum = 0;
    //Set 5
    for (int i = 4; i < 5; ++i){
        for (int j = 1; j < 6; ++j){
            sum += array[i][j];
        }
    }
    average[4] = sum/5.00;
    sum = 0;
    //Find the biggest average
    float biggest = average[0];
    int set = 0;
    for (int i = 0; i < 5; ++i){
        if (biggest < average[i]){
            biggest = average[i];
            set = i+1;
        }
    }
    printf("The biggest average of those measurement sets is %.2f, set %d.\n",biggest,set);
#endif
#ifdef task8
    /*Your array has these values
    1, 2, 5, 8, 4, 2, 3, 22, 33, 11, 0, 5

    Write a program that tells how many values are bigger than 10.*/
    int count = 0;
    int array[] = {1, 2, 5, 8, 4, 2, 3, 22, 33, 11, 0, 5};
    puts("Write a program that tells how many values are bigger than 10.");
    //Print array
    for (int i = 0; i < 12; ++i){
        printf("%d  ",array[i]);
        if (array[i] > 10){
            count++;
        }
    }
    printf("\nThere are %d values bigger than 10.\n",count);
#endif
#ifdef task9
    /*Create a program that contains an array that contains 8 measurements.
    Calculate the standard deviation. Compare the result to Excel result.*/
    puts("Create a program that contains an array that contains 8 measurements.");
    int array[8] = {1, 2, 5, 8, 4, 2, 3, 22};
    float mean;
    int size = 8;
    int sum = 0;
    for (int i = 0; i < size; ++i){
        sum += array[i];
        printf("%d  ",array[i]);
    }
    printf("\n");
    mean = (float)sum / size;
    //Standard deviation
    float numerator = 0.0;
    for(int i = 0; i < size; ++i){
        numerator += pow(array[i] - mean, 2);
    }
    float std_dev = sqrtf(numerator/size);
    float excel_result = 6.875162336;
    printf("Calculate the standard deviation: %.2f.\n",std_dev);
    printf("Compare the result to Excel result: %.2f.\n",excel_result);
#endif
    return 0;
}
