#include <stdio.h>

void main()
{
  char aszData[3][16] = {
      "Test string",
      "Sample data",
      "Array of array"
  };
  printf("%c\n", aszData[1][3]);
  printf("%c\n", *(*(aszData + 1) + 3));
  printf("%s\n", aszData[0]);
  printf("%s\n", aszData + 1);
  printf("%s\n", *(aszData + 2));
  printf("%s\n", *aszData + 1);
  printf("%s\n", *(aszData + 1) + 1);
}
