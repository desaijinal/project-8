#include <stdio.h>

int findLength(char *str) {
    char *ptr = str;  
    int length = 0;

    while (*ptr != '\0') {
        length++; 
        ptr++;     
    }

    return length; 
}

 main() {
    char str[100];

    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);

    if (str[findLength(str) - 1] == '\n') {
        str[findLength(str) - 1] = '\0';
    }

    int length = findLength(str);
    
    printf("The length of the string is: %d\n", length);

}
