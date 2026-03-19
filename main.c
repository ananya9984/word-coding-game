#include <stdio.h>

int main() {
    int choice;
    int score = 0;

    do {
        printf("\n=== WORD CODING GAME ===\n");
        printf("1. Easy Level\n");
        printf("2. Medium Level\n");
        printf("3. Hard Level\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            int ans;
            printf("\nCAT = 123\nDOG = 456\n");
            printf("Find code for: COT\n");
            scanf("%d", &ans);

            if(ans == 153) {
                printf("Correct!\n");
                score += 10;
            } else {
                printf("Wrong! Answer is 153\n");
            }
        }

        else if(choice == 2) {
            int ans;
            printf("\nPEAR = 5327\nDATE = 8293\n");
            printf("Find code for: DEAR\n");
            scanf("%d", &ans);

            if(ans == 8327) {
                printf("Correct!\n");
                score += 20;
            } else {
                printf("Wrong! Answer is 8327\n");
            }
        }

        else if(choice == 3) {
            int ans;
            printf("\nLION = 4516\nNOTE = 6238\n");
            printf("Find code for: LINE\n");
            scanf("%d", &ans);

            if(ans == 4538) {
                printf("Correct!\n");
                score += 30;
            } else {
                printf("Wrong! Answer is 4538\n");
            }
        }

        else if(choice == 4) {
            printf("\nFinal Score: %d\n", score);
            printf("Thanks for playing!\n");
        }

        else {
            printf("Invalid choice!\n");
        }
    } while(choice !=4);

    return 0;
}