/*
#include <stdio.h>
#include <stdlib.h>

enum { BUFFER_SIZE = 10 };

int main() {
    char* buffer = (char*)malloc(BUFFER_SIZE * sizeof(char));
    unsigned short sz = BUFFER_SIZE, i = 0;
    FILE* f = fopen("1.txt", "r");
    char valid = 1;
    short c;
    do {
        c = getc(f);
        if (c == '.' || c == '?' || c == '!' || c == EOF) {
            if (valid) {
                fwrite(buffer, sizeof(char), i, stdout);
                putchar(c);
            }
            else
                valid = 1;
            i = 0;
        }
        else if (valid)
            if (c == ',')
                valid = 0;
            else {
                buffer[i++] = c;
                if (i == sz)
                    buffer = (char*)realloc(buffer, (sz += BUFFER_SIZE) * sizeof(char));
            }
    } while (c != EOF);
    fclose(f);
}

*/