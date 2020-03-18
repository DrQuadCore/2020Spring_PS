#include <stdio.h>
#include <stdlib.h>

int main()
{
#if 0
  int num_pairs = 10000;
#else
  int num_pairs = 100000;
#endif
  int* numbers = (int*) malloc(sizeof(int)*num_pairs*2+1);

  for(int i=0; i<num_pairs*2+1; i++) {
    scanf("%d", numbers+i);
  }

  int max = -1;
  for(int i=0; i<num_pairs*2+1; i++) {
    if(numbers[i] > max)
      max = numbers[i];
  }

  int *storage = (int*) malloc(sizeof(int)*max);
  for(int i=0; i<max; i++)
    storage[i] = 0;

  for(int i=0; i<num_pairs*2+1; i++) {
    storage[ numbers[i] ]++;
  }

  for(int i=0; i<max; i++) {
    if( storage[ i ] == 1 )
      printf("%d\n", i);
  }

#if 0
  for(int i=0; i<max; i++) {
    printf("%d,", storage[i]);
  }
#endif

  return 0;
}
