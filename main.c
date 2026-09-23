#include <stdio.h>

void print_f(char *name);

int main(int argc, char **argv) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <file>/n", argv[0]);
        return 1;
    }

    print_f(argv[1]);
    return 0;
}

void print_f(char *name) {
    FILE *f = fopen(name, "rt");

    if (f != NULL) {
        int c = fgetc(f);
        while (c != EOF) {
            putc(c, stdout);
            c = fgetc(f);
        }
        fclose(f);
    }
}
