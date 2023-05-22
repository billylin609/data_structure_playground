#include "common_dataType.h"
#include "stdio.h"

struct node{
uint8_t value;
node* ptr;		
};

typedef struct node* node_ptr;

typedef struct{
	node_ptr start;
	node_ptr end;
} node_group;

typedef node_group* node_group_ptr;


class link_list{
	private:
		/*create a temporily node for data store*/
		node_ptr temp_node;

		/*the start of the link list*/
		node_ptr HEAD;

		/*when removing any node the ptr can be placed here before removed*/
		node_ptr HOLD;

		/*if user request to search a value then store the ptr here for next quick fetch*/
		node_ptr HIT;

		/*this feature enable group copy and group delete*/
		node_group_ptr group_select;

		/* everytime fetch is called this value is set to true 
		 * everytime other function execute this value is false*/
		uint8_t is_new;

	public:
		/*create a link list which first element is 0 => cstring terminator*/
		link_list();
	
		/*create a link list which end with a customized data element*/
		link_list(uint8_t value);

		/*add a element to the end of the link list*/
		Std_ReturnType push(uint8_t value);

		/*pull out the first element data Note: this is a continous operation*/
		uint8_t pull();

		/*search in the list and to get the ptr if there is a node hit*/
		//fetch();

		/*call fetch and if there is node hit then fetch the  value in the content*/
		/*fetch is called if only if data is not new*/
		//hit_fetch();

		/*call fetch if there is a hit then add a new node after that*/
		//hit_append();

		/*remove the HEAD element*/
		//remove();

		/*if there if a fetch hit then remove the value*/
		//hit_remove();
		
		/*select the range of nodes in the link list*/
		//select_group();
		
		/*delete the group of nodes being selected*/
		//group_delete();

		/*copy the group of nodes to another address*/
		//group_copy();

		/*remove all the allocated memory*/
		~link_list();
};


