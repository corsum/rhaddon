#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  if(argc > 1 && strcmp(argv[1], "--help")){
      printf("INFO\n");
       }
   else {
      printf("COMPILING\n");
      }
    return 0;
}
