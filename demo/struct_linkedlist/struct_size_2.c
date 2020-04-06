#include <stdio.h>

struct temp
{
    char c;         // 1 byte
    double d;       // 8 bytes
    int i;          // 4 bytes
};

int main()
{
  printf("size of temp: %lu bytes\n", sizeof(struct temp));
}
