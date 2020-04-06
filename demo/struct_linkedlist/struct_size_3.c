#include <stdio.h>

struct foo 
{
    char c;         // 1 byte
    char c2;         // 1 byte
    short int i;    // 2 bytes
};

struct bar 
{
    short int a;    // 2 bytes
    char c;         // 1 byte
    char c2;        // 1 byte
    int i;          // 4 byte
};

int main()
{
  printf("size of foo: %lu bytes\n", sizeof(struct foo));
  printf("size of bar: %lu bytes\n", sizeof(struct bar));
}
