#include <stdio.h>

int main()
{
    int i, j, k;

    // declare variables
    int row, c, n, temp;

    // ask user to enter number of rows to print
    printf("Enter the number of rows to print pyramid rows ");
    // get number of rows value in variable "n"
    scanf("%d", &n);
    int fan = n;
    // loop for each row
    for (i = fan; i >= 1; i--)
    {
        // print space
        for (j = fan; j > i; j--)
            printf(" ");

        // print '*'
        for (k = 1; k < (i * 2); k++)
            printf("@");

        // move to the next line
        printf("\n");
    }

    // set this value in temp because this is help us print blank space before printing *
    //  now we need temp as we need to keep value of "n" same through out the program
    // but "temp" value will be decreased after each loop
    temp = n;

    // let's start with outer loop to loop through rows which will be dependent on variable "n"
    for (row = 1; row <= n; row++)
    {
        // here C start with 1 and will keep printing space until it's value is greater current "temp" value
        for (c = 1; c < temp; c++)
            printf(" "); // space

        // decrease temp value to print one less space next time we loop
        temp--;

        // now loop to print *, check formular here it's 2N-1 this is because
        //  we need to print * odd number of times to get our pattern out
        for (c = 1; c <= 2 * row - 1; c++)
            printf("@");

        // as soon as loop ends print a new line
        printf("\n");
    }

    return 0;
}