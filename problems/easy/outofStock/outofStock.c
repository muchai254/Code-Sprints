//fix the code below to return the correct list if item is available

#include <stdio.h>
#include <string.h>

int inventoryFiller(char *inventory[], int invSize, char *required[], int reqSize, char *result[]) {
    int count = 0;
    for (int i = 0; i < reqSize; i++) {
        int found = 0;
        for (int j = 0; j < invSize; j++) {
            if (strcmp(required[i], inventory[j]) == 0) {
                found = 1;
                break;
            }
        }
        if (!found) {
            result[count++] = required[i];
        }
    }
    return 0; 
}

