#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int number_of_int = 0;
    printf("How many integers do you want to enter?\n");
    scanf("%i", &number_of_int);

    char *p_yes_or_no = malloc(4 * sizeof(char));


    printf("You wanted to enter %i integers.\nAre you sure you want this? Yes or No?\n", number_of_int);
    scanf("%s", p_yes_or_no );

    if(strcmp(p_yes_or_no, "yes\n") == 0) {
        int *p_int = malloc(number_of_int * sizeof(number_of_int));
        printf("Please enter %i integers:\n", number_of_int);

        for (int i = 0; i < number_of_int; ++i) {
            scanf("%i", &p_int[i]);
        }



    }

    return 0;
}
