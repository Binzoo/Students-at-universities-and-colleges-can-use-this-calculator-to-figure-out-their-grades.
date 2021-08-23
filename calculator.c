#include <stdio.h>

int main(){

    int dial, coar, iqqt, help, exit, avg, sum;
    float per;

    printf("Enter the final mark you got for Dial: ");
    scanf("%d", &dial);

    printf("Enter the final mark you got for Computer Architecture: ");
    scanf("%d", &coar);

    printf("Enter the final mark you got for IQQT: ");
    scanf("%d", &iqqt);

    printf("Enter the finl mark for Help Desk: ");
    scanf("%d", &help);


    sum = dial + coar + iqqt + help;

    avg = sum / 4;

    per = sum / 4;

    if (sum <= 400)
    {
    printf("Sum: %d\n", sum);
    printf("Percentage: %0.2f %%\n", per );

    if (per <= 100)
    {
        if (per >= 80 && per <= 100)
        {
            printf("Pass with Distinction PD\n");  
        }   
        if (per >= 70 && per < 80)
        {
            printf("Condend Pass CP\n");
        }
        if (per >= 60 && per < 70)
        {
            printf("Condend Distinction CD\n");  
        }   
        if (per >= 50 && per < 60)
        {
            printf("Pass P\n");
        }
        if (per >= 40 && per < 50)
        {
            printf("Reweight RW\n");  
        }   
        if (per >= 30 && per < 40)
        {
            printf("Not Applicable NA\n");
        }
        if (per >= 20 && per < 30)
        {
            printf("Internal Academic Credit ACI \n");  
        }   
        if (per >= 10 && per < 20)
        {
            printf("External Academic Credit CR\n");
        }
    }
    }
    else
    {
    printf("Enter your real Final mark that should be under 400.\n");
    }

    printf("Press e and hit enter to exit.\n");
    scanf("%f",&exit);


    return 0;
}

