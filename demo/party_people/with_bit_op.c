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

  int target = 0;
  for(int i=0; i<num_pairs*2+1; i++) {
    target ^= numbers[i];
  }
  printf("%d\n", target);

  return 0;
}
