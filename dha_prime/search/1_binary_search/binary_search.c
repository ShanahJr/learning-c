#include<stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {

    bool *error = false;

    return 0;
}

void get_random_words_from_file(bool *error) {

    FILE *pf;
    long num_bytes;
    char *text;

    pf = fopen("./10000_words.txt", "r");

    if (pf == NULL) {
        perror("Failed to find the file");
        error = true;
        return;
    }

    fseek(pf, 0, int whence)
}

