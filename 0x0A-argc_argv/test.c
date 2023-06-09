#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
    if (argc == 1) {
        printf("No arguments provided.\n");
        return 0;
    }

    int sum = 0;
    for (int i = 1; i < argc; i++) {
        char *endptr;
        long num = strtol(argv[i], &endptr, 10);

        if (*endptr != '\0' || !isdigit(*argv[i])) {
            printf("Error: Invalid input: %s\n", argv[i]);
            return 1;
        }

        sum += (int)num;
    }

    printf("Sum: %d\n", sum);
    return 0;
}

