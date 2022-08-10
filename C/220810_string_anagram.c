#include <stdio.h>

int is_anagram (void);

int
main ()
{
  if (is_anagram())
    {
      printf ("Anagram.\n");
    }
  else {
      printf ("Not an anagram.\n");
  }
    

  return 0;
}


int
is_anagram (void)
{
  char str1[50], str2[50];
  int i, anagram, length;
  
  int cmp1[128] = {0};
  int cmp2[128] = {0};
  anagram = 0;
  length = 0;

  scanf ("%s", str1);
  scanf ("%s", str2);

    for (i = 0; str1[i] != '\0'; i++)
    {
      cmp1[str1[i]]++;
      // printf("%c%d \n", str1[i], cmp1[str1[i]]);
      length++;
    }
  
    for (i = 0; str2[i] != '\0'; i++)
    {
      cmp2[str2[i]]++;
      // printf("%c%d \n", str2[i], cmp2[str2[i]]);
    }
    
    if(i != length)
    {
        return anagram;
    }


  for (i = 0; i < 128; i++)
    {
    if (cmp1[i] == cmp2[i])
	{
	  anagram = 1;
	}
    else
	{
	  anagram = 0;
	  break;
	}
	
    }

  return anagram;
}
