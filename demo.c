#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "demo.h"

int main(){
    char input[100];
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    
    // Remove newline character if present
    size_t len = strlen(input);
    if (len > 0 && input[len - 1] == '\n') {
        input[len - 1] = '\0';
    }

    prcess_string(input);
    
    return 0;
}