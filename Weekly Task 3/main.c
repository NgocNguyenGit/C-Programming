//
//  main.c
//  Weekly Task 3
//
//  Created by Nguyen Le Khanh Ngoc on 08/10/2020.
//  Copyright © 2020 Nguyen Le Khanh Ngoc. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define task24
int main(int argc, const char * argv[]) {
#ifdef task15
    /*Program calculates the sum of values 1 - 5.
    Use: for, while and do-while*/
    puts("Program calculates the sum of values 1 - 5.\n");
    //FOR
    int sum_1 = 0;
    for (int i = 0; i <= 5; ++i){
        sum_1 += i;
    }
    printf("FOR LOOP result = %d.\n",sum_1);
    //WHILE
    int sum_2 = 0;
    int number = 1;
    while (number <= 5){
        sum_2 += number;
        number++;
    }
    printf("WHILE LOOP result = %d.\n",sum_2);
    //DO-WHILE
    int sum_3 = 0;
    int number_1 = 1;
    do {
        sum_3 += number_1;
        number_1++;
    } while (number_1 <= 5);
    printf("DO-WHILE LOOP result = %d.\n",sum_3);
#endif
#ifdef task16
    /*Program calculates the sum of even numbers between 2 - 40.
    Use: for, while and do-while*/
    puts("Program calculates the sum of even numbers between 2 - 40.\n");
    //FOR
    int sum = 0;
    for (int i = 2; i <= 40; i+=2){
        sum += i;
    }
    printf("FOR LOOP result = %d.\n",sum);
    //WHILE
    int sum_1 = 0;
    int number = 2;
    while (number <= 40){
        sum_1 += number;
        number += 2;
    }
    printf("WHILE LOOP result = %d.\n",sum_1);
    //DO-WHILE
    int sum_2 = 0;
    int number_1 = 2;
    do {
        sum_2 += number_1;
        number_1 += 2;
    } while (number_1 <= 40);
    printf("DO-WHILE LOOP result = %d.\n",sum_2);
#endif
#ifdef task17
    /*Program calculates sum: 5, 10, 15, .. 100.
    Use: for, while and do-while*/
    puts("Program calculates sum: 5, 10, 15, .. 100.\n");
    //FOR
    int sum = 0;
    for (int i = 5; i <= 100; i+=5){
        sum += i;
    }
    printf("FOR LOOP result = %d.\n",sum);
    //WHILE
    int sum_1 = 0;
    int number = 5;
    while (number <= 100){
        sum_1 += number;
        number += 5;
    }
    printf("WHILE LOOP result = %d.\n",sum_1);
    //DO-WHILE
    int sum_2 = 0;
    int number_1 = 5;
    do {
        sum_2 += number_1;
        number_1 += 5;
    } while (number_1 <= 100);
    printf("DO-WHILE LOOP result = %d.\n",sum_2);
#endif
#ifdef task18
    /*Program generates 50 random numbers (between 1 to 10) and calculates sum and average.*/
    puts("Program generates 50 random numbers (between 1 to 10) and calculates sum and average.\n");
    int limit = 50;
    int array[limit];
    int sum = 0;
    for (int i = 0; i <limit; ++i){
        array[i] = rand() % 10 + 1;
        sum += array[i];
        printf("%d ",array[i]);
    }
    printf("\nSum = %d.\n",sum);
    float average = sum / 50.0;
    printf("Average = %.2f.\n",average);
#endif
#ifdef task19
    /*Program throws dice 100 times and tells amounts of different values (1, 2, 3, 4, 5, and 6).*/
    puts("Program throws dice 100 times and tells amounts of different values (1, 2, 3, 4, 5, and 6).\n");
    int limit = 100;
    int array[limit];
    for (int i = 0; i < limit; ++i){
        array[i] = rand() % 6 + 1;
        printf("%d: %d\n",i+1, array[i]);
    }
#endif
#ifdef task20
    /*Account manager with menu:
    User can make deposits
    Do withdrawal
    Check the balance

    Create a menu
    take money
    add money
    check balance
    exit

    Variable for account balance has to be global!
    => declare it outside (above) the while loop

    When user takes money you have to check if there is enough money...*/
    //Initialise variables
    float balance;
    float withdraw;
    float deposit;
    int choice;
    //WHILE loop
    do {
        printf("ACCOUNT MANAGER MENU:\n1 -- Take money\n2 -- Add money\n3 -- Check balance\n4 -- Exit\n");
        printf("Choose the action (1-4): ");
        scanf("%d", &choice);
        puts("* * * * *");
        //IDENTIFY ACTION
        switch(choice){
            case 1: printf("TAKE MONEY action is called.\n");
            break;
            case 2: printf("ADD MONEY action is called.\n"); break;
            case 3: printf("CHECK BALANCE action is called.\n"); break;
            case 4: printf("EXIT. Bye!\n"); break;
            default: printf("See you again!\n");break;
        }
        //TAKE MONEY
        if (choice == 1){
            if (balance == 0){ //Check the amount of money
                printf("Your balance is 0. Add more money!\n");
                puts("––––––––––––––––––––––––");
            }
            printf("How much do you want to TAKE? ");
            scanf("%f", &withdraw);
            if(withdraw <= balance){
                balance -= withdraw;
                printf("You withdrawed %.2f.\n", withdraw);
                puts("––––––––––––––––––––––––");
            } else {
                printf("You don't have enough money to withdraw.\n");
                puts("––––––––––––––––––––––––");
            }
        }
        //ADD MONEY
        if (choice == 2){
            printf("How much do you want to ADD? ");
            scanf("%f", &deposit);
            if (deposit <= 0){
                printf("Are you sure with this? Check again.\n");
                puts("––––––––––––––––––––––––");
            } else {
                balance += deposit;
                printf("You deposited %.2f.\n", deposit);
                puts("––––––––––––––––––––––––");
            }
        }
        //CHECK BALANCE
        if (choice == 3){
            printf("Your BALANCE is %.2f.\n", balance);
            puts("––––––––––––––––––––––––");
        }
    } while (choice != 4);
#endif
#ifdef task21
    /*Try to solve this equation:
    3x^3 - 4x^2 + 9x +5 = 0
    Here ^ means exponent*/
    puts("Try to solve this equation: 3x^3 - 4x^2 + 9x +5 = 0.\n");
    double x;
    double y = 0.0;
    for (x = -20; x < 20; x += 0.00000002){
        y = 3*x*x*x - 4*x*x + 9*x +5;
        if (y > -0.00001 && y < 0.00001)
        break;
    }
    printf("x is %f \n", x);
    printf("y is %f \n", y);
#endif
#ifdef task22
    /*Print this kind shape: character and amount of rows are given.
    o
    oo
    ooo
    oooo
    ooooo
    oooooo*/
    int row;
    char mark = 'o';
    
    printf("Input amount of rows: ");
    scanf("%d", &row);
    
    for (int i = 0; i <= row; ++i) {
        for (int j = 0; j < i; ++j){
            printf("%c", mark);
        }
        printf("\n");
    }
#endif
#ifdef task23
    /*Then try to generate this:
    o
    oo
    ooo
    oooo
    ooooo
    oooooo
    ooooo
    oooo
    ooo
    oo
    o*/
    int row;
    char mark = 'o';
    
    printf("Input amount of rows: ");
    scanf("%d",&row);
    
    if (row % 2 == 0){
        row /= 2;
        for (int i = row-1; i>0 ; --i){
            for(int j = 1; j<= row - i; ++j){
                printf("%c", mark);
            }
            for (int j = 1; j <= i; ++j){
                printf(" ");
            }
            printf("\n");
        }
        
        for(int i = 0;i <= row; ++i){
            for(int j = 0; j< row-i; ++j){
                printf("%c", mark);
            }
            for(int j = 1; j <= i; ++j){
                printf(" ");
            }
            printf("\n");
        }
    }
    if (row % 2 != 0){
        row = (row/ 2) + 1;
        for (int i = row-1; i>0 ; --i){
            for(int j = 1; j<= row - i; ++j){
                printf("%c", mark);
            }
            for (int j = 1; j <= i; ++j){
                printf(" ");
            }
            printf("\n");
        }
        
        for(int i = 0;i <= row; ++i){
            for(int j = 0; j< row-i; ++j){
                printf("%c", mark);
            }
            for(int j = 1; j <= i; ++j){
                printf(" ");
            }
            printf("\n");
        }
    }
#endif
#ifdef task24
    /*4
    Voluntary, bonus
    Generate a lotto row.*/
    int limit = 7;
    int array[limit];
    int choice;
    do {
        printf("LOTTO:\n1 -- Generate a lotto row.\n2 --  Exit\n");
        printf("Choose the action (1-2): ");
        scanf("%d", &choice);
        puts("* * * * *");
        //GENERATE
        if (choice == 1){
            for (int i = 0; i < limit; ++i){
                array[i] = rand() % 40 + 1;
                printf("%d  ", array[i]);
            }
                printf("\n");
        }
        //EXIT
        if (choice == 2){
            printf("Goodbye!\n");
        }
    }while(choice != 2);
#endif
#ifdef task25
    /*Calculate factorial and combinations.*/
    int factorial;
    int result = 1;
    int i;
    
    printf("Input factorial: ");
    scanf("%d", &factorial);
    for (i = 1; i <= factorial; i++){
        result *= i;
    }
    printf("Factorial of %d is %d \n",factorial, result);

    /*
    formula
    amount of pairs = n!/(k!*(n-k)!)
    */
    puts("* * * * *");
    int n, k;
    printf("Input n: ");
    scanf("%d", &n);
    printf("Input k: ");
    scanf("%d", &k);
    
    int result_n = 1;
    for (i = 1; i <= n; i++){
        result_n = result_n * i;
    }

    int result_k = 1;
    for (i = 1; i <= k; i++){
        result_k = result_k * i;
    }

    int result_n_k = 1;
    for (i = 1; i <= (n-k); i++){
        result_n_k = result_n_k * i;
    }

    int combinations = result_n/(result_k * result_n_k);

    printf("Combinations of %d and %d is %d.\n", n,k,combinations);
#endif
    return 0;
}

