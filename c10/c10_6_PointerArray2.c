#include <stdio.h>

int main(int argc, char *argv[])
{
  int i = 0;

  for (i = 0; i < argc; ++i)
    puts(argv[i]);

  return 0;
}
