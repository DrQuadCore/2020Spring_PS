#include <stdio.h>

struct Date
{
  int day;
  int month;
  int year;
};

struct Time
{
  int hour;
  int minute;
  int sec;
  char m;
};

int main()
{
  printf("size of Date: %lu bytes\n", sizeof(struct Date));
  printf("size of Time: %lu bytes\n", sizeof(struct Time));
}
