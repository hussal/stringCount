//  main.c
//  stringCount
//  Created by Hussein Saleh on 11/14/21.
#include <stdio.h>

// Function prototypes
void countString(char message[]);

// Main
int main() {
    char message[100];
    
    printf("Enter a message: ");
    fgets(message, 100, stdin);
    countString(message);
    
    return 0;
}

// Functions
void countString(char message[]){
    int x= 0, words = 1, total = 0, numCount = 0;
    
    printf("\nMessage: %s", message);
    
    while (message[x] != '\0'){
        switch (message[x]){
            case ' ':
                words++;
                break;
            case '0':
                numCount++;
                break;
            case '1':
                numCount++;
                break;
            case '2':
                numCount++;
                break;
            case '3':
                numCount++;
                break;
            case '4':
                numCount++;
                break;
            case '5':
                numCount++;
                break;
            case '6':
                numCount++;
                break;
            case '7':
                numCount++;
                break;
            case '8':
                numCount++;
                break;
            case '9':
                numCount++;
                break;
        }
        total++;
        x++;
    }
    printf("\nNumber of words: %d", words);
    printf("\nNumber of digits: %d", numCount);
    printf("\nNumber of characters: %d\n\n", total);
}
