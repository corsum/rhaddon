#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc > 1 && strcmp(argv[1], "--cm") == 0) {
     printf("FILE: %s\n", argv[2]);
    }
    else if (argc > 1 && strcmp(argv[1], "--r") == 0) {
     printf("RUNNING: %s\n", argv[2]);
    }
    else if (argc > 1 && strcmp(argv[1], "--i") == 0){
     printf("INFO\n");
    }
    return 0;
}
