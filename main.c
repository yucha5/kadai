#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int result;
  int head = 0;
  int tail = 0;

  srand(time(NULL));

  printf("Tossing a coin...\n");

  for(int i = 1; i < 4; i++)
    {
      result = rand() % 2;

      if(result == 0)
      {
        printf("Round %d: Heads\n", i);
        head += 1;
      }

      else
      {
        printf("Round %d: Tails\n", i);
        tail += 1;
      }
    }

  printf("Heads: %d, Tails: %d\n", head, tail);
  
  if(heads > tails)
  {
    printf("You won\n");
  }

  else
  {
    printf("You lost\n");
  }

  return 0;
}
  
