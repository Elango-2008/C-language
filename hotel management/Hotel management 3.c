#include <stdio.h>
int main()
{
    int ch, a, b, qty;
    float bill=0;
    printf("***Elango Hotel Menu***");
    printf("\n 1) mutton chicken\n 2) Chicken Briyani\n 3) chicken 65\n");
    printf("Enter the your Choice: ");
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
        printf("Enter the Quantity: ");
        scanf("%d", &qty);
        bill += qty*499;
        printf("Bill: %f", bill);
        break;
    case 2:
        printf("Enter the Quantity: ");
        scanf("%d", &qty);
        bill += qty*140;
        printf("Bill: %f", bill);
        break;
    case 3:
        printf("Enter the Quantity: ");
        scanf("%d", &qty);
        bill += qty*100;
        printf("Bill: %f", bill);
        break;
    default:
        printf("invalid input");

        break;

    }

}