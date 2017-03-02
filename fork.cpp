#include <unistd.h>
#include <iostream>
#include <err.h>

int main() {
  pid_t pid = fork();
  std::cerr << getpid() << ": Return value was: " << pid << std::endl;
  if (pid == -1) err(2, "fork");
  if (pid == 0) {
    // child
    std::cerr << getpid() << ": Child" << std::endl;
  } else {
    // parent
    std::cerr << getpid() << ": Parent" << std::endl;
  }
  for (int i = 0; i < 10; ++i) {
    sleep(1);
    std::cerr << getpid() << ": Counted to " << i << std::endl;
  }
  return 0;
}
