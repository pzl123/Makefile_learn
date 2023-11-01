#include <show_s.h>

void show_s(S_node * s1){
	printf("This is static mode\n");
	printf("a addr is %p\n",&s1->a);
	printf("b addr is %p\n",&s1->b);
	printf("c addr is %p\n",&s1->c);
	printf("e addr is %p\n",&s1->d);
}


