#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

#define ARRAY_SIZE 10

int main(){
  int input, i, count, in_word, histogram_of_words[ARRAY_SIZE]; 

  count = 0;
  in_word = FALSE;

  for (i = 1; i <= ARRAY_SIZE; i++)
  {
    histogram_of_words[i] = 0; 
  }

  while ((input = getchar()) != EOF)
  {
    if (input == ' ' || input == '\n' || input == '\t')
    {
      if (in_word == TRUE)
      {
        in_word = FALSE;
        ++histogram_of_words[count];
        count = 0;
      }
    }else{
      in_word = TRUE;
      ++count;
    }
  }
  
  for (i = 1; i <= ARRAY_SIZE; i++)
  {
    printf("%d :", i);
    for (int j = 0; j < histogram_of_words[i]; j++)
    {
      printf("#");
    }
    putchar('\n');
  }
  
  return 0;
}
