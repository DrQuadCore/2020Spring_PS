#include <stdio.h>
#include <stdlib.h>

#define GET_INDEX_ERROR -2 // for error code

int GetIndex(int numbers[], int size, int target)
{
  for(int i = 0; i < size; i++) {
    if(numbers[i] == target || numbers[i] == -1)
      return i;
  }
  return GET_INDEX_ERROR;
}

int main()
{
#if 0
  int num_pairs = 10000;
#else
  int num_pairs = 100000;
#endif

  int* counts   = (int*) malloc(sizeof(int)*num_pairs + 1);
  int* numbers  = (int*) malloc(sizeof(int)*num_pairs + 1);
  int* src      = (int*) malloc(sizeof(int)*num_pairs*2+1);

  // initialization
  for(int i=0; i<num_pairs*2+1; i++)
    src[i] = -1;
  for(int i=0; i<num_pairs+1; i++) {
    numbers[i] = -1;
    counts[i] = -1;
  }

  // for input
  for(int i=0; i<num_pairs*2+1; i++) {
    scanf("%d", src+i);
  }

  // traverse the src 
  // 1. increase the count
  // or 
  // 2. set the number with last index

  for(int i=0; i<num_pairs*2+1; i++) {
    int index = GetIndex(numbers, num_pairs + 1, src[i]);
    if(index == GET_INDEX_ERROR) {
      printf("GET_INDEX_ERROR\n");
      exit(1);
    } else {
      if(numbers[index] == src[i]) {
        //printf("Increasing the count for : %d, index: %d\n", src[i], index);
        // the number is already seen
        counts[index]++;
      } else {
        // the number is a new one
        //printf("Setting a new number: %d, index: %d\n", src[i], index);
        numbers[index] = src[i];
        counts[index] = 1;
      }
    }
  }

  for(int i=0; i<num_pairs+1; i++) {
    if(counts[i] == 1)
      printf("%d\n", numbers[i]);
  }

  return 0;
}
