#include <unistd.h>

int main(int argc, char *argv[]) {
  if (1 != argc) {
    setuid(0);
    execvp(argv[1], 1 + argv);
  }
}

