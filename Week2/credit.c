#include <stdio.h>
#include <cs50.h>


int main(void)
{
    //ask for credit card number
    long cardno = get_long("Enter your card number: ");

    //check card length
    int length = 1;
    //make a proxy card number
    long lentest = cardno;
    while (lentest > 9)
    {
        lentest /= 10;
        length++;
    }
    printf("There are %i digits\n", length);

    //validate card number
    long oddtotal = 0;
    long eventotal = 0;
    long x = 10;
    long y = 100;
    int oddcurrentone = 0;
    int oddcurrenttwo = 0;
    int oddcurrenttotal = 0;
    int validationtotal = 0;

    //get the total of the doubled odd number products
    for(int i = 0; i < length / 2; i++)
    {
        long oddcurrent = (((cardno / x) % 10)*2);
        if (oddcurrent > 9)
        {
            oddcurrentone = oddcurrent % 10;
            oddcurrenttwo = (oddcurrent / 10) % 10;
            oddcurrenttotal = oddcurrentone + oddcurrenttwo;
            oddtotal += oddcurrenttotal;
        }
        else
        {
            oddtotal += oddcurrent;
        }
        x *= 100;
        printf("cur: %li total: %li\n", oddcurrent, oddtotal);
    }
    printf("Final odd total is %li\n", oddtotal);

    //get the total of the even numbers
    //get last digit first
    eventotal = (cardno % 10);
    //add the rest of the even digits
    for(int i = 0; i < length / 2; i++)
    {
        long evencurrent = ((cardno / y) % 10);
        eventotal += evencurrent;
        y *= 100;

        printf("even cur: %li even total: %li\n", evencurrent, eventotal);
    }

    //get the total of both the odd and even aspects
    bool validcheck = false;

    validationtotal = oddtotal + eventotal;
    printf("total: %i\n", validationtotal);
    //check last digit of the total is 0
    int validationlastnum = validationtotal % 10;
    if (validationlastnum == 0)
    {
        validcheck = true;
        printf("This card is valid\n");
    }
    else
    {
        validcheck = false;
        printf("This card is NOT valid\n");
    }

    //check for american express
    bool aecheck = false;
    //if (length == 15 )

}