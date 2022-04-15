#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Tree's data structure*/

int heightOfBinaryTree (tree* root)
{
    if (root == NULL)       return 0;

    int lh = 0, rh = 0;
    lh = heightOfBinaryTree (root -> left);
    rh = heightOfBinaryTree (root -> right);

    return (1 + max (lh, rh));
}


int main (void)
{
    /*memory given to the the tree here*/
    int height = heightOfBinaryTree (root);
    return EXIT_SUCCESS;
}