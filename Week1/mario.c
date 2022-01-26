#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Get a valid pyramid height from the user
    int height;
    do
    {
        height = get_int("What is the height of the pyramid (1-8): ");
    }
    while (height > 8 || height < 1);

    //for each row
    for (int i = 0; i < height; i++)
    {
        //for each column
        for (int j = 0; j < height; j++)
        {
            //print left hand bricks
            int x = (height - j - i);
            if (x > 1)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
        }
        //create gap
        printf("  ");

        for (int k = height; k > 0; k--)
        {
            //print right hand bricks
            int y = (height - k - i);
            if (y > 0)
            {
                ;
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
    }
}
