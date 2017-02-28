#include <iostream>
#include "../../headers/Sales_item.h"

int main(){
	Sales_item sum, item;

	std::cout << "Enter transactions with a same ISBN" << std::endl;
	while(std::cin >> item){
		sum += item;
	}
	std::cout << "Summary" << std::endl << sum << std::endl;

	return 0;
}