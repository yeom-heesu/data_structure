#include <stdio.h>

struct node{
  int data;
  struct node *next;
};

typedef struct node node;

void datain(node *cur,int d,node *n){
        cur->data = d;
        cur->next = n;
}
void dataprint(node *first){
	node *n = first;
	while(n->next != NULL){
		
		printf("%d -> ",n->data);
		
		n = n->next;
		
	}

}

void main(int argc, char *argv[]){
  node n1,n2,n3,n4;

       // if(argc<2){
         //       return;
	//}

  datain(&n1,10,&n2);
  datain(&n2,20,&n3);
  datain(&n3,30,&n4);
  datain(&n4,40,NULL);

  dataprint(&n1);


}

