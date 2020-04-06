#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Node
{
  int data;
  struct Node* next;
};

typedef struct Node NODE;

NODE* head;

void addFirst(int val)
{
  NODE* node = (NODE*) malloc(sizeof(NODE)); 
  node->data = val;
  node->next = head;
  head = node;
}

void printList()
{
  NODE* curr = head;
  int count = 0;

  while( curr != NULL ) {
    printf("%3d: Value of current node: %d\n", ++count, curr->data);
    curr = curr->next;
  }
}

int main()
{
  srand(time(0));
  printList();
  for(int i=0; i<10; i++)
    addFirst(rand() % 100);
  printList();
}
