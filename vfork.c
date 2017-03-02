#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
  pid_t memory = 0;
  pid_t pid = vfork();
  if (pid == 0) {
    // child, runs first
    memory = getpid();
    exit(0);
  } else {
    // parent, gets memory from child
    printf("%d %d\n", getpid(), memory);
  }
  return 0;
}
