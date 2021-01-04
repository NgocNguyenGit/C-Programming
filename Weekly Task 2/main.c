//
//  main.c
//  Weekly Task 2
//
//  Created by Nguyen Le Khanh Ngoc on 19/09/2020.
//  Copyright © 2020 Nguyen Le Khanh Ngoc. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#define task14b //Change the task name here

int main(int argc, const char * argv[]) {
#ifdef task9 //Start task 9
    //User gives a value and our program tells if the value is > 100 or not.
    float i;
    printf("Give a value: ");
    scanf("%f",&i);
    
    //Check if the number < or > 100
    if (i < 100){
        printf("Your number %.2f is smaller than 100.\n",i);
    } else if (i > 100){
        printf("Your number %.2f is greater than 100.\n",i);
    }
#endif // End task 9
    
#ifdef task10 //Start task 10
    /*
     10
     Write a program which reads two integer values.
     If the first is less than the second, print the message "up".
     If the second is less than the first, print the message "down ".
     If the numbers are equal, print the message "equal".
     */
    int number_1;
    int number_2;
    
    printf("Give 2 numbers: ");
    scanf("%d %d",&number_1,&number_2);
    
    if (number_1 == number_2){
        printf("Equal.\n");
    } else if (number_1 < number_2){
        printf("Up.\n");
    } else {
        printf("Down.\n");
    }
#endif //End task 10
    
#ifdef task11 //Start task 11
    /*
     11
     User enters a weekday number and the program tells the name of the day in Germany.
     */
    int weekday_number;
    printf("Enter a weekday number: ");
    scanf("%d",&weekday_number);
    
    switch(weekday_number){
            case 2: printf("Montag.\n"); break; //Monday
            case 3: printf("Dienstag.\n"); break; //Tuesday
            case 4: printf("Mittwoch.\n"); break; //Wednesday
            case 5: printf("Donnerstag.\n"); break; //Thursday
            case 6: printf("Freitag.\n"); break; //Friday
            case 7: printf("Samstag.\n"); break; //Saturday
            case 8: printf("Sonntag.\n"); break; //Sunday
        default:printf("Invalid input.\n");
    }
#endif //End task 11
    
#ifdef task12 //Start task 12
    /*
     12
     Program solves a quadratic equation
     Note: you have to include math.h to your source file and
     then use sqrt() function.
     */
    float a, b, c;
    printf("Quadratic formula ax²+bx+c=0\n");
    printf("Input coefficients a, b, c: ");
    scanf("%f %f %f",&a,&b,&c);
    
    float delta, x_1, x_2;
    delta = sqrt(b*b- 4*a*c);
    
    //Check square root
    if (delta >= 0){
        x_1 = (-b + delta)/(2*a);
        x_2 = (-b - delta)/(2*a);
        printf("Result 1 is %.2f.\n",x_1);
        printf("Result 2 is %.2f.\n",x_2);
    } else {
        printf("Please input other numbers.\n");
    }
#endif //End task 12
    
#ifdef task13 //Start task 13
    /*
     13
     User gives a month number and our program tells the number of days in that month.
     */
    int month_number;
    printf("Enter a month number: ");
    scanf("%d",&month_number);
    
    switch(month_number){
            case 1: printf("January has 31 days.\n"); break;
            case 2: printf("February has 28 or 29 days.\n"); break;
            case 3: printf("March has 31 days.\n"); break;
            case 4: printf("April has 30 days.\n"); break;
            case 5: printf("May has 31 days.\n"); break;
            case 6: printf("June has 30 days.\n"); break;
            case 7: printf("July has 31 days.\n"); break;
            case 8: printf("August has 31 days.\n"); break;
            case 9: printf("September has 30 days.\n"); break;
            case 10: printf("October has 31 days.\n"); break;
            case 11: printf("November has 30 days.\n"); break;
            case 12: printf("December has 31 days.\n"); break;
        default:printf("Invalid input.\n");
    }
#endif //End task 13
    
#ifdef task14 //Start task 14
    /*
     14
     User gives the lengths of the triangle's sides. Program tells what is the triangle
     like and calculates the area of the triangle
     */
    float a, b, c; //Length of a triangle's sides
    float pbc, pac, pab;
    float area; //Area of triangle
    float s; //Half of the perimeter
    
    printf("Give the length of sides a, b, c: ");
    scanf("%f %f %f",&a,&b,&c);
    pbc = pow(b,2) + pow(c,2);
    pac = pow(a,2) + pow(c,2);
    pab = pow(a,2) + pow(b,2);
    
    //Check if we can have a triangle
    if (a + b <= c || a + c <= b || b + c <= a){
       printf("Please give other numbers.\n");
    } else {
        //Check what type of triangle & Calculate the area of triangle accordingly
        if ((a == b) || (a == c) || (b == c)){
            printf("This is an isosceles triangle.\n");
            s = (a + b + c)/2;
            area = sqrt(s * (s-a) * (s-b) * (s-c));
        } else if (a == b == c){
            printf("This is an equilateral triangle.\n");
            area = (sqrt(3) * pow(a,2))/4;
        } else if ((a*a == pbc) || (b*b == pac) || (c*c == pab)) {
            printf("This is a right triangle.\n");
            if (a*a == pbc){
                area = (b*c)/2;
            }
            if (b*b == pac){
                area = (a*c)/2;
            }
            if (c*c == pab){
                area = (a*b)/2;
            }
        } else {
            printf("This is a normal triangle.\n");
            s = (a + b + c)/2;
            area = sqrt(s * (s-a) * (s-b) * (s-c));
        }
        printf("The area of this trianngle is %.2f.\n",area);
    }
#endif //End task 14
    
#ifdef task14b //Start task 14b
    /*
     14b
     Create a program: what is the biggest of 3 given values?
     */
    float array[3];
    
    printf("Give value 1 to compare: ");
    scanf("%f",&array[0]);
    printf("Give value 2 to compare: ");
    scanf("%f",&array[1]);
    printf("Give value 3 to compare: ");
    scanf("%f",&array[2]);
    
    float biggest = array[0];
    
    for (int i = 0; i<3; i++){
        if (array[i] < array[i+1]){
            biggest = array[i+1];
        }
    }
    printf("The biggest number is %.2f.\n",biggest);
#endif //End task 14b
    return 0;
}
