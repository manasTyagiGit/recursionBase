#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_n_to_1 (int n)
{
    if (n == 0)         return;                 // base condition, smallest invalid input   
    printf ("%d\t", n);                         // inductive part
    print_n_to_1 (n - 1);                       // hypothesis, i.e., the code
}

int main (int argc, char* argv[])
{
    if (argc != 2)      return EXIT_FAILURE;

    int n = atoi (argv[1]);
    print_n_to_1 (n);
    printf ("\n");

    return EXIT_SUCCESS;
}