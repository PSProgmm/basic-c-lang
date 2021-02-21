#include <stdio.h>

int main()
{
    int count;
    printf("Number people(s) = "); //Get the number of people for the input height.
    scanf("%d",&count); //Input height.
    printf("==============================================\n");
    for (int i = 0; i < count; i++) { //Looping for the input of other people's values.
        float cm = 0;
        printf("people %d", i+1);
        printf("\nInput height /cm.\n>> ");
        scanf("%f", &cm);
        if(cm > 0){
            float meter = cm/100.0; //The function for converting cm to meters.
            printf("Your height: %.2f centimeter.", cm);
            printf("\nYour height: %.2f meter.", meter);
            printf("\n----------------------------------------------\n");
        }
        else{
            printf("Please double check your information.");
            printf("\n----------------------------------------------\n");
        }
    }
    return 0;
}
