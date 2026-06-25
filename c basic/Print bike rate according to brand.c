#include <stdio.h>

int main()
{
    int choice;

    printf("Bike Brands\n");
    printf("1. Hero\n");
    printf("2. Honda\n");
    printf("3. TVS\n");
    printf("4. Bajaj\n");
    printf("5. Yamaha\n");

    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Hero Bike Price = Rs. 85,000");
            break;
        case 2:
            printf("Honda Bike Price = Rs. 95,000");
            break;
        case 3:
            printf("TVS Bike Price = Rs. 90,000");
            break;
        case 4:
            printf("Bajaj Bike Price = Rs. 1,00,000");
            break;
        case 5:
            printf("Yamaha Bike Price = Rs. 1,20,000");
            break;
        default:
            printf("Invalid Choice!");
    }

    return 0;
}
