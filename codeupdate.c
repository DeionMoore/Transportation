#include <stdio.h>


int main ()
{
    printf ("Welcome to the Transportation code! ");
    int c;

    printf("We have a couple questions to ask first. \n are you a student or elderly, or neither? press 1 for yes and 2 for no? ");

    scanf ("%d", &c);
    if (c == 1) {
        printf("You choose student or elderly \n ");

        printf("If you are a student press 1, if not press 2 for elderly. ");

        scanf("%d", &c);
        if (c == 1) {

            printf("Now, are you paying Monthly or pay per ride? press 1 for Monthly and 2 for Pay per ride. ");
            scanf("%d", &c);
            if (c == 1) {
                printf("You have chosen Monthly. \n ");


            }else{
                printf("You have chosen pay per ride. ");
            }
        }
        if (c == 2) {

            printf("Now, would you rather pay Monthly or pay per ride? press 1 for Monthly and 2 for Pay per ride. ");

            scanf("%d", &c);
            if (c == 2) {
                printf("You have chosen Monthly. \n ");


            } else{
                printf("You have chosen pay per ride. ");
            }
        }
    }
    else
    {
        printf ("You choose other");
    }
}
