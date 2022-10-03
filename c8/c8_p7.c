#include <stdio.h>
#include <string.h>
#define SIZE 100

void main()
{
  // 1)
  int startNum1 = 0;
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
      // printf("%d %d\t", i, startNum);
    {
      if (j == 0 && i != 0)
        startNum1 += 5;
      else
      {
        if (i % 2 == 0)
          startNum1++;
        else
          startNum1--;
      }
      printf("%d\t", startNum1);
    }
    puts("\n");
  }
    puts("\n");
  
  // 2)
  int startNum2 = 1;
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < (i + 1); j++)
    {
      printf("%d\t", startNum2++);
    }
    puts("\n");
  }
  puts("\n");
  
  // 3)
  int startNum3 = 1;
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < (4 - i); j++)
    {
      printf(" \t");
    }
    for (int k = 0; k < (i + 1); k++)
    {
      printf("%d\t", startNum3++);
    }
    puts("\n");
  }
  puts("\n");

  // 4)
  int startNum4 = 1;
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < (4 - i); j++)
    {
      printf(" \t");
    }
    for (int k = 0; k < (2 * i) + 1; k++)
    {
      printf("%d\t", startNum4++);
    }
    for (int j = 0; j < (4 - i); j++)
    {
      printf(" \t");
    }
    puts("\n");
  }
  puts("\n");
}
