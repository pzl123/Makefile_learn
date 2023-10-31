#include <stdio.h>

#ifndef _SHOW_H
#define _SHOW_H

typedef struct{
	int a;
	short b;
	double c;
	char d;
}S_node;

void show_s(){
	S_node s1;
	printf("a addr is %p",&s1.a);
	printf("b addr is %p",&s1.b);
	printf("c addr is %p",&s1.c);
	printf("e addr is %p",&s1.d);

	
}



#endif
