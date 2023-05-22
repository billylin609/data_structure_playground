/*purpose: this file is intended to createa a data structure library
 * author: Yuchen Lin
 * date: 2023-5-21
 */
#include "link_list.h"


link_list::link_list() {
	HEAD = new node;
	(*HEAD).value = 0;
	HEAD->ptr = NULL;
	HOLD = HEAD;
}

link_list::link_list(uint8_t value) {
	HEAD = new node;
	(*HEAD).value = value;
	HEAD->ptr = NULL;
	HOLD = HEAD;
}

Std_ReturnType link_list::push(uint8_t value) {
	while(HOLD -> ptr) {
		HOLD = HOLD->ptr;
	}
	temp_node = new node;
	temp_node -> value = value;
	temp_node -> ptr = NULL;
	HOLD -> ptr = temp_node;
	HOLD = HEAD;
	return E_OK;
}

link_list::~link_list() {
	while(HEAD) {
		HOLD = HEAD;
		HEAD = HEAD->ptr;
		printf("value = %d\n", HOLD -> value);
		delete HOLD;
	}
	printf("link_list is free\n");
}

int main() {
	link_list test;
	test.push(2);
	test.push(12);

	link_list test1(10);
	test1.push(11);
	test1.push(12);

	return 0;
}
