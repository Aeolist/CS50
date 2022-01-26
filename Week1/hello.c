#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //ask for the user's name
    string name = get_string("What is your name? ");
    //print hello <user's name>
    printf("hello, %s\n", name);
}
