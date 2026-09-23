#include <stdio.h>

void print_f(char *name);

int main(int argc, char **argv) {
  for (int i = 1; i < argc, i++) {
    print_f(argv[i]);
  }
  return 0;
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
