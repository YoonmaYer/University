#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Example {
	int number;
	char name[10];
};
void main() {
	struct Example *p; 
	p=(struct Example*)malloc(2*sizeof(struct Example)); // �����޸� �Ҵ� 
	if(p==NULL){ // p�� null�̸�  
		fprintf(stderr, "can't allocate memory\n'");
		exit(1); 
	}
	p->number=1;
	strcpy(p->name,"Park");
	(p+1)->number=2;
	strcpy((p+1)->name,"Kim");
	printf("%d\n",*p); // 6487552
	
	return 0;
}
