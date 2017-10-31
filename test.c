#include <stdio.h>

int main()
{
    int i;

    for (i = 0; i < 3; i++) {
        printf("i = %d\n", i);
        printf("Press 'Enter' to continue: ... ");
        while ( getchar() != '\n')
            ;
    }
    printf("\n\n");
    printf("Ttttthat's all, folks\n");
    printf("Press 'Enter' to exit the program (ironic, isn't it?) ...");
    while (getchar() != '\n')
        ;
    printf("\n\n");
    printf("Ttttthat's really all!\n");
    return 0;
}