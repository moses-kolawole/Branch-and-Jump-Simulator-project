#include <stdio.h>
#include <unistd.h>

int main() {

    // Program Counter
    int pc = 0;

    // Branch condition
    int condition = 1;

    // List of instructions
    char *instruction[] = {
        "Load Data",
        "Check Condition",
        "Add Numbers",
        "Store Result",
        "End Program"
    };

    int size = sizeof(instruction) / sizeof(instruction[0]);

    printf("Good day, here is the Branch and Jump Simulator.\n");

    while (pc < size) {

        printf("\n--------------------------------");
        printf("\nProgram Counter (PC): %d", pc);
        printf("\nExecuting: %s\n", instruction[pc]);

        sleep(1);

        // Branch instruction
        if (pc == 1 && condition == 1) {
            printf("Condition is TRUE.\n");
            printf("Jumping to instruction 4...\n");
            pc = 4;
        }
        else {
            pc++;
        }
    }

    printf("\n--------------------------------");
    printf("\nProgram Execution Completed Successfully.\n");

    return 0;
}
