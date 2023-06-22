#include <stdio.h>
#include "variadic_functions.h"

void test_case_basic_numbers() {
    printf("Test Case: Basic Numbers\n");
    printf("Expected Output: 1, 2, 3, 4\n");
    print_numbers(", ", 4, 1, 2, 3, 4);
    printf("\n\n");
}
void test_case_zero_numbers() {
    printf("Test Case: Zero Numbers\n");
    printf("Expected Output: (No Output)\n");
    print_numbers(", ", 0);
    printf("\n\n");
}

void test_case_single_number() {
    printf("Test Case: Single Number\n");
    printf("Expected Output: 42\n");
    print_numbers(", ", 1, 42);
    printf("\n\n");
}

void test_case_null_separator() {
    printf("Test Case: Null Separator\n");
    printf("Expected Output: 10 20 30\n");
    print_numbers(NULL, 3, 10, 20, 30);
    printf("\n\n");
}

void test_case_no_separator_multiple_numbers() {
    printf("Test Case: No Separator (Multiple Numbers)\n");
    printf("Expected Output: 5 10 15 20\n");
    print_numbers(NULL, 4, 5, 10, 15, 20);
    printf("\n\n");
}

void test_case_empty_separator() {
    printf("Test Case: Empty Separator\n");
    printf("Expected Output: 12345\n");
    print_numbers("", 5, 1, 2, 3, 4, 5);
    printf("\n\n");
}
void test_case_no_numbers() {
    printf("Test Case: No Numbers\n");
    printf("Expected Output: (No Output)\n");
    print_numbers(", ", 0);
    printf("\n\n");
}

void test_case_no_separator() {
    printf("Test Case: No Separator\n");
    printf("Expected Output: 123\n");
    print_numbers(NULL, 3, 1, 2, 3);
    printf("\n\n");
}

void test_case_negative_numbers() {
    printf("Test Case: Negative Numbers\n");
    printf("Expected Output: -1, -2, -3, -4, -5\n");
    print_numbers(", ", 5, -1, -2, -3, -4, -5);
    printf("\n\n");
}

void test_case_large_numbers() {
    printf("Test Case: Large Numbers\n");
    printf("Expected Output: 1000, 2000, 3000\n");
    print_numbers(", ", 3, 1000, 2000, 3000);
    printf("\n\n");
}

void test_case_custom_separator() {
    printf("Test Case: Custom Separator\n");
    printf("Expected Output: 10 - 20 - 30 - 40\n");
    print_numbers(" - ", 4, 10, 20, 30, 40);
    printf("\n\n");
}

int main() {
    test_case_basic_numbers();
    test_case_no_numbers();
    test_case_no_separator();
    test_case_negative_numbers();
    test_case_large_numbers();
    test_case_custom_separator();
   test_case_zero_numbers();
    test_case_single_number();
    test_case_null_separator();
    test_case_no_separator_multiple_numbers();
    test_case_empty_separator();
    return 0;
}
