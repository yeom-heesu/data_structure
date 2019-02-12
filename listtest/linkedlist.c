#include <stdio.h>
#include <stdlib.h>

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
	while(1){
		
		printf(" %d ",n->data);
		if(n->next==NULL){
			break;
		}	
		printf("->");
		n = n->next;
		
	}
	printf("\n");

}

void main(int argc, char *argv[]){
  node *list;
  int cnt;

	if(argc<2){
	       	return;
	}
  
  cnt = argc-1;
  list = (node*)malloc(sizeof(node)*cnt); //created array size
  
  for(int i=0;i<cnt;i++){
  	list[i].data = atoi(argv[i+1]);
	if(i==cnt-1){
	  list[i].next = NULL;
	  break;
	}
  	list[i].next = &list[i+1];
  }


  dataprint(list);


}

