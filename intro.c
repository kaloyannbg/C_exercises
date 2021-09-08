
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


void Exercise2(void) {

    char myFirstName[7] = "Kaloqn";

    char myLastName[8] = "Angelov";

    printf("%s %s", myFirstName, myLastName); //prints Kaloqn Angelov

}

void Exercise3(void) {

    time_t calendarTime;

    time(&calendarTime);

    printf("\n current time is : %s",ctime(&calendarTime));

}

void Exercise4(void) {

    int number = 12345; // prints 111.108056

    double squareRoot = sqrt((double)number); //make the number on square root (корен квадратен) and save it in squareroot

    printf("%f", squareRoot);

}

void Exercise5(void) {

    int i = 2;

    for(i; i <= 10; i++) {

        if( (i % 2) == 0 ) {
            if(i == 10) {

            printf("% d", i); //print 10 without comma after the number

            } else {

            printf(" %d,", i); //print even numbers

            }

        } else {

            printf(" -%d,", i); //print odd numbers with -

        }
    }

}

void Exercise6(void) {

    printf("How old are you? Enter ages: ");

    int age;

    scanf("%d", &age);

    printf("\n\nNow are you %d years old. ", age);
    printf("\n\nAfter 10 years you will be: %d years old.", age + 10);

}

int main()
{

    Exercise6();

    printf("\n\n\n\n");
    return 0;
}
