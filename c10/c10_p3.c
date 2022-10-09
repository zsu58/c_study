#include <stdio.h>
#include <string.h>

void main()
{
  char *pszData[5] = {"b", "a", "e", "c", "d"};
  char *tmp;

  for (int i = 0; i < 5; i++)
  {
    for (int j = i + 1; j < 5; j++)
    {
      // if (memcmp(pszData[i], pszData[j], 1) > 0)
      if (strcmp(pszData[i], pszData[j]) > 0)
      {
        tmp = pszData[i];
        pszData[i] = pszData[j];
        pszData[j] = tmp;
      }
    }
  }

  for (int i = 0; i < 5; i++)
    puts(pszData[i]);
}
