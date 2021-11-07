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


    if(strcmp(p_yes_or_no, "yes") == 0) {
        int *p_int = malloc(number_of_int * sizeof(number_of_int));
        printf("Please enter %i integers:\n", number_of_int);
            for (int i = 0; i < number_of_int; ++i) {
                scanf("%i", &p_int[i]);
            }

        int *sorted_numb = malloc(number_of_int * sizeof(int));
            //goes through the list number_of_int times

        for (int i = 0; i < number_of_int; ++i) {
            printf(" test before loop: %i\n", sorted_numb);
        }
            for (int outer = 0; outer < number_of_int ; ++outer) {

                //starts checking the first index with the next until all are checked
                for (int inner = 0; inner < number_of_int-1; ++inner) {
                    int temp_store_num_to_switch;
                    if(sorted_numb[inner] > sorted_numb[inner + 1]) {
                    temp_store_num_to_switch = sorted_numb[inner];
                    sorted_numb[inner] = sorted_numb[inner + 1];
                    sorted_numb[inner + 1] = temp_store_num_to_switch;
                }
            }
        }

        printf("Numbers in order entered: ");
        for (int i = 0; i < number_of_int; ++i) {
            printf("%i, ", p_int[i]);
        }

        printf("\nNumbers sorted"": ");
        for (int i = 0; i < number_of_int; ++i) {
            printf("%i, ", sorted_numb[i]);
        }

        free(sorted_numb);
        sorted_numb = NULL;
        free(p_int);
        p_int = NULL;
    }
    else {
        char yes_no[20] = { 0 };
        printf("Do you want to enter another integer?\n");
        fgets(yes_no, 20, stdin);
        yes_no[strlen(yes_no) -1] = '\0';
            if(strcmp(p_yes_or_no, "yes") == 0)
                return  main();
            else
                printf("\nHave a nice day!\nGoodbye!");
    }
    free(p_yes_or_no);
    p_yes_or_no = NULL;

    return 0;
}
