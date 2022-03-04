#include <stdio.h>
#include <stdlib.h> /* atoi */
int isLeapYear(int year)
{
    if (((year % 4 == 0)
         && (year % 100 != 0))
        || (year % 400 == 0))
        return 1;
    else
        return 0;
}

int main(int argc, char* argv[])
{
    int n;

    if (argc == 1)
        printf("No command line arguments found.\n");
    else {
        n = atoi(argv[1]);
        if (isLeapYear(n) == 1)
            printf("\n%d was a leap year\n", n);
        else
            printf("\n%d was not a leap year\n", n);
    }

    return 0;
}
