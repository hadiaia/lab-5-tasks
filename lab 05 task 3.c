#include <stdio.h>
#include <stdlib.h>

int main() {
int student_id = 2046;
    int last_digit;
    int sec_digit;
    long temp_id = student_id;
    
    last_digit = student_id % 10;
    
    while (temp_id >= 100) {
        temp_id /= 10;
    }
    
    sec_digit = temp_id % 10;

    printf("Using sample Student ID: %ld\n", student_id);
    printf("The 2nd digit is: %d\n", sec_digit);
    printf("The last digit is: %d\n\n", last_digit);

    if (sec_digit == 0 || last_digit == 0) {
        printf("Error: One of the digits is 0, so division is not possible.\n");
    }

    printf("The first 10 positive integers divisible by both %d and %d are:\n", sec_digit, last_digit);

    int count = 0;
    int num = 1;

    while (count < 10) {
        if ((num % sec_digit == 0) && (num % last_digit == 0)) {
            printf("%d\n", num);
            count++;
        }
        num++; 
    }

    return 0;
}
