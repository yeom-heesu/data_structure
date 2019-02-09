#include <stdio.h>


struct node{
  int data;
  struct node *next;
};

void main(){
  struct node n1,n2;

  n1.data = 10;
  n1.next = &n2;
  n2.data = 20;
  n2.next = NULL;

  printf("%d -> %d",n1.data,n1.next->data);
}



