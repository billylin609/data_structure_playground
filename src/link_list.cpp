/*purpose: this file is intended to createa a data structure library
 * author: Yuchen Lin
 * date: 2023-5-21
 */
#include "link_list.h"


link_list::link_list() {
	HEAD = new node;
	(*HEAD).value = 0;
	HEAD->ptr = NULL;
}

link_list::~link_list() {
	while(HEAD) {
		HOLD = HEAD;
		HEAD = HEAD->ptr;
		delete HOLD;
	}
	printf("link_list is free\n");
}

int main() {
	link_list test;

	return 0;
}
