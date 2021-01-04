//
//  task5.c
//  Weekly Task 5
//
//  Created by Nguyen Le Khanh Ngoc on 03/11/2020.
//  Copyright © 2020 Nguyen Le Khanh Ngoc. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Header.h"

//function phase
void getInt (int *num, char order[]){
    printf("Enter number%s: ",order);
    scanf("%d",num);
}
void getFloat (float *num, char order[]){
    printf("Enter number%s: ",order);
    scanf("%f",num);
}
//1. Calculates the sum of 2 integers and prints out the result.
void printSum (int num_1, int num_2){
    int sum;
    sum = num_1 + num_2;
    printf("Sum of %d and %d is %d.\n", num_1, num_2, sum);
}
//2. Returns the sum of 2 integers.
int sumInt (int num_1, int num_2){
    return num_1 + num_2;
}
//3. Returns the average of 2 integers
float average_2 (int sum){
    return sum/2.0;
}
//4. Returns the average of 4 floating point values.
float average_4 (float num_1, float num_2, float num_3, float num_4){
    float sum;
    sum = num_1 + num_2 + num_3 + num_4;
    return sum/4.0;
}
//6. Returns the factorial.
int factorial (int num){
    int result = 1;
    for (int i = 1; i <= num; ++i){
        result *= i;
    }
    return result;
}
//7. Returns the biggest of 2 integers.
int biggest_2 (int num_1, int num_2){
    int result = num_1;
    if(result < num_2){
        result = num_2;
    }
    return result;
}
//8. Returns the biggest of 3 integers.
int biggest_3 (int num_1, int num_2, int num_3){
    int result = num_1;
    if (num_2 > num_1 && num_2 > num_3){
        result = num_2;
    } else if (num_3 > num_1 && num_3 > num_2){
        result = num_3;
    }
    return result;
}
//10. Converts inches to centimeters.
float in_cm (float num){
    return num*2.54; //1 inch = 2.54 cm
}
//11. Returns the BMI.
float bmi(float weight, float height){
    return weight/powf(height,2);
}
//12. Function returns the biggest of 5 integers.
int biggest_5 (int array[], int size){
    int biggest = array[0];
    for (int i = 0; i < size; ++i){
        if (biggest < array[i+1]){
            biggest = array[i+1];
        }
    }
    return biggest;
}
//15. Program with functions calculates amount of combinations:
//n!/(k!*(n-k)!) whenever k <= n, and which is 0 when k>n
int combination (int n, int k){
    int combinations;
    
    //validate input
    if (k > n){
        combinations = 0;
    }
    
    int result_n = 1;
    for (int i = 1; i <= n; i++){
        result_n = result_n * i;
    }

    int result_k = 1;
    for (int i = 1; i <= k; i++){
        result_k = result_k * i;
    }

    int result_n_k = 1;
    for (int i = 1; i <= (n-k); i++){
        result_n_k = result_n_k * i;
    }

    combinations = result_n/(result_k * result_n_k);
    return combinations;
}
//16. Function prints out a lotto row.
void lottoRow (int choice, int array[], int limit){
    while (choice != 2) {
        //GENERATE
        if (choice == 1){
            for (int i = 0; i < limit; ++i){
                array[i] = rand() % 40 + 1;
                printf("%d  ", array[i]);
            }
                printf("\n");
        }
        
        printf("LOTTO:\n1 -- Generate a lotto row.\n2 --  Exit\n");
        printf("Choose the action (1-2): ");
        scanf("%d", &choice);
        puts("* * * * *");
    }
}
//17. Program with functions calculates the standard deviation.
float standard_deviation (float array[], int size){
    int sum = 0;
    for (int i = 0; i < size; ++i){
        sum += array[i];
    }
    float mean = (float)sum / size;
    //Standard deviation
    float numerator = 0.0;
    for(int i = 0; i < size; ++i){
        numerator += powf(array[i] - mean, 2);
    }
    float std_dev = sqrtf(numerator/size);
    return std_dev;
}
//18. Functions calculate: - sum of an array
//                         - min and max
void sum_min_max (float array[], int size){
    float sum = 0;
    float min = array[0];
    float max = array[0];
    
    for (int i = 0; i < size; ++i){
        sum += array[i];
        if (min > array[i]){
            min = array[i];
        }
        if (max < array[i]) {
            max = array[i];
        }
    }
    printf("Function calculates: - sum of an array = %.2f.\n",sum);
    printf("                     -             min = %.2f.\n",min);
    printf("                     -             max = %.2f.\n",max);
}
//19. Function searches for a value from an array.
void search (float array[], int size){
    int value;
    int count = 0;
    int number = 0;
    printf("Input a specific value: ");
    scanf("%d", &value);
    for (int i = 0; i < size; ++i){
        if (value == array[i]){
            count++;
            number = i;
            
            if (count == 1){
                printf("Its location in array is: %d",number);
                number = 0;
            } else if (count > 1) {
                printf(" %d",number);
                number = 0;
            } else {
                printf("Cannot be found.\n");
            }
        }
        
    }
}
//20. Returns the sum of an array.
float sum_array (float array[], int size){
    float sum = 0;
    for (int i = 0; i < size; ++i){
        sum += array[i];
    }
    return sum;
}
//21. Function multiplies every value in an array by 2.
void mult_array (float array[], int size, float number){
    for (int i = 0; i < size; ++i){
        array[i] *= number;
    }
    printf("Function multiplies every value in an array by %.2f:\n",number);
    for (int i = 0; i < size; ++i){
        printf(" %.2f", array[i]);
    }
}
//22.
//A character is passed to a function: funtion returns True if character is a vowel, otherwise False (0).
//(Five of the 26 alphabet letters are vowels: A, E, I, O, and U. )
bool vowel (char text){
    switch(text){
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("True.\n");
            return 1;
            break;
        default:
            printf("False.\n");
            return 0;
            break;
    }
}
//23. A whole number and an array (size is 5, contains integers) are passed to
//a function that checks how many times passed value exists in that passed array
//and returns the amount.
int num_arr (int array[5], int number){
    int count = 0;
    for (int i = 0; i < 5; ++i){
        if (number == array[i]){
            count++;
        }
    }
    return count;
}
//24. Your program defines and fills an array of 10 integers with random numbers that are between 1-5.
//That array is passed to a method that counts the amounts of different values and prints then out.
void count (int array[10]){
    int count_1 = 0;
    int count_2 = 0;
    int count_3 = 0;
    int count_4 = 0;
    int count_5 = 0;
    
    for (int i = 0; i < 10; ++i){
        switch(array[i]){
            case 1: count_1++; break;
            case 2: count_2++; break;
            case 3: count_3++; break;
            case 4: count_4++; break;
            case 5: count_5++; break;
            default: printf("No value found.\n"); break;
        }
    }
    
    printf("1: %d\n",count_1);
    printf("2: %d\n",count_2);
    printf("3: %d\n",count_3);
    printf("4: %d\n",count_4);
    printf("5: %d\n",count_5);
}
