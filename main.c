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
    p_yes_or_no[strlen(p_yes_or_no)-1] = '\0';

    if(strcmp(p_yes_or_no, "yes") != 0) {
        int *p_int = malloc(number_of_int * sizeof(number_of_int));
        printf("Please enter %i integers:\n", number_of_int);

        for (int i = 0; i < number_of_int; ++i) {
            scanf("%i", &p_int[i]);
        }
        printf("Numbers in order entered: ");
        for (int i = 0; i < number_of_int; ++i) {
            printf("%i, \n", p_int[i]);

        }

        //goes through the list number_of_int times
        for (int outer = 0; outer < number_of_int ; ++outer) {
            //starts checking the first index with the next until all are checked
            for (int inner = 0; inner < number_of_int-1; ++inner) {
                int temp_store_num_to_switch;
                if(p_int[inner] > p_int[inner + 1]) {
                    temp_store_num_to_switch = p_int[inner];
                    p_int[inner] = p_int[inner + 1];
                    p_int[inner + 1] = temp_store_num_to_switch;
                }
            }
        }
        printf("Numbers sorted"
               ": ");
        for (int i = 0; i < number_of_int; ++i) {
            printf("%i, ", p_int[i]);
        }


    }


    return 0;
}
