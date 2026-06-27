#include <stdio.h>
#include "matrix.h"

int main()
{
    int choice;

    while(1)
    {
        printf("\n===== MATRIX CALCULATOR =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Transpose\n");
        printf("5. Determinant\n");
        printf("6. Inverse\n");
        printf("7. Matrix Classification\n");
        printf("8. Export Result\n");
        printf("9. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                addition();
                break;

            case 2:
                subtraction();
                break;

            case 3:
                multiplication();
                break;

            case 4:
                transpose();
                break;

            case 5:
                determinant();
                break;

            case 6:
                inverse();
                break;

            case 7:
                classify();
                break;

            case 8:
                exportResult();
                break;

            case 9:
                printf("Thank You!\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}
