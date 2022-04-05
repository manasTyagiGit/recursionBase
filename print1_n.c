#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_1_to_n (int n)
{
    if (n == 0)         return;                 // base condition, smallest invalid input
    print_1_to_n (n - 1);                       // hypothesis, i.e., the code
    printf ("%d\t", n);                         // inductive part
}

int main (int argc, char* argv[])
{
    if (argc != 2)      return EXIT_FAILURE;

    int n = atoi (argv[1]);
    print_1_to_n (n);
    printf ("\n");

    return EXIT_SUCCESS;
}