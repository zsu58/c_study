#include <stdio.h>

void main()
{
  int anData[5] = {1, 2, 3, 4, 5};
  // int *panData = anData;

  for (int i = 0; i < 5; ++i)
  {
    printf("%p\n", anData + i);
    // printf("%p\n", &anData[i]);
  }
}
